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

// Function: sub_00306040
// Address: 0x306040 - 0x306190
void sub_00306040_0x306040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306040_0x306040");
#endif

    switch (ctx->pc) {
        case 0x306040u: goto label_306040;
        case 0x306044u: goto label_306044;
        case 0x306048u: goto label_306048;
        case 0x30604cu: goto label_30604c;
        case 0x306050u: goto label_306050;
        case 0x306054u: goto label_306054;
        case 0x306058u: goto label_306058;
        case 0x30605cu: goto label_30605c;
        case 0x306060u: goto label_306060;
        case 0x306064u: goto label_306064;
        case 0x306068u: goto label_306068;
        case 0x30606cu: goto label_30606c;
        case 0x306070u: goto label_306070;
        case 0x306074u: goto label_306074;
        case 0x306078u: goto label_306078;
        case 0x30607cu: goto label_30607c;
        case 0x306080u: goto label_306080;
        case 0x306084u: goto label_306084;
        case 0x306088u: goto label_306088;
        case 0x30608cu: goto label_30608c;
        case 0x306090u: goto label_306090;
        case 0x306094u: goto label_306094;
        case 0x306098u: goto label_306098;
        case 0x30609cu: goto label_30609c;
        case 0x3060a0u: goto label_3060a0;
        case 0x3060a4u: goto label_3060a4;
        case 0x3060a8u: goto label_3060a8;
        case 0x3060acu: goto label_3060ac;
        case 0x3060b0u: goto label_3060b0;
        case 0x3060b4u: goto label_3060b4;
        case 0x3060b8u: goto label_3060b8;
        case 0x3060bcu: goto label_3060bc;
        case 0x3060c0u: goto label_3060c0;
        case 0x3060c4u: goto label_3060c4;
        case 0x3060c8u: goto label_3060c8;
        case 0x3060ccu: goto label_3060cc;
        case 0x3060d0u: goto label_3060d0;
        case 0x3060d4u: goto label_3060d4;
        case 0x3060d8u: goto label_3060d8;
        case 0x3060dcu: goto label_3060dc;
        case 0x3060e0u: goto label_3060e0;
        case 0x3060e4u: goto label_3060e4;
        case 0x3060e8u: goto label_3060e8;
        case 0x3060ecu: goto label_3060ec;
        case 0x3060f0u: goto label_3060f0;
        case 0x3060f4u: goto label_3060f4;
        case 0x3060f8u: goto label_3060f8;
        case 0x3060fcu: goto label_3060fc;
        case 0x306100u: goto label_306100;
        case 0x306104u: goto label_306104;
        case 0x306108u: goto label_306108;
        case 0x30610cu: goto label_30610c;
        case 0x306110u: goto label_306110;
        case 0x306114u: goto label_306114;
        case 0x306118u: goto label_306118;
        case 0x30611cu: goto label_30611c;
        case 0x306120u: goto label_306120;
        case 0x306124u: goto label_306124;
        case 0x306128u: goto label_306128;
        case 0x30612cu: goto label_30612c;
        case 0x306130u: goto label_306130;
        case 0x306134u: goto label_306134;
        case 0x306138u: goto label_306138;
        case 0x30613cu: goto label_30613c;
        case 0x306140u: goto label_306140;
        case 0x306144u: goto label_306144;
        case 0x306148u: goto label_306148;
        case 0x30614cu: goto label_30614c;
        case 0x306150u: goto label_306150;
        case 0x306154u: goto label_306154;
        case 0x306158u: goto label_306158;
        case 0x30615cu: goto label_30615c;
        case 0x306160u: goto label_306160;
        case 0x306164u: goto label_306164;
        case 0x306168u: goto label_306168;
        case 0x30616cu: goto label_30616c;
        case 0x306170u: goto label_306170;
        case 0x306174u: goto label_306174;
        case 0x306178u: goto label_306178;
        case 0x30617cu: goto label_30617c;
        case 0x306180u: goto label_306180;
        case 0x306184u: goto label_306184;
        case 0x306188u: goto label_306188;
        case 0x30618cu: goto label_30618c;
        default: break;
    }

    ctx->pc = 0x306040u;

label_306040:
    // 0x306040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x306040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_306044:
    // 0x306044: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x306044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_306048:
    // 0x306048: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x306048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30604c:
    // 0x30604c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30604cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_306050:
    // 0x306050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_306054:
    // 0x306054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306058:
    // 0x306058: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x306058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30605c:
    // 0x30605c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x30605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_306060:
    // 0x306060: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_306064:
    // 0x306064: 0x84650050  lh          $a1, 0x50($v1)
    ctx->pc = 0x306064u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_306068:
    // 0x306068: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x306068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_30606c:
    // 0x30606c: 0x40f809  jalr        $v0
label_306070:
    if (ctx->pc == 0x306070u) {
        ctx->pc = 0x306070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30606Cu;
        // 0x306070: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306074u;
        goto label_306074;
    }
    ctx->pc = 0x30606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306074u);
        ctx->pc = 0x306070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30606Cu;
        // 0x306070: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30606Cu, 0x306074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306074u;
label_306074:
    // 0x306074: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_306078:
    if (ctx->pc == 0x306078u) {
        ctx->pc = 0x306078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306074u;
        // 0x306078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30607Cu;
        goto label_30607c;
    }
    ctx->pc = 0x306074u;
    {
        const bool branch_taken_0x306074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306074u;
        // 0x306078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306074) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x30607Cu;
label_30607c:
    // 0x30607c: 0xc08a61a  jal         func_229868
label_306080:
    if (ctx->pc == 0x306080u) {
        ctx->pc = 0x306080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30607Cu;
        // 0x306080: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306084u;
        goto label_306084;
    }
    ctx->pc = 0x30607Cu;
    SET_GPR_U32(ctx, 31, 0x306084u);
    ctx->pc = 0x306080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30607Cu;
    // 0x306080: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30607Cu, 0x306084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306084u;
label_306084:
    // 0x306084: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x306084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_306088:
    // 0x306088: 0xc08a08a  jal         func_228228
label_30608c:
    if (ctx->pc == 0x30608Cu) {
        ctx->pc = 0x30608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306088u;
        // 0x30608c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306090u;
        goto label_306090;
    }
    ctx->pc = 0x306088u;
    SET_GPR_U32(ctx, 31, 0x306090u);
    ctx->pc = 0x30608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306088u;
    // 0x30608c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x306088u, 0x306090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306090u;
label_306090:
    // 0x306090: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_306094:
    if (ctx->pc == 0x306094u) {
        ctx->pc = 0x306094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306090u;
        // 0x306094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306098u;
        goto label_306098;
    }
    ctx->pc = 0x306090u;
    {
        const bool branch_taken_0x306090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306090u;
        // 0x306094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306090) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x306098u;
label_306098:
    // 0x306098: 0xc08a10a  jal         func_228428
label_30609c:
    if (ctx->pc == 0x30609Cu) {
        ctx->pc = 0x30609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306098u;
        // 0x30609c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060A0u;
        goto label_3060a0;
    }
    ctx->pc = 0x306098u;
    SET_GPR_U32(ctx, 31, 0x3060A0u);
    ctx->pc = 0x30609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306098u;
    // 0x30609c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x306098u, 0x3060A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060A0u;
label_3060a0:
    // 0x3060a0: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_3060a4:
    if (ctx->pc == 0x3060A4u) {
        ctx->pc = 0x3060A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060A0u;
        // 0x3060a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060A8u;
        goto label_3060a8;
    }
    ctx->pc = 0x3060A0u;
    {
        const bool branch_taken_0x3060a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3060A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060A0u;
        // 0x3060a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060a0) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x3060A8u;
label_3060a8:
    // 0x3060a8: 0xc08a08a  jal         func_228228
label_3060ac:
    if (ctx->pc == 0x3060ACu) {
        ctx->pc = 0x3060ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060A8u;
        // 0x3060ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060B0u;
        goto label_3060b0;
    }
    ctx->pc = 0x3060A8u;
    SET_GPR_U32(ctx, 31, 0x3060B0u);
    ctx->pc = 0x3060ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060A8u;
    // 0x3060ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3060A8u, 0x3060B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060B0u;
label_3060b0:
    // 0x3060b0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_3060b4:
    if (ctx->pc == 0x3060B4u) {
        ctx->pc = 0x3060B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060B0u;
        // 0x3060b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060B8u;
        goto label_3060b8;
    }
    ctx->pc = 0x3060B0u;
    {
        const bool branch_taken_0x3060b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3060B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060B0u;
        // 0x3060b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060b0) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x3060B8u;
label_3060b8:
    // 0x3060b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3060b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3060bc:
    // 0x3060bc: 0xc08702a  jal         func_21C0A8
label_3060c0:
    if (ctx->pc == 0x3060C0u) {
        ctx->pc = 0x3060C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060BCu;
        // 0x3060c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060C4u;
        goto label_3060c4;
    }
    ctx->pc = 0x3060BCu;
    SET_GPR_U32(ctx, 31, 0x3060C4u);
    ctx->pc = 0x3060C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060BCu;
    // 0x3060c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x3060BCu, 0x3060C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060C4u;
label_3060c4:
    // 0x3060c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3060c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3060c8:
    // 0x3060c8: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
label_3060cc:
    if (ctx->pc == 0x3060CCu) {
        ctx->pc = 0x3060CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060C8u;
        // 0x3060cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060D0u;
        goto label_3060d0;
    }
    ctx->pc = 0x3060C8u;
    {
        const bool branch_taken_0x3060c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3060CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060C8u;
        // 0x3060cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060c8) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x3060D0u;
label_3060d0:
    // 0x3060d0: 0xc08a10a  jal         func_228428
label_3060d4:
    if (ctx->pc == 0x3060D4u) {
        ctx->pc = 0x3060D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D0u;
        // 0x3060d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060D8u;
        goto label_3060d8;
    }
    ctx->pc = 0x3060D0u;
    SET_GPR_U32(ctx, 31, 0x3060D8u);
    ctx->pc = 0x3060D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060D0u;
    // 0x3060d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x3060D0u, 0x3060D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060D8u;
label_3060d8:
    // 0x3060d8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_3060dc:
    if (ctx->pc == 0x3060DCu) {
        ctx->pc = 0x3060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D8u;
        // 0x3060dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060E0u;
        goto label_3060e0;
    }
    ctx->pc = 0x3060D8u;
    {
        const bool branch_taken_0x3060d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D8u;
        // 0x3060dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060d8) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x3060E0u;
label_3060e0:
    // 0x3060e0: 0xc0a36c8  jal         func_28DB20
label_3060e4:
    if (ctx->pc == 0x3060E4u) {
        ctx->pc = 0x3060E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060E0u;
        // 0x3060e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060E8u;
        goto label_3060e8;
    }
    ctx->pc = 0x3060E0u;
    SET_GPR_U32(ctx, 31, 0x3060E8u);
    ctx->pc = 0x3060E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060E0u;
    // 0x3060e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3060E0u, 0x3060E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060E8u;
label_3060e8:
    // 0x3060e8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_3060ec:
    // 0x3060ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x3060ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_3060f0:
    // 0x3060f0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3060f4:
    // 0x3060f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3060f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3060f8:
    // 0x3060f8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3060f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3060fc:
    // 0x3060fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3060fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_306100:
    // 0x306100: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x306100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_306104:
    // 0x306104: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x306104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306108:
    // 0x306108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x306108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30610c:
    // 0x30610c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30610cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_306110:
    // 0x306110: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x306110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_306114:
    // 0x306114: 0xc088708  jal         func_221C20
label_306118:
    if (ctx->pc == 0x306118u) {
        ctx->pc = 0x306118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306114u;
        // 0x306118: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30611Cu;
        goto label_30611c;
    }
    ctx->pc = 0x306114u;
    SET_GPR_U32(ctx, 31, 0x30611Cu);
    ctx->pc = 0x306118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306114u;
    // 0x306118: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x306114u, 0x30611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30611Cu;
label_30611c:
    // 0x30611c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30611cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_306120:
    // 0x306120: 0xc08cec2  jal         func_233B08
label_306124:
    if (ctx->pc == 0x306124u) {
        ctx->pc = 0x306124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306120u;
        // 0x306124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306128u;
        goto label_306128;
    }
    ctx->pc = 0x306120u;
    SET_GPR_U32(ctx, 31, 0x306128u);
    ctx->pc = 0x306124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306120u;
    // 0x306124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B08u, 0x306120u, 0x306128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306128u;
label_306128:
    // 0x306128: 0xc089bfc  jal         func_226FF0
label_30612c:
    if (ctx->pc == 0x30612Cu) {
        ctx->pc = 0x30612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306128u;
        // 0x30612c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306130u;
        goto label_306130;
    }
    ctx->pc = 0x306128u;
    SET_GPR_U32(ctx, 31, 0x306130u);
    ctx->pc = 0x30612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306128u;
    // 0x30612c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x306128u, 0x306130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306130u;
label_306130:
    // 0x306130: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_306134:
    if (ctx->pc == 0x306134u) {
        ctx->pc = 0x306134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306130u;
        // 0x306134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306138u;
        goto label_306138;
    }
    ctx->pc = 0x306130u;
    {
        const bool branch_taken_0x306130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306130u;
        // 0x306134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306130) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x306138u;
label_306138:
    // 0x306138: 0xc087502  jal         func_21D408
label_30613c:
    if (ctx->pc == 0x30613Cu) {
        ctx->pc = 0x30613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306138u;
        // 0x30613c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306140u;
        goto label_306140;
    }
    ctx->pc = 0x306138u;
    SET_GPR_U32(ctx, 31, 0x306140u);
    ctx->pc = 0x30613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306138u;
    // 0x30613c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x306138u, 0x306140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306140u;
label_306140:
    // 0x306140: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x306140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_306144:
    // 0x306144: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_306148:
    if (ctx->pc == 0x306148u) {
        ctx->pc = 0x306148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306144u;
        // 0x306148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30614Cu;
        goto label_30614c;
    }
    ctx->pc = 0x306144u;
    {
        const bool branch_taken_0x306144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306144) {
            ctx->pc = 0x306148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306144u;
            // 0x306148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x30614Cu;
label_30614c:
    // 0x30614c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_306150:
    // 0x306150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_306154:
    // 0x306154: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x306154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306158:
    // 0x306158: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x306158u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_30615c:
    // 0x30615c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306160:
    // 0x306160: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x306160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_306164:
    // 0x306164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306168:
    // 0x306168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30616c:
    // 0x30616c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30616cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306170:
    // 0x306170: 0xc088178  jal         func_2205E0
label_306174:
    if (ctx->pc == 0x306174u) {
        ctx->pc = 0x306174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306170u;
        // 0x306174: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306178u;
        goto label_306178;
    }
    ctx->pc = 0x306170u;
    SET_GPR_U32(ctx, 31, 0x306178u);
    ctx->pc = 0x306174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306170u;
    // 0x306174: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x306170u, 0x306178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306178u;
label_306178:
    // 0x306178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30617c:
    // 0x30617c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30617cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_306180:
    // 0x306180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x306180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_306184:
    // 0x306184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x306184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_306188:
    // 0x306188: 0x3e00008  jr          $ra
label_30618c:
    if (ctx->pc == 0x30618Cu) {
        ctx->pc = 0x30618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306188u;
        // 0x30618c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306190u;
        goto label_fallthrough_0x306188;
    }
    ctx->pc = 0x306188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306188u;
        // 0x30618c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306188:
    ctx->pc = 0x306190u;
}
