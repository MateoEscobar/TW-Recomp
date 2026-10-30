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

// Function: sub_002C7020
// Address: 0x2c7020 - 0x2c70a0
void sub_002C7020_0x2c7020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7020_0x2c7020");
#endif

    switch (ctx->pc) {
        case 0x2c7020u: goto label_2c7020;
        case 0x2c7024u: goto label_2c7024;
        case 0x2c7028u: goto label_2c7028;
        case 0x2c702cu: goto label_2c702c;
        case 0x2c7030u: goto label_2c7030;
        case 0x2c7034u: goto label_2c7034;
        case 0x2c7038u: goto label_2c7038;
        case 0x2c703cu: goto label_2c703c;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c7044u: goto label_2c7044;
        case 0x2c7048u: goto label_2c7048;
        case 0x2c704cu: goto label_2c704c;
        case 0x2c7050u: goto label_2c7050;
        case 0x2c7054u: goto label_2c7054;
        case 0x2c7058u: goto label_2c7058;
        case 0x2c705cu: goto label_2c705c;
        case 0x2c7060u: goto label_2c7060;
        case 0x2c7064u: goto label_2c7064;
        case 0x2c7068u: goto label_2c7068;
        case 0x2c706cu: goto label_2c706c;
        case 0x2c7070u: goto label_2c7070;
        case 0x2c7074u: goto label_2c7074;
        case 0x2c7078u: goto label_2c7078;
        case 0x2c707cu: goto label_2c707c;
        case 0x2c7080u: goto label_2c7080;
        case 0x2c7084u: goto label_2c7084;
        case 0x2c7088u: goto label_2c7088;
        case 0x2c708cu: goto label_2c708c;
        case 0x2c7090u: goto label_2c7090;
        case 0x2c7094u: goto label_2c7094;
        case 0x2c7098u: goto label_2c7098;
        case 0x2c709cu: goto label_2c709c;
        default: break;
    }

    ctx->pc = 0x2c7020u;

label_2c7020:
    // 0x2c7020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c7020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c7024:
    // 0x2c7024: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c7024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c7028:
    // 0x2c7028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c702c:
    // 0x2c702c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c702cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7030:
    // 0x2c7030: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c7030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2c7034:
    // 0x2c7034: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c7034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c7038:
    // 0x2c7038: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c7038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c703c:
    // 0x2c703c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7040:
    // 0x2c7040: 0xa20001b2  sb          $zero, 0x1B2($s0)
    ctx->pc = 0x2c7040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
label_2c7044:
    // 0x2c7044: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2c7044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2c7048:
    // 0x2c7048: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2c7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2c704c:
    // 0x2c704c: 0x60f809  jalr        $v1
label_2c7050:
    if (ctx->pc == 0x2C7050u) {
        ctx->pc = 0x2C7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C704Cu;
        // 0x2c7050: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7054u;
        goto label_2c7054;
    }
    ctx->pc = 0x2C704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C7054u);
        ctx->pc = 0x2C7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C704Cu;
        // 0x2c7050: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C704Cu, 0x2C7054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7054u;
label_2c7054:
    // 0x2c7054: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2c7054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2c7058:
    // 0x2c7058: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c7058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c705c:
    // 0x2c705c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2c705cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2c7060:
    // 0x2c7060: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2c7060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2c7064:
    // 0x2c7064: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c7064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c7068:
    // 0x2c7068: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2c7068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2c706c:
    // 0x2c706c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c706cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7070:
    // 0x2c7070: 0xc1067b8  jal         func_419EE0
label_2c7074:
    if (ctx->pc == 0x2C7074u) {
        ctx->pc = 0x2C7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7070u;
        // 0x2c7074: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7078u;
        goto label_2c7078;
    }
    ctx->pc = 0x2C7070u;
    SET_GPR_U32(ctx, 31, 0x2C7078u);
    ctx->pc = 0x2C7074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7070u;
    // 0x2c7074: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2C7070u, 0x2C7078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7078u;
label_2c7078:
    // 0x2c7078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c707c:
    // 0x2c707c: 0xc087612  jal         func_21D848
label_2c7080:
    if (ctx->pc == 0x2C7080u) {
        ctx->pc = 0x2C7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C707Cu;
        // 0x2c7080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7084u;
        goto label_2c7084;
    }
    ctx->pc = 0x2C707Cu;
    SET_GPR_U32(ctx, 31, 0x2C7084u);
    ctx->pc = 0x2C7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C707Cu;
    // 0x2c7080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2C707Cu, 0x2C7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7084u;
label_2c7084:
    // 0x2c7084: 0xc0b1f7a  jal         func_2C7DE8
label_2c7088:
    if (ctx->pc == 0x2C7088u) {
        ctx->pc = 0x2C7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7084u;
        // 0x2c7088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C708Cu;
        goto label_2c708c;
    }
    ctx->pc = 0x2C7084u;
    SET_GPR_U32(ctx, 31, 0x2C708Cu);
    ctx->pc = 0x2C7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7084u;
    // 0x2c7088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7DE8u, 0x2C7084u, 0x2C708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C708Cu;
label_2c708c:
    // 0x2c708c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c708cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7090:
    // 0x2c7090: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c7090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7094:
    // 0x2c7094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7098:
    // 0x2c7098: 0x3e00008  jr          $ra
label_2c709c:
    if (ctx->pc == 0x2C709Cu) {
        ctx->pc = 0x2C709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7098u;
        // 0x2c709c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C70A0u;
        goto label_fallthrough_0x2c7098;
    }
    ctx->pc = 0x2C7098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7098u;
        // 0x2c709c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c7098:
    ctx->pc = 0x2C70A0u;
}
