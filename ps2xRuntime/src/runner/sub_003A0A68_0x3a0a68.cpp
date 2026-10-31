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

// Function: sub_003A0A68
// Address: 0x3a0a68 - 0x3a0be8
void sub_003A0A68_0x3a0a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0A68_0x3a0a68");
#endif

    switch (ctx->pc) {
        case 0x3a0ab0u: goto label_3a0ab0;
        case 0x3a0ad8u: goto label_3a0ad8;
        case 0x3a0b20u: goto label_3a0b20;
        case 0x3a0b48u: goto label_3a0b48;
        case 0x3a0b74u: goto label_3a0b74;
        case 0x3a0b7cu: goto label_3a0b7c;
        case 0x3a0b8cu: goto label_3a0b8c;
        case 0x3a0b94u: goto label_3a0b94;
        case 0x3a0b9cu: goto label_3a0b9c;
        default: break;
    }

    ctx->pc = 0x3a0a68u;

    // 0x3a0a68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a0a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a0a6c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3a0a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3a0a70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a0a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3a0a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a0a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3a0a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3a0a7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a0a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a0a80: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3a0a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3a0a84: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3a0a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3a0a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a0a8c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x3a0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x3a0a90: 0x50600049  beql        $v1, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x3A0A90u;
    {
        const bool branch_taken_0x3a0a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0a90) {
            ctx->pc = 0x3A0A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0A90u;
            // 0x3a0a94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0BB8u;
            goto label_3a0bb8;
        }
    }
    ctx->pc = 0x3A0A98u;
    // 0x3a0a98: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x3a0a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3a0a9c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A0A9Cu;
    {
        const bool branch_taken_0x3a0a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A9Cu;
        // 0x3a0aa0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a9c) {
            ctx->pc = 0x3A0B10u;
            goto label_3a0b10;
        }
    }
    ctx->pc = 0x3A0AA4u;
    // 0x3a0aa4: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x3a0aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a0aa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a0aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0aac: 0x0  nop
    ctx->pc = 0x3a0aacu;
    // NOP
label_3a0ab0:
    // 0x3a0ab0: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3a0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3a0ab4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a0ab8: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x3a0ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a0abc: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3A0ABCu;
    {
        const bool branch_taken_0x3a0abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0abc) {
            ctx->pc = 0x3A0AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0ABCu;
            // 0x3a0ac0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0AF4u;
            goto label_3a0af4;
        }
    }
    ctx->pc = 0x3A0AC4u;
    // 0x3a0ac4: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x3a0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x3a0ac8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3A0AC8u;
    {
        const bool branch_taken_0x3a0ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0ac8) {
            ctx->pc = 0x3A0ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0AC8u;
            // 0x3a0acc: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0AF4u;
            goto label_3a0af4;
        }
    }
    ctx->pc = 0x3A0AD0u;
    // 0x3a0ad0: 0xc05d462  jal         func_175188
    ctx->pc = 0x3A0AD0u;
    SET_GPR_U32(ctx, 31, 0x3A0AD8u);
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x3A0AD0u, 0x3A0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0AD8u;
label_3a0ad8:
    // 0x3a0ad8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0AD8u;
    {
        const bool branch_taken_0x3a0ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0ad8) {
            ctx->pc = 0x3A0ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0AD8u;
            // 0x3a0adc: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0AF4u;
            goto label_3a0af4;
        }
    }
    ctx->pc = 0x3A0AE0u;
    // 0x3a0ae0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3a0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3a0ae4: 0x54530003  bnel        $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0AE4u;
    {
        const bool branch_taken_0x3a0ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3a0ae4) {
            ctx->pc = 0x3A0AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0AE4u;
            // 0x3a0ae8: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0AF4u;
            goto label_3a0af4;
        }
    }
    ctx->pc = 0x3A0AECu;
    // 0x3a0aec: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3A0AECu;
    {
        const bool branch_taken_0x3a0aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0AECu;
        // 0x3a0af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0aec) {
            ctx->pc = 0x3A0BC0u;
            goto label_3a0bc0;
        }
    }
    ctx->pc = 0x3A0AF4u;
label_3a0af4:
    // 0x3a0af4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a0af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a0af8: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x3a0af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3a0afc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3a0afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0b00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3A0B00u;
    {
        const bool branch_taken_0x3a0b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B00u;
        // 0x3a0b04: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b00) {
            ctx->pc = 0x3A0AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0ab0;
        }
    }
    ctx->pc = 0x3A0B08u;
    // 0x3a0b08: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x3a0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x3a0b0c: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x3a0b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_3a0b10:
    // 0x3a0b10: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A0B10u;
    {
        const bool branch_taken_0x3a0b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B10u;
        // 0x3a0b14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b10) {
            ctx->pc = 0x3A0BB4u;
            goto label_3a0bb4;
        }
    }
    ctx->pc = 0x3A0B18u;
    // 0x3a0b18: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x3a0b18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a0b1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a0b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0b20:
    // 0x3a0b20: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3a0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3a0b24: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3a0b28: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x3a0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a0b2c: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A0B2Cu;
    {
        const bool branch_taken_0x3a0b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0b2c) {
            ctx->pc = 0x3A0B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0B2Cu;
            // 0x3a0b30: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0BA0u;
            goto label_3a0ba0;
        }
    }
    ctx->pc = 0x3A0B34u;
    // 0x3a0b34: 0x8c9100d8  lw          $s1, 0xD8($a0)
    ctx->pc = 0x3a0b34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x3a0b38: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A0B38u;
    {
        const bool branch_taken_0x3a0b38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0b38) {
            ctx->pc = 0x3A0B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0B38u;
            // 0x3a0b3c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0BA0u;
            goto label_3a0ba0;
        }
    }
    ctx->pc = 0x3A0B40u;
    // 0x3a0b40: 0xc05d462  jal         func_175188
    ctx->pc = 0x3A0B40u;
    SET_GPR_U32(ctx, 31, 0x3A0B48u);
    ctx->pc = 0x3A0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B40u;
    // 0x3a0b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x3A0B40u, 0x3A0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B48u;
label_3a0b48:
    // 0x3a0b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a0b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b4c: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A0B4Cu;
    {
        const bool branch_taken_0x3a0b4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0b4c) {
            ctx->pc = 0x3A0B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0B4Cu;
            // 0x3a0b50: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0BA0u;
            goto label_3a0ba0;
        }
    }
    ctx->pc = 0x3A0B54u;
    // 0x3a0b54: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3a0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3a0b58: 0x54550011  bnel        $v0, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A0B58u;
    {
        const bool branch_taken_0x3a0b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x3a0b58) {
            ctx->pc = 0x3A0B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0B58u;
            // 0x3a0b5c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0BA0u;
            goto label_3a0ba0;
        }
    }
    ctx->pc = 0x3A0B60u;
    // 0x3a0b60: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x3a0b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x3a0b64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0B64u;
    {
        const bool branch_taken_0x3a0b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0b64) {
            ctx->pc = 0x3A0B74u;
            goto label_3a0b74;
        }
    }
    ctx->pc = 0x3A0B6Cu;
    // 0x3a0b6c: 0xc040fa4  jal         func_103E90
    ctx->pc = 0x3A0B6Cu;
    SET_GPR_U32(ctx, 31, 0x3A0B74u);
    ctx->pc = 0x3A0B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B6Cu;
    // 0x3a0b70: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103E90u, 0x3A0B6Cu, 0x3A0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B74u;
label_3a0b74:
    // 0x3a0b74: 0xc05d45e  jal         func_175178
    ctx->pc = 0x3A0B74u;
    SET_GPR_U32(ctx, 31, 0x3A0B7Cu);
    ctx->pc = 0x3A0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B74u;
    // 0x3a0b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x3A0B74u, 0x3A0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B7Cu;
label_3a0b7c:
    // 0x3a0b7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a0b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b84: 0xc05d460  jal         func_175180
    ctx->pc = 0x3A0B84u;
    SET_GPR_U32(ctx, 31, 0x3A0B8Cu);
    ctx->pc = 0x3A0B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B84u;
    // 0x3a0b88: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175180u, 0x3A0B84u, 0x3A0B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B8Cu;
label_3a0b8c:
    // 0x3a0b8c: 0xc041b02  jal         func_106C08
    ctx->pc = 0x3A0B8Cu;
    SET_GPR_U32(ctx, 31, 0x3A0B94u);
    ctx->pc = 0x3A0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B8Cu;
    // 0x3a0b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C08u, 0x3A0B8Cu, 0x3A0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B94u;
label_3a0b94:
    // 0x3a0b94: 0xc041590  jal         func_105640
    ctx->pc = 0x3A0B94u;
    SET_GPR_U32(ctx, 31, 0x3A0B9Cu);
    ctx->pc = 0x3A0B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B94u;
    // 0x3a0b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x3A0B94u, 0x3A0B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B9Cu;
label_3a0b9c:
    // 0x3a0b9c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x3a0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3a0ba0:
    // 0x3a0ba0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a0ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a0ba4: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x3a0ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3a0ba8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3a0ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0bac: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3A0BACu;
    {
        const bool branch_taken_0x3a0bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0BACu;
        // 0x3a0bb0: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0bac) {
            ctx->pc = 0x3A0B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0b20;
        }
    }
    ctx->pc = 0x3A0BB4u;
label_3a0bb4:
    // 0x3a0bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0bb8:
    // 0x3a0bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0bbc: 0xa24300e6  sb          $v1, 0xE6($s2)
    ctx->pc = 0x3a0bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 230), (uint8_t)GPR_U32(ctx, 3));
label_3a0bc0:
    // 0x3a0bc0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a0bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a0bc4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3a0bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0bc8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3a0bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0bcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a0bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0bd0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3a0bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0bd4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3a0bd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0BDCu;
        // 0x3a0be0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0BE4u;
    // 0x3a0be4: 0x0  nop
    ctx->pc = 0x3a0be4u;
    // NOP
    ctx->pc = 0x3a0be8u;
}
