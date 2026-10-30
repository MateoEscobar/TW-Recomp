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

// Function: sub_00443B48
// Address: 0x443b48 - 0x443cd8
void sub_00443B48_0x443b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443B48_0x443b48");
#endif

    switch (ctx->pc) {
        case 0x443b90u: goto label_443b90;
        case 0x443bf8u: goto label_443bf8;
        case 0x443c64u: goto label_443c64;
        case 0x443c98u: goto label_443c98;
        default: break;
    }

    ctx->pc = 0x443b48u;

    // 0x443b48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x443b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x443b4c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x443b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x443b50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x443b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x443b54: 0x24429ea0  addiu       $v0, $v0, -0x6160
    ctx->pc = 0x443b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x443b58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x443b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x443b5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x443b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443b60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x443b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x443b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x443b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x443b68: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x443b68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x519EBCu));
    // 0x443b6c: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x443B6Cu;
    {
        const bool branch_taken_0x443b6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x443B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B6Cu;
        // 0x443b70: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443b6c) {
            ctx->pc = 0x443CC0u;
            goto label_443cc0;
        }
    }
    ctx->pc = 0x443B74u;
    // 0x443b74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x443b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x443b78: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x443b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x443b7c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x443b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10000000
    // 0x443b80: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x443B80u;
    {
        const bool branch_taken_0x443b80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x443b80) {
            ctx->pc = 0x443B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443B80u;
            // 0x443b84: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443BB4u;
            goto label_443bb4;
        }
    }
    ctx->pc = 0x443B88u;
    // 0x443b88: 0xc110e50  jal         func_443940
    ctx->pc = 0x443B88u;
    SET_GPR_U32(ctx, 31, 0x443B90u);
    ctx->pc = 0x443B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443B88u;
    // 0x443b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443940u, 0x443B88u, 0x443B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443B90u;
label_443b90:
    // 0x443b90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x443b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x443b94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x443b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x443b98: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x443b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x443b9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x443b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443ba0: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x443ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x443ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x443ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443ba8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x443ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443bac: 0x8110e4c  j           func_443930
    ctx->pc = 0x443BACu;
    ctx->pc = 0x443BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443BACu;
    // 0x443bb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    sub_00443930_0x443930(rdram, ctx, runtime); return;
    ctx->pc = 0x443BB4u;
label_443bb4:
    // 0x443bb4: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x443bb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x443bb8: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x443bb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x443bbc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x443bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x443bc0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x443bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x443bc4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x443BC4u;
    {
        const bool branch_taken_0x443bc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x443BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443BC4u;
        // 0x443bc8: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443bc4) {
            ctx->pc = 0x443C2Cu;
            goto label_443c2c;
        }
    }
    ctx->pc = 0x443BCCu;
    // 0x443bcc: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x443bccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x443bd0: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x443bd0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x443bd4: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x443bd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x443bd8: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x443bd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x443bdc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x443bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x443be0: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x443be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x443be4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x443be4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x443be8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x443BE8u;
    {
        const bool branch_taken_0x443be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443BE8u;
        // 0x443bec: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x443be8) {
            ctx->pc = 0x443C2Cu;
            goto label_443c2c;
        }
    }
    ctx->pc = 0x443BF0u;
    // 0x443bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x443bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443bf4: 0x0  nop
    ctx->pc = 0x443bf4u;
    // NOP
label_443bf8:
    // 0x443bf8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x443bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x443bfc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x443BFCu;
    {
        const bool branch_taken_0x443bfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x443C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443BFCu;
        // 0x443c00: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x443bfc) {
            ctx->pc = 0x443C30u;
            goto label_443c30;
        }
    }
    ctx->pc = 0x443C04u;
    // 0x443c04: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x443c04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x443c08: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x443c08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x443c0c: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x443c0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x443c10: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x443c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x443c14: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x443c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x443c18: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x443c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x443c1c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x443C1Cu;
    {
        const bool branch_taken_0x443c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x443c1c) {
            ctx->pc = 0x443C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443C1Cu;
            // 0x443c20: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443C34u;
            goto label_443c34;
        }
    }
    ctx->pc = 0x443C24u;
    // 0x443c24: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x443C24u;
    {
        const bool branch_taken_0x443c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C24u;
        // 0x443c28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443c24) {
            ctx->pc = 0x443BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443bf8;
        }
    }
    ctx->pc = 0x443C2Cu;
label_443c2c:
    // 0x443c2c: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x443c2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_443c30:
    // 0x443c30: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x443c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_443c34:
    // 0x443c34: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x443c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x443c38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x443C38u;
    {
        const bool branch_taken_0x443c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x443C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C38u;
        // 0x443c3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443c38) {
            ctx->pc = 0x443C88u;
            goto label_443c88;
        }
    }
    ctx->pc = 0x443C40u;
    // 0x443c40: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x443c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x443c44: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x443c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x443c48: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x443c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x443c4c: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x443c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x443c50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x443c50u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x443c54: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x443c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x443c58: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x443c58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x443c5c: 0xc110e50  jal         func_443940
    ctx->pc = 0x443C5Cu;
    SET_GPR_U32(ctx, 31, 0x443C64u);
    ctx->pc = 0x443C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443C5Cu;
    // 0x443c60: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443940u, 0x443C5Cu, 0x443C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443C64u;
label_443c64:
    // 0x443c64: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x443c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x443c68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x443c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x443c6c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x443c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x443c70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x443c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443c74: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x443c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x443c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x443c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443c7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x443c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443c80: 0x8110e4c  j           func_443930
    ctx->pc = 0x443C80u;
    ctx->pc = 0x443C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443C80u;
    // 0x443c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    sub_00443930_0x443930(rdram, ctx, runtime); return;
    ctx->pc = 0x443C88u;
label_443c88:
    // 0x443c88: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x443c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x443c8c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x443c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x443c90: 0xc110e4c  jal         func_443930
    ctx->pc = 0x443C90u;
    SET_GPR_U32(ctx, 31, 0x443C98u);
    ctx->pc = 0x443C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443C90u;
    // 0x443c94: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443930u, 0x443C90u, 0x443C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443C98u;
label_443c98:
    // 0x443c98: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x443c98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x443c9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x443c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x443ca0: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x443ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x443ca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x443ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443ca8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x443ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443cac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x443cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x443cb0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x443cb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x443cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x443cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443cb8: 0x8110e50  j           func_443940
    ctx->pc = 0x443CB8u;
    ctx->pc = 0x443CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443CB8u;
    // 0x443cbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443940u;
    sub_00443940_0x443940(rdram, ctx, runtime); return;
    ctx->pc = 0x443CC0u;
label_443cc0:
    // 0x443cc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x443cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x443cc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x443cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443cc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x443cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x443cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x443CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CD0u;
        // 0x443cd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CD8u;
}
