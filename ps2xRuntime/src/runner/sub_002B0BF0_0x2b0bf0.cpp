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

// Function: sub_002B0BF0
// Address: 0x2b0bf0 - 0x2b0c88
void sub_002B0BF0_0x2b0bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0BF0_0x2b0bf0");
#endif

    switch (ctx->pc) {
        case 0x2b0bf0u: goto label_2b0bf0;
        case 0x2b0bf4u: goto label_2b0bf4;
        case 0x2b0bf8u: goto label_2b0bf8;
        case 0x2b0bfcu: goto label_2b0bfc;
        case 0x2b0c00u: goto label_2b0c00;
        case 0x2b0c04u: goto label_2b0c04;
        case 0x2b0c08u: goto label_2b0c08;
        case 0x2b0c0cu: goto label_2b0c0c;
        case 0x2b0c10u: goto label_2b0c10;
        case 0x2b0c14u: goto label_2b0c14;
        case 0x2b0c18u: goto label_2b0c18;
        case 0x2b0c1cu: goto label_2b0c1c;
        case 0x2b0c20u: goto label_2b0c20;
        case 0x2b0c24u: goto label_2b0c24;
        case 0x2b0c28u: goto label_2b0c28;
        case 0x2b0c2cu: goto label_2b0c2c;
        case 0x2b0c30u: goto label_2b0c30;
        case 0x2b0c34u: goto label_2b0c34;
        case 0x2b0c38u: goto label_2b0c38;
        case 0x2b0c3cu: goto label_2b0c3c;
        case 0x2b0c40u: goto label_2b0c40;
        case 0x2b0c44u: goto label_2b0c44;
        case 0x2b0c48u: goto label_2b0c48;
        case 0x2b0c4cu: goto label_2b0c4c;
        case 0x2b0c50u: goto label_2b0c50;
        case 0x2b0c54u: goto label_2b0c54;
        case 0x2b0c58u: goto label_2b0c58;
        case 0x2b0c5cu: goto label_2b0c5c;
        case 0x2b0c60u: goto label_2b0c60;
        case 0x2b0c64u: goto label_2b0c64;
        case 0x2b0c68u: goto label_2b0c68;
        case 0x2b0c6cu: goto label_2b0c6c;
        case 0x2b0c70u: goto label_2b0c70;
        case 0x2b0c74u: goto label_2b0c74;
        case 0x2b0c78u: goto label_2b0c78;
        case 0x2b0c7cu: goto label_2b0c7c;
        case 0x2b0c80u: goto label_2b0c80;
        case 0x2b0c84u: goto label_2b0c84;
        default: break;
    }

    ctx->pc = 0x2b0bf0u;

label_2b0bf0:
    // 0x2b0bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b0bf4:
    // 0x2b0bf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b0bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0bf8:
    // 0x2b0bf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b0bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b0bfc:
    // 0x2b0bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b0c00:
    // 0x2b0c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c04:
    // 0x2b0c04: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x2b0c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2b0c08:
    // 0x2b0c08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b0c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b0c0c:
    // 0x2b0c0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b0c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0c10:
    // 0x2b0c10: 0xa062028d  sb          $v0, 0x28D($v1)
    ctx->pc = 0x2b0c10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 2));
label_2b0c14:
    // 0x2b0c14: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2b0c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b0c18:
    // 0x2b0c18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b0c1c:
    // 0x2b0c1c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2b0c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c20:
    // 0x2b0c20: 0xe480012c  swc1        $f0, 0x12C($a0)
    ctx->pc = 0x2b0c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
label_2b0c24:
    // 0x2b0c24: 0x92050057  lbu         $a1, 0x57($s0)
    ctx->pc = 0x2b0c24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
label_2b0c28:
    // 0x2b0c28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b0c2c:
    // 0x2b0c2c: 0xa0450265  sb          $a1, 0x265($v0)
    ctx->pc = 0x2b0c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 5));
label_2b0c30:
    // 0x2b0c30: 0x92030055  lbu         $v1, 0x55($s0)
    ctx->pc = 0x2b0c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
label_2b0c34:
    // 0x2b0c34: 0x54660004  bnel        $v1, $a2, . + 4 + (0x4 << 2)
label_2b0c38:
    if (ctx->pc == 0x2B0C38u) {
        ctx->pc = 0x2B0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C34u;
        // 0x2b0c38: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0C3Cu;
        goto label_2b0c3c;
    }
    ctx->pc = 0x2B0C34u;
    {
        const bool branch_taken_0x2b0c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b0c34) {
            ctx->pc = 0x2B0C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0C34u;
            // 0x2b0c38: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0C48u;
            goto label_2b0c48;
        }
    }
    ctx->pc = 0x2B0C3Cu;
label_2b0c3c:
    // 0x2b0c3c: 0xc089bdc  jal         func_226F70
label_2b0c40:
    if (ctx->pc == 0x2B0C40u) {
        ctx->pc = 0x2B0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C3Cu;
        // 0x2b0c40: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0C44u;
        goto label_2b0c44;
    }
    ctx->pc = 0x2B0C3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0C44u);
    ctx->pc = 0x2B0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C3Cu;
    // 0x2b0c40: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B0C3Cu, 0x2B0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C44u;
label_2b0c44:
    // 0x2b0c44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b0c48:
    // 0x2b0c48: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2b0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2b0c4c:
    // 0x2b0c4c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2b0c50:
    if (ctx->pc == 0x2B0C50u) {
        ctx->pc = 0x2B0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C4Cu;
        // 0x2b0c50: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0C54u;
        goto label_2b0c54;
    }
    ctx->pc = 0x2B0C4Cu;
    {
        const bool branch_taken_0x2b0c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0c4c) {
            ctx->pc = 0x2B0C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0C4Cu;
            // 0x2b0c50: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0C54u;
            goto label_2b0c54;
        }
    }
    ctx->pc = 0x2B0C54u;
label_2b0c54:
    // 0x2b0c54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b0c58:
    // 0x2b0c58: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2b0c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2b0c5c:
    // 0x2b0c5c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2b0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2b0c60:
    // 0x2b0c60: 0x60f809  jalr        $v1
label_2b0c64:
    if (ctx->pc == 0x2B0C64u) {
        ctx->pc = 0x2B0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C60u;
        // 0x2b0c64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0C68u;
        goto label_2b0c68;
    }
    ctx->pc = 0x2B0C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B0C68u);
        ctx->pc = 0x2B0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C60u;
        // 0x2b0c64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0C60u, 0x2B0C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0C68u;
label_2b0c68:
    // 0x2b0c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c6c:
    // 0x2b0c6c: 0xc0ac182  jal         func_2B0608
label_2b0c70:
    if (ctx->pc == 0x2B0C70u) {
        ctx->pc = 0x2B0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C6Cu;
        // 0x2b0c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0C74u;
        goto label_2b0c74;
    }
    ctx->pc = 0x2B0C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B0C74u);
    ctx->pc = 0x2B0C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C6Cu;
    // 0x2b0c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0608u, 0x2B0C6Cu, 0x2B0C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C74u;
label_2b0c74:
    // 0x2b0c74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b0c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0c78:
    // 0x2b0c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0c7c:
    // 0x2b0c7c: 0x3e00008  jr          $ra
label_2b0c80:
    if (ctx->pc == 0x2B0C80u) {
        ctx->pc = 0x2B0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C7Cu;
        // 0x2b0c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0C84u;
        goto label_2b0c84;
    }
    ctx->pc = 0x2B0C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C7Cu;
        // 0x2b0c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0C84u;
label_2b0c84:
    // 0x2b0c84: 0x0  nop
    ctx->pc = 0x2b0c84u;
    // NOP
    ctx->pc = 0x2b0c88u;
}
