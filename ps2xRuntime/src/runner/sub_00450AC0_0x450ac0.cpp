#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00450AC0
// Address: 0x450ac0 - 0x450f70
void sub_00450AC0_0x450ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450AC0_0x450ac0");
#endif

    switch (ctx->pc) {
        case 0x450b0cu: goto label_450b0c;
        case 0x450b38u: goto label_450b38;
        case 0x450b88u: goto label_450b88;
        case 0x450bb0u: goto label_450bb0;
        case 0x450c30u: goto label_450c30;
        case 0x450c54u: goto label_450c54;
        case 0x450c78u: goto label_450c78;
        case 0x450cccu: goto label_450ccc;
        case 0x450d04u: goto label_450d04;
        case 0x450d28u: goto label_450d28;
        case 0x450dacu: goto label_450dac;
        case 0x450dd0u: goto label_450dd0;
        case 0x450e58u: goto label_450e58;
        case 0x450e80u: goto label_450e80;
        case 0x450ec8u: goto label_450ec8;
        case 0x450f4cu: goto label_450f4c;
        default: break;
    }

    ctx->pc = 0x450ac0u;

    // 0x450ac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x450ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x450ac4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x450ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x450ac8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x450ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x450acc: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x450accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x450ad0: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x450ad0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x450ad4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x450ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x450ad8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x450ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x450adc: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x450adcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x450ae0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x450ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x450ae4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x450ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x450ae8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x450ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x450aec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x450aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450af0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x450af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x450af4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x450af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450af8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x450af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x450afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x450afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x450b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x450b04: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x450B04u;
    SET_GPR_U32(ctx, 31, 0x450B0Cu);
    ctx->pc = 0x450B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450B04u;
    // 0x450b08: 0xc2a823  subu        $s5, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x450B04u, 0x450B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450B0Cu;
label_450b0c:
    // 0x450b0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450b10: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x450b14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450b14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x450b18: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450b1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x450B1Cu;
    {
        const bool branch_taken_0x450b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450B1Cu;
        // 0x450b20: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450b1c) {
            ctx->pc = 0x450B58u;
            goto label_450b58;
        }
    }
    ctx->pc = 0x450B24u;
    // 0x450b24: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x450b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450b28: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450b2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450b2cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450b30: 0xf  sync
    ctx->pc = 0x450b30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450b34: 0x40f  sync.p
    ctx->pc = 0x450b34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450b38:
    // 0x450b38: 0x0  nop
    ctx->pc = 0x450b38u;
    // NOP
    // 0x450b3c: 0x0  nop
    ctx->pc = 0x450b3cu;
    // NOP
    // 0x450b40: 0x0  nop
    ctx->pc = 0x450b40u;
    // NOP
    // 0x450b44: 0x0  nop
    ctx->pc = 0x450b44u;
    // NOP
    // 0x450b48: 0x0  nop
    ctx->pc = 0x450b48u;
    // NOP
    // 0x450b4c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450B4Cu;
    {
        const bool branch_taken_0x450b4c = (false);
        if (branch_taken_0x450b4c) {
            ctx->pc = 0x450B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450b38;
        }
    }
    ctx->pc = 0x450B54u;
    // 0x450b54: 0x0  nop
    ctx->pc = 0x450b54u;
    // NOP
label_450b58:
    // 0x450b58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450b5c: 0x2a040401  slti        $a0, $s0, 0x401
    ctx->pc = 0x450b5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x450b60: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x450b64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450b64u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x450b68: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450b6c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x450B6Cu;
    {
        const bool branch_taken_0x450b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450B6Cu;
        // 0x450b70: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450b6c) {
            ctx->pc = 0x450BCCu;
            goto label_450bcc;
        }
    }
    ctx->pc = 0x450B74u;
    // 0x450b74: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x450b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x450b78: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450b7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450b7cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450b80: 0xf  sync
    ctx->pc = 0x450b80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450b84: 0x40f  sync.p
    ctx->pc = 0x450b84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450b88:
    // 0x450b88: 0x0  nop
    ctx->pc = 0x450b88u;
    // NOP
    // 0x450b8c: 0x0  nop
    ctx->pc = 0x450b8cu;
    // NOP
    // 0x450b90: 0x0  nop
    ctx->pc = 0x450b90u;
    // NOP
    // 0x450b94: 0x0  nop
    ctx->pc = 0x450b94u;
    // NOP
    // 0x450b98: 0x0  nop
    ctx->pc = 0x450b98u;
    // NOP
    // 0x450b9c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450B9Cu;
    {
        const bool branch_taken_0x450b9c = (false);
        if (branch_taken_0x450b9c) {
            ctx->pc = 0x450B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450b88;
        }
    }
    ctx->pc = 0x450BA4u;
    // 0x450ba4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450ba8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x450bac: 0x0  nop
    ctx->pc = 0x450bacu;
    // NOP
label_450bb0:
    // 0x450bb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x450bb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450bb8: 0x0  nop
    ctx->pc = 0x450bb8u;
    // NOP
    // 0x450bbc: 0x0  nop
    ctx->pc = 0x450bbcu;
    // NOP
    // 0x450bc0: 0x0  nop
    ctx->pc = 0x450bc0u;
    // NOP
    // 0x450bc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x450BC4u;
    {
        const bool branch_taken_0x450bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450bc4) {
            ctx->pc = 0x450BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450bb0;
        }
    }
    ctx->pc = 0x450BCCu;
label_450bcc:
    // 0x450bcc: 0x1480006a  bnez        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x450BCCu;
    {
        const bool branch_taken_0x450bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x450bcc) {
            ctx->pc = 0x450D78u;
            goto label_450d78;
        }
    }
    ctx->pc = 0x450BD4u;
    // 0x450bd4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x450bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x450bd8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x450bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x450bdc: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x450bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x450be0: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x450be0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x450be4: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x450be4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x450be8: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x450be8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x450bec: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x450becu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x450bf0: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x450bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x450bf4: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x450bf4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x450bf8: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x450bf8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x450bfc: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x450bfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x450c00: 0x34a5e020  ori         $a1, $a1, 0xE020
    ctx->pc = 0x450c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57376);
    // 0x450c04: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x450c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x450c08: 0x3508e010  ori         $t0, $t0, 0xE010
    ctx->pc = 0x450c08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57360);
    // 0x450c0c: 0x3673d480  ori         $s3, $s3, 0xD480
    ctx->pc = 0x450c0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)54400);
    // 0x450c10: 0x3739d410  ori         $t9, $t9, 0xD410
    ctx->pc = 0x450c10u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)54288);
    // 0x450c14: 0x3718d420  ori         $t8, $t8, 0xD420
    ctx->pc = 0x450c14u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)54304);
    // 0x450c18: 0x24140400  addiu       $s4, $zero, 0x400
    ctx->pc = 0x450c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x450c1c: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x450c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450c20: 0x34e7d000  ori         $a3, $a3, 0xD000
    ctx->pc = 0x450c20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53248);
    // 0x450c24: 0x35efd080  ori         $t7, $t7, 0xD080
    ctx->pc = 0x450c24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)53376);
    // 0x450c28: 0x35ced010  ori         $t6, $t6, 0xD010
    ctx->pc = 0x450c28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)53264);
    // 0x450c2c: 0x35add020  ori         $t5, $t5, 0xD020
    ctx->pc = 0x450c2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53280);
label_450c30:
    // 0x450c30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x450c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x450c34: 0x2603fc00  addiu       $v1, $s0, -0x400
    ctx->pc = 0x450c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x450c38: 0x262b4000  addiu       $t3, $s1, 0x4000
    ctx->pc = 0x450c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x450c3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450c40: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x450C40u;
    {
        const bool branch_taken_0x450c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450C40u;
        // 0x450c44: 0x264c4000  addiu       $t4, $s2, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450c40) {
            ctx->pc = 0x450C94u;
            goto label_450c94;
        }
    }
    ctx->pc = 0x450C48u;
    // 0x450c48: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x450c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x450c4c: 0xf  sync
    ctx->pc = 0x450c4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450c50: 0x40f  sync.p
    ctx->pc = 0x450c50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450c54:
    // 0x450c54: 0x0  nop
    ctx->pc = 0x450c54u;
    // NOP
    // 0x450c58: 0x0  nop
    ctx->pc = 0x450c58u;
    // NOP
    // 0x450c5c: 0x0  nop
    ctx->pc = 0x450c5cu;
    // NOP
    // 0x450c60: 0x0  nop
    ctx->pc = 0x450c60u;
    // NOP
    // 0x450c64: 0x0  nop
    ctx->pc = 0x450c64u;
    // NOP
    // 0x450c68: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450C68u;
    {
        const bool branch_taken_0x450c68 = (false);
        if (branch_taken_0x450c68) {
            ctx->pc = 0x450C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450c54;
        }
    }
    ctx->pc = 0x450C70u;
    // 0x450c70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450c74: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x450c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_450c78:
    // 0x450c78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x450c78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x450c7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450c80: 0x0  nop
    ctx->pc = 0x450c80u;
    // NOP
    // 0x450c84: 0x0  nop
    ctx->pc = 0x450c84u;
    // NOP
    // 0x450c88: 0x0  nop
    ctx->pc = 0x450c88u;
    // NOP
    // 0x450c8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x450C8Cu;
    {
        const bool branch_taken_0x450c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450c8c) {
            ctx->pc = 0x450C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450c78;
        }
    }
    ctx->pc = 0x450C94u;
label_450c94:
    // 0x450c94: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x450c94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x450c98: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x450c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x450c9c: 0xaf310000  sw          $s1, 0x0($t9)
    ctx->pc = 0x450c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 17));
    // 0x450ca0: 0xaf140000  sw          $s4, 0x0($t8)
    ctx->pc = 0x450ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 20));
    // 0x450ca4: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x450ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x450ca8: 0xf  sync
    ctx->pc = 0x450ca8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450cac: 0x40f  sync.p
    ctx->pc = 0x450cacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450cb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x450cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x450cb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450cb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x450CB8u;
    {
        const bool branch_taken_0x450cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450cb8) {
            ctx->pc = 0x450CE8u;
            goto label_450ce8;
        }
    }
    ctx->pc = 0x450CC0u;
    // 0x450cc0: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x450cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x450cc4: 0xf  sync
    ctx->pc = 0x450cc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450cc8: 0x40f  sync.p
    ctx->pc = 0x450cc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450ccc:
    // 0x450ccc: 0x0  nop
    ctx->pc = 0x450cccu;
    // NOP
    // 0x450cd0: 0x0  nop
    ctx->pc = 0x450cd0u;
    // NOP
    // 0x450cd4: 0x0  nop
    ctx->pc = 0x450cd4u;
    // NOP
    // 0x450cd8: 0x0  nop
    ctx->pc = 0x450cd8u;
    // NOP
    // 0x450cdc: 0x0  nop
    ctx->pc = 0x450cdcu;
    // NOP
    // 0x450ce0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450CE0u;
    {
        const bool branch_taken_0x450ce0 = (false);
        if (branch_taken_0x450ce0) {
            ctx->pc = 0x450CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450ccc;
        }
    }
    ctx->pc = 0x450CE8u;
label_450ce8:
    // 0x450ce8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x450ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x450cec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450cf0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x450CF0u;
    {
        const bool branch_taken_0x450cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450cf0) {
            ctx->pc = 0x450D44u;
            goto label_450d44;
        }
    }
    ctx->pc = 0x450CF8u;
    // 0x450cf8: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x450cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x450cfc: 0xf  sync
    ctx->pc = 0x450cfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450d00: 0x40f  sync.p
    ctx->pc = 0x450d00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450d04:
    // 0x450d04: 0x0  nop
    ctx->pc = 0x450d04u;
    // NOP
    // 0x450d08: 0x0  nop
    ctx->pc = 0x450d08u;
    // NOP
    // 0x450d0c: 0x0  nop
    ctx->pc = 0x450d0cu;
    // NOP
    // 0x450d10: 0x0  nop
    ctx->pc = 0x450d10u;
    // NOP
    // 0x450d14: 0x0  nop
    ctx->pc = 0x450d14u;
    // NOP
    // 0x450d18: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450D18u;
    {
        const bool branch_taken_0x450d18 = (false);
        if (branch_taken_0x450d18) {
            ctx->pc = 0x450D04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450d04;
        }
    }
    ctx->pc = 0x450D20u;
    // 0x450d20: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450d24: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x450d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_450d28:
    // 0x450d28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x450d28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x450d2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450d30: 0x0  nop
    ctx->pc = 0x450d30u;
    // NOP
    // 0x450d34: 0x0  nop
    ctx->pc = 0x450d34u;
    // NOP
    // 0x450d38: 0x0  nop
    ctx->pc = 0x450d38u;
    // NOP
    // 0x450d3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x450D3Cu;
    {
        const bool branch_taken_0x450d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450d3c) {
            ctx->pc = 0x450D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450d28;
        }
    }
    ctx->pc = 0x450D44u;
label_450d44:
    // 0x450d44: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x450d44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x450d48: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x450d48u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    // 0x450d4c: 0xadd20000  sw          $s2, 0x0($t6)
    ctx->pc = 0x450d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 18));
    // 0x450d50: 0xadb40000  sw          $s4, 0x0($t5)
    ctx->pc = 0x450d50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 20));
    // 0x450d54: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x450d54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x450d58: 0xf  sync
    ctx->pc = 0x450d58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450d5c: 0x40f  sync.p
    ctx->pc = 0x450d5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450d60: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x450d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450d64: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x450d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450d68: 0x2a020401  slti        $v0, $s0, 0x401
    ctx->pc = 0x450d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x450d6c: 0x1040ffb0  beqz        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x450D6Cu;
    {
        const bool branch_taken_0x450d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450D6Cu;
        // 0x450d70: 0x180902d  daddu       $s2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450d6c) {
            ctx->pc = 0x450C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450c30;
        }
    }
    ctx->pc = 0x450D74u;
    // 0x450d74: 0x0  nop
    ctx->pc = 0x450d74u;
    // NOP
label_450d78:
    // 0x450d78: 0x1200006f  beqz        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x450D78u;
    {
        const bool branch_taken_0x450d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x450D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450D78u;
        // 0x450d7c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450d78) {
            ctx->pc = 0x450F38u;
            goto label_450f38;
        }
    }
    ctx->pc = 0x450D80u;
    // 0x450d80: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x450d80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x450d84: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x450d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450d88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x450d8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450d90: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x450D90u;
    {
        const bool branch_taken_0x450d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450D90u;
        // 0x450d94: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450d90) {
            ctx->pc = 0x450DECu;
            goto label_450dec;
        }
    }
    ctx->pc = 0x450D98u;
    // 0x450d98: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x450d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x450d9c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450da0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450da0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450da4: 0xf  sync
    ctx->pc = 0x450da4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450da8: 0x40f  sync.p
    ctx->pc = 0x450da8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450dac:
    // 0x450dac: 0x0  nop
    ctx->pc = 0x450dacu;
    // NOP
    // 0x450db0: 0x0  nop
    ctx->pc = 0x450db0u;
    // NOP
    // 0x450db4: 0x0  nop
    ctx->pc = 0x450db4u;
    // NOP
    // 0x450db8: 0x0  nop
    ctx->pc = 0x450db8u;
    // NOP
    // 0x450dbc: 0x0  nop
    ctx->pc = 0x450dbcu;
    // NOP
    // 0x450dc0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450DC0u;
    {
        const bool branch_taken_0x450dc0 = (false);
        if (branch_taken_0x450dc0) {
            ctx->pc = 0x450DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450dac;
        }
    }
    ctx->pc = 0x450DC8u;
    // 0x450dc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450dcc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_450dd0:
    // 0x450dd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x450dd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450dd8: 0x0  nop
    ctx->pc = 0x450dd8u;
    // NOP
    // 0x450ddc: 0x0  nop
    ctx->pc = 0x450ddcu;
    // NOP
    // 0x450de0: 0x0  nop
    ctx->pc = 0x450de0u;
    // NOP
    // 0x450de4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x450DE4u;
    {
        const bool branch_taken_0x450de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450de4) {
            ctx->pc = 0x450DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450dd0;
        }
    }
    ctx->pc = 0x450DECu;
label_450dec:
    // 0x450dec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450df0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x450df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x450df4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x450df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x450df8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450dfc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x450dfcu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x450e00: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x450e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x450e04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x450e04u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x450e08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450e0c: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x450e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x450e10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450e14: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x450e14u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x450e18: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x450e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x450e1c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450e20: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x450e20u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x450e24: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x450e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x450e28: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x450e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450e2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x450e2cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x450e30: 0xf  sync
    ctx->pc = 0x450e30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450e34: 0x40f  sync.p
    ctx->pc = 0x450e34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450e38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x450e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x450e3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450e40: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x450E40u;
    {
        const bool branch_taken_0x450e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450E40u;
        // 0x450e44: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450e40) {
            ctx->pc = 0x450E9Cu;
            goto label_450e9c;
        }
    }
    ctx->pc = 0x450E48u;
    // 0x450e48: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450e4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x450e4cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x450e50: 0xf  sync
    ctx->pc = 0x450e50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450e54: 0x40f  sync.p
    ctx->pc = 0x450e54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450e58:
    // 0x450e58: 0x0  nop
    ctx->pc = 0x450e58u;
    // NOP
    // 0x450e5c: 0x0  nop
    ctx->pc = 0x450e5cu;
    // NOP
    // 0x450e60: 0x0  nop
    ctx->pc = 0x450e60u;
    // NOP
    // 0x450e64: 0x0  nop
    ctx->pc = 0x450e64u;
    // NOP
    // 0x450e68: 0x0  nop
    ctx->pc = 0x450e68u;
    // NOP
    // 0x450e6c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450E6Cu;
    {
        const bool branch_taken_0x450e6c = (false);
        if (branch_taken_0x450e6c) {
            ctx->pc = 0x450E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450e58;
        }
    }
    ctx->pc = 0x450E74u;
    // 0x450e74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450e78: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x450e7c: 0x0  nop
    ctx->pc = 0x450e7cu;
    // NOP
label_450e80:
    // 0x450e80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450e80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x450e84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x450e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450e88: 0x0  nop
    ctx->pc = 0x450e88u;
    // NOP
    // 0x450e8c: 0x0  nop
    ctx->pc = 0x450e8cu;
    // NOP
    // 0x450e90: 0x0  nop
    ctx->pc = 0x450e90u;
    // NOP
    // 0x450e94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x450E94u;
    {
        const bool branch_taken_0x450e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450e94) {
            ctx->pc = 0x450E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450e80;
        }
    }
    ctx->pc = 0x450E9Cu;
label_450e9c:
    // 0x450e9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450ea0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x450ea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x450ea8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450eac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x450EACu;
    {
        const bool branch_taken_0x450eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450EACu;
        // 0x450eb0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450eac) {
            ctx->pc = 0x450EE8u;
            goto label_450ee8;
        }
    }
    ctx->pc = 0x450EB4u;
    // 0x450eb4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x450eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450eb8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450ebc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450ebcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450ec0: 0xf  sync
    ctx->pc = 0x450ec0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450ec4: 0x40f  sync.p
    ctx->pc = 0x450ec4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450ec8:
    // 0x450ec8: 0x0  nop
    ctx->pc = 0x450ec8u;
    // NOP
    // 0x450ecc: 0x0  nop
    ctx->pc = 0x450eccu;
    // NOP
    // 0x450ed0: 0x0  nop
    ctx->pc = 0x450ed0u;
    // NOP
    // 0x450ed4: 0x0  nop
    ctx->pc = 0x450ed4u;
    // NOP
    // 0x450ed8: 0x0  nop
    ctx->pc = 0x450ed8u;
    // NOP
    // 0x450edc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450EDCu;
    {
        const bool branch_taken_0x450edc = (false);
        if (branch_taken_0x450edc) {
            ctx->pc = 0x450EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450ec8;
        }
    }
    ctx->pc = 0x450EE4u;
    // 0x450ee4: 0x0  nop
    ctx->pc = 0x450ee4u;
    // NOP
label_450ee8:
    // 0x450ee8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450eec: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x450eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450ef0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x450ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x450ef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x450ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450ef8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x450ef8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x450efc: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x450efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x450f00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450f04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x450f04u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x450f08: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x450f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x450f0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450f10: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x450f10u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x450f14: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x450f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x450f18: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x450f18u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x450f1c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x450f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x450f20: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x450f20u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x450f24: 0xf  sync
    ctx->pc = 0x450f24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450f28: 0x40f  sync.p
    ctx->pc = 0x450f28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450f2c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x450f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x450f30: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x450f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x450f34: 0x0  nop
    ctx->pc = 0x450f34u;
    // NOP
label_450f38:
    // 0x450f38: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x450F38u;
    {
        const bool branch_taken_0x450f38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x450F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450F38u;
        // 0x450f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450f38) {
            ctx->pc = 0x450F4Cu;
            goto label_450f4c;
        }
    }
    ctx->pc = 0x450F40u;
    // 0x450f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x450f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450f44: 0xc10c190  jal         func_430640
    ctx->pc = 0x450F44u;
    SET_GPR_U32(ctx, 31, 0x450F4Cu);
    ctx->pc = 0x450F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450F44u;
    // 0x450f48: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x450F44u, 0x450F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450F4Cu;
label_450f4c:
    // 0x450f4c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x450f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x450f50: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x450f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450f54: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x450f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x450f58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x450f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450f5c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x450f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450f60: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x450f60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x450f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450f68: 0x3e00008  jr          $ra
    ctx->pc = 0x450F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450F68u;
        // 0x450f6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450F70u;
}
