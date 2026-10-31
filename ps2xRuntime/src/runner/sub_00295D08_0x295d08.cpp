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

// Function: sub_00295D08
// Address: 0x295d08 - 0x295db0
void sub_00295D08_0x295d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295D08_0x295d08");
#endif

    switch (ctx->pc) {
        case 0x295d08u: goto label_295d08;
        case 0x295d0cu: goto label_295d0c;
        case 0x295d10u: goto label_295d10;
        case 0x295d14u: goto label_295d14;
        case 0x295d18u: goto label_295d18;
        case 0x295d1cu: goto label_295d1c;
        case 0x295d20u: goto label_295d20;
        case 0x295d24u: goto label_295d24;
        case 0x295d28u: goto label_295d28;
        case 0x295d2cu: goto label_295d2c;
        case 0x295d30u: goto label_295d30;
        case 0x295d34u: goto label_295d34;
        case 0x295d38u: goto label_295d38;
        case 0x295d3cu: goto label_295d3c;
        case 0x295d40u: goto label_295d40;
        case 0x295d44u: goto label_295d44;
        case 0x295d48u: goto label_295d48;
        case 0x295d4cu: goto label_295d4c;
        case 0x295d50u: goto label_295d50;
        case 0x295d54u: goto label_295d54;
        case 0x295d58u: goto label_295d58;
        case 0x295d5cu: goto label_295d5c;
        case 0x295d60u: goto label_295d60;
        case 0x295d64u: goto label_295d64;
        case 0x295d68u: goto label_295d68;
        case 0x295d6cu: goto label_295d6c;
        case 0x295d70u: goto label_295d70;
        case 0x295d74u: goto label_295d74;
        case 0x295d78u: goto label_295d78;
        case 0x295d7cu: goto label_295d7c;
        case 0x295d80u: goto label_295d80;
        case 0x295d84u: goto label_295d84;
        case 0x295d88u: goto label_295d88;
        case 0x295d8cu: goto label_295d8c;
        case 0x295d90u: goto label_295d90;
        case 0x295d94u: goto label_295d94;
        case 0x295d98u: goto label_295d98;
        case 0x295d9cu: goto label_295d9c;
        case 0x295da0u: goto label_295da0;
        case 0x295da4u: goto label_295da4;
        case 0x295da8u: goto label_295da8;
        case 0x295dacu: goto label_295dac;
        default: break;
    }

    ctx->pc = 0x295d08u;

label_295d08:
    // 0x295d08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x295d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_295d0c:
    // 0x295d0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x295d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_295d10:
    // 0x295d10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x295d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295d14:
    // 0x295d14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x295d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_295d18:
    // 0x295d18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x295d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_295d1c:
    // 0x295d1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x295d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_295d20:
    // 0x295d20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x295d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295d24:
    // 0x295d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x295d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_295d28:
    // 0x295d28: 0xc0a55b4  jal         func_2956D0
label_295d2c:
    if (ctx->pc == 0x295D2Cu) {
        ctx->pc = 0x295D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D28u;
        // 0x295d2c: 0x265101b0  addiu       $s1, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D30u;
        goto label_295d30;
    }
    ctx->pc = 0x295D28u;
    SET_GPR_U32(ctx, 31, 0x295D30u);
    ctx->pc = 0x295D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D28u;
    // 0x295d2c: 0x265101b0  addiu       $s1, $s2, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x295D28u, 0x295D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D30u;
label_295d30:
    // 0x295d30: 0xc0e409a  jal         func_390268
label_295d34:
    if (ctx->pc == 0x295D34u) {
        ctx->pc = 0x295D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D30u;
        // 0x295d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D38u;
        goto label_295d38;
    }
    ctx->pc = 0x295D30u;
    SET_GPR_U32(ctx, 31, 0x295D38u);
    ctx->pc = 0x295D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D30u;
    // 0x295d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x295D30u, 0x295D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D38u;
label_295d38:
    // 0x295d38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295d3c:
    // 0x295d3c: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
label_295d40:
    if (ctx->pc == 0x295D40u) {
        ctx->pc = 0x295D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D3Cu;
        // 0x295d40: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D44u;
        goto label_295d44;
    }
    ctx->pc = 0x295D3Cu;
    {
        const bool branch_taken_0x295d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d3c) {
            ctx->pc = 0x295D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295D3Cu;
            // 0x295d40: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295D88u;
            goto label_295d88;
        }
    }
    ctx->pc = 0x295D44u;
label_295d44:
    // 0x295d44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x295d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_295d48:
    // 0x295d48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295d4c:
    // 0x295d4c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x295d4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_295d50:
    // 0x295d50: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x295d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_295d54:
    // 0x295d54: 0x60f809  jalr        $v1
label_295d58:
    if (ctx->pc == 0x295D58u) {
        ctx->pc = 0x295D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D54u;
        // 0x295d58: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D5Cu;
        goto label_295d5c;
    }
    ctx->pc = 0x295D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295D5Cu);
        ctx->pc = 0x295D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D54u;
        // 0x295d58: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D54u, 0x295D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295D5Cu;
label_295d5c:
    // 0x295d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295d60:
    // 0x295d60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295d64:
    // 0x295d64: 0xc0a578e  jal         func_295E38
label_295d68:
    if (ctx->pc == 0x295D68u) {
        ctx->pc = 0x295D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D64u;
        // 0x295d68: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D6Cu;
        goto label_295d6c;
    }
    ctx->pc = 0x295D64u;
    SET_GPR_U32(ctx, 31, 0x295D6Cu);
    ctx->pc = 0x295D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D64u;
    // 0x295d68: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x295D64u, 0x295D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D6Cu;
label_295d6c:
    // 0x295d6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x295d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_295d70:
    // 0x295d70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x295d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295d74:
    // 0x295d74: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x295d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_295d78:
    // 0x295d78: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x295d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_295d7c:
    // 0x295d7c: 0x40f809  jalr        $v0
label_295d80:
    if (ctx->pc == 0x295D80u) {
        ctx->pc = 0x295D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D7Cu;
        // 0x295d80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D84u;
        goto label_295d84;
    }
    ctx->pc = 0x295D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x295D84u);
        ctx->pc = 0x295D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D7Cu;
        // 0x295d80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D7Cu, 0x295D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295D84u;
label_295d84:
    // 0x295d84: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x295d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_295d88:
    // 0x295d88: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x295d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_295d8c:
    // 0x295d8c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_295d90:
    if (ctx->pc == 0x295D90u) {
        ctx->pc = 0x295D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D8Cu;
        // 0x295d90: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D94u;
        goto label_295d94;
    }
    ctx->pc = 0x295D8Cu;
    {
        const bool branch_taken_0x295d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D8Cu;
        // 0x295d90: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d8c) {
            ctx->pc = 0x295D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295d30;
        }
    }
    ctx->pc = 0x295D94u;
label_295d94:
    // 0x295d94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x295d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_295d98:
    // 0x295d98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x295d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_295d9c:
    // 0x295d9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x295d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_295da0:
    // 0x295da0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x295da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_295da4:
    // 0x295da4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x295da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_295da8:
    // 0x295da8: 0x3e00008  jr          $ra
label_295dac:
    if (ctx->pc == 0x295DACu) {
        ctx->pc = 0x295DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DA8u;
        // 0x295dac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295DB0u;
        goto label_fallthrough_0x295da8;
    }
    ctx->pc = 0x295DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DA8u;
        // 0x295dac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x295da8:
    ctx->pc = 0x295DB0u;
}
