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

// Function: sub_00279568
// Address: 0x279568 - 0x2796a0
void sub_00279568_0x279568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279568_0x279568");
#endif

    switch (ctx->pc) {
        case 0x279568u: goto label_279568;
        case 0x27956cu: goto label_27956c;
        case 0x279570u: goto label_279570;
        case 0x279574u: goto label_279574;
        case 0x279578u: goto label_279578;
        case 0x27957cu: goto label_27957c;
        case 0x279580u: goto label_279580;
        case 0x279584u: goto label_279584;
        case 0x279588u: goto label_279588;
        case 0x27958cu: goto label_27958c;
        case 0x279590u: goto label_279590;
        case 0x279594u: goto label_279594;
        case 0x279598u: goto label_279598;
        case 0x27959cu: goto label_27959c;
        case 0x2795a0u: goto label_2795a0;
        case 0x2795a4u: goto label_2795a4;
        case 0x2795a8u: goto label_2795a8;
        case 0x2795acu: goto label_2795ac;
        case 0x2795b0u: goto label_2795b0;
        case 0x2795b4u: goto label_2795b4;
        case 0x2795b8u: goto label_2795b8;
        case 0x2795bcu: goto label_2795bc;
        case 0x2795c0u: goto label_2795c0;
        case 0x2795c4u: goto label_2795c4;
        case 0x2795c8u: goto label_2795c8;
        case 0x2795ccu: goto label_2795cc;
        case 0x2795d0u: goto label_2795d0;
        case 0x2795d4u: goto label_2795d4;
        case 0x2795d8u: goto label_2795d8;
        case 0x2795dcu: goto label_2795dc;
        case 0x2795e0u: goto label_2795e0;
        case 0x2795e4u: goto label_2795e4;
        case 0x2795e8u: goto label_2795e8;
        case 0x2795ecu: goto label_2795ec;
        case 0x2795f0u: goto label_2795f0;
        case 0x2795f4u: goto label_2795f4;
        case 0x2795f8u: goto label_2795f8;
        case 0x2795fcu: goto label_2795fc;
        case 0x279600u: goto label_279600;
        case 0x279604u: goto label_279604;
        case 0x279608u: goto label_279608;
        case 0x27960cu: goto label_27960c;
        case 0x279610u: goto label_279610;
        case 0x279614u: goto label_279614;
        case 0x279618u: goto label_279618;
        case 0x27961cu: goto label_27961c;
        case 0x279620u: goto label_279620;
        case 0x279624u: goto label_279624;
        case 0x279628u: goto label_279628;
        case 0x27962cu: goto label_27962c;
        case 0x279630u: goto label_279630;
        case 0x279634u: goto label_279634;
        case 0x279638u: goto label_279638;
        case 0x27963cu: goto label_27963c;
        case 0x279640u: goto label_279640;
        case 0x279644u: goto label_279644;
        case 0x279648u: goto label_279648;
        case 0x27964cu: goto label_27964c;
        case 0x279650u: goto label_279650;
        case 0x279654u: goto label_279654;
        case 0x279658u: goto label_279658;
        case 0x27965cu: goto label_27965c;
        case 0x279660u: goto label_279660;
        case 0x279664u: goto label_279664;
        case 0x279668u: goto label_279668;
        case 0x27966cu: goto label_27966c;
        case 0x279670u: goto label_279670;
        case 0x279674u: goto label_279674;
        case 0x279678u: goto label_279678;
        case 0x27967cu: goto label_27967c;
        case 0x279680u: goto label_279680;
        case 0x279684u: goto label_279684;
        case 0x279688u: goto label_279688;
        case 0x27968cu: goto label_27968c;
        case 0x279690u: goto label_279690;
        case 0x279694u: goto label_279694;
        case 0x279698u: goto label_279698;
        case 0x27969cu: goto label_27969c;
        default: break;
    }

    ctx->pc = 0x279568u;

label_279568:
    // 0x279568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27956c:
    // 0x27956c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_279570:
    // 0x279570: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x279570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_279574:
    // 0x279574: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x279574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_279578:
    // 0x279578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27957c:
    // 0x27957c: 0xc08a61a  jal         func_229868
label_279580:
    if (ctx->pc == 0x279580u) {
        ctx->pc = 0x279580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27957Cu;
        // 0x279580: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279584u;
        goto label_279584;
    }
    ctx->pc = 0x27957Cu;
    SET_GPR_U32(ctx, 31, 0x279584u);
    ctx->pc = 0x279580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27957Cu;
    // 0x279580: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x27957Cu, 0x279584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279584u;
label_279584:
    // 0x279584: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x279584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279588:
    // 0x279588: 0xc08a61a  jal         func_229868
label_27958c:
    if (ctx->pc == 0x27958Cu) {
        ctx->pc = 0x27958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279588u;
        // 0x27958c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279590u;
        goto label_279590;
    }
    ctx->pc = 0x279588u;
    SET_GPR_U32(ctx, 31, 0x279590u);
    ctx->pc = 0x27958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279588u;
    // 0x27958c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279588u, 0x279590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279590u;
label_279590:
    // 0x279590: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_279594:
    if (ctx->pc == 0x279594u) {
        ctx->pc = 0x279594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279590u;
        // 0x279594: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279598u;
        goto label_279598;
    }
    ctx->pc = 0x279590u;
    {
        const bool branch_taken_0x279590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x279594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279590u;
        // 0x279594: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279590) {
            ctx->pc = 0x27964Cu;
            goto label_27964c;
        }
    }
    ctx->pc = 0x279598u;
label_279598:
    // 0x279598: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
label_27959c:
    if (ctx->pc == 0x27959Cu) {
        ctx->pc = 0x27959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279598u;
        // 0x27959c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795A0u;
        goto label_2795a0;
    }
    ctx->pc = 0x279598u;
    {
        const bool branch_taken_0x279598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279598u;
        // 0x27959c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279598) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x2795A0u;
label_2795a0:
    // 0x2795a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2795a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2795a4:
    // 0x2795a4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2795a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2795a8:
    // 0x2795a8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2795a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2795ac:
    // 0x2795ac: 0x40f809  jalr        $v0
label_2795b0:
    if (ctx->pc == 0x2795B0u) {
        ctx->pc = 0x2795B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795ACu;
        // 0x2795b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795B4u;
        goto label_2795b4;
    }
    ctx->pc = 0x2795ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2795B4u);
        ctx->pc = 0x2795B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795ACu;
        // 0x2795b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2795ACu, 0x2795B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2795B4u;
label_2795b4:
    // 0x2795b4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2795b8:
    if (ctx->pc == 0x2795B8u) {
        ctx->pc = 0x2795B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795B4u;
        // 0x2795b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795BCu;
        goto label_2795bc;
    }
    ctx->pc = 0x2795B4u;
    {
        const bool branch_taken_0x2795b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795B4u;
        // 0x2795b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795b4) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x2795BCu;
label_2795bc:
    // 0x2795bc: 0xc089f5e  jal         func_227D78
label_2795c0:
    if (ctx->pc == 0x2795C0u) {
        ctx->pc = 0x2795C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795BCu;
        // 0x2795c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795C4u;
        goto label_2795c4;
    }
    ctx->pc = 0x2795BCu;
    SET_GPR_U32(ctx, 31, 0x2795C4u);
    ctx->pc = 0x2795C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795BCu;
    // 0x2795c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x2795BCu, 0x2795C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795C4u;
label_2795c4:
    // 0x2795c4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2795c8:
    if (ctx->pc == 0x2795C8u) {
        ctx->pc = 0x2795C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795C4u;
        // 0x2795c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795CCu;
        goto label_2795cc;
    }
    ctx->pc = 0x2795C4u;
    {
        const bool branch_taken_0x2795c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795C4u;
        // 0x2795c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795c4) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x2795CCu;
label_2795cc:
    // 0x2795cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2795ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2795d0:
    // 0x2795d0: 0xc09e42a  jal         func_2790A8
label_2795d4:
    if (ctx->pc == 0x2795D4u) {
        ctx->pc = 0x2795D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795D0u;
        // 0x2795d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795D8u;
        goto label_2795d8;
    }
    ctx->pc = 0x2795D0u;
    SET_GPR_U32(ctx, 31, 0x2795D8u);
    ctx->pc = 0x2795D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795D0u;
    // 0x2795d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x2795D0u, 0x2795D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795D8u;
label_2795d8:
    // 0x2795d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2795d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2795dc:
    // 0x2795dc: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x2795dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2795e0:
    // 0x2795e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2795e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2795e4:
    // 0x2795e4: 0x0  nop
    ctx->pc = 0x2795e4u;
    // NOP
label_2795e8:
    // 0x2795e8: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_2795ec:
    if (ctx->pc == 0x2795ECu) {
        ctx->pc = 0x2795ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795E8u;
        // 0x2795ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795F0u;
        goto label_2795f0;
    }
    ctx->pc = 0x2795E8u;
    {
        const bool branch_taken_0x2795e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2795ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795E8u;
        // 0x2795ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795e8) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x2795F0u;
label_2795f0:
    // 0x2795f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2795f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2795f4:
    // 0x2795f4: 0xc08a684  jal         func_229A10
label_2795f8:
    if (ctx->pc == 0x2795F8u) {
        ctx->pc = 0x2795F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795F4u;
        // 0x2795f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795FCu;
        goto label_2795fc;
    }
    ctx->pc = 0x2795F4u;
    SET_GPR_U32(ctx, 31, 0x2795FCu);
    ctx->pc = 0x2795F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795F4u;
    // 0x2795f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x2795F4u, 0x2795FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795FCu;
label_2795fc:
    // 0x2795fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2795fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279600:
    // 0x279600: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279600u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279604:
    // 0x279604: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279608:
    // 0x279608: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27960c:
    // 0x27960c: 0x0  nop
    ctx->pc = 0x27960cu;
    // NOP
label_279610:
    // 0x279610: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_279614:
    if (ctx->pc == 0x279614u) {
        ctx->pc = 0x279614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279610u;
        // 0x279614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279618u;
        goto label_279618;
    }
    ctx->pc = 0x279610u;
    {
        const bool branch_taken_0x279610 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279610u;
        // 0x279614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279610) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x279618u;
label_279618:
    // 0x279618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27961c:
    // 0x27961c: 0xc088aa4  jal         func_222A90
label_279620:
    if (ctx->pc == 0x279620u) {
        ctx->pc = 0x279620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27961Cu;
        // 0x279620: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279624u;
        goto label_279624;
    }
    ctx->pc = 0x27961Cu;
    SET_GPR_U32(ctx, 31, 0x279624u);
    ctx->pc = 0x279620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27961Cu;
    // 0x279620: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x27961Cu, 0x279624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279624u;
label_279624:
    // 0x279624: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_279628:
    if (ctx->pc == 0x279628u) {
        ctx->pc = 0x279628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279624u;
        // 0x279628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27962Cu;
        goto label_27962c;
    }
    ctx->pc = 0x279624u;
    {
        const bool branch_taken_0x279624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279624u;
        // 0x279628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279624) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x27962Cu;
label_27962c:
    // 0x27962c: 0xc087502  jal         func_21D408
label_279630:
    if (ctx->pc == 0x279630u) {
        ctx->pc = 0x279630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27962Cu;
        // 0x279630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279634u;
        goto label_279634;
    }
    ctx->pc = 0x27962Cu;
    SET_GPR_U32(ctx, 31, 0x279634u);
    ctx->pc = 0x279630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27962Cu;
    // 0x279630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x27962Cu, 0x279634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279634u;
label_279634:
    // 0x279634: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x279634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279638:
    // 0x279638: 0xc087502  jal         func_21D408
label_27963c:
    if (ctx->pc == 0x27963Cu) {
        ctx->pc = 0x27963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279638u;
        // 0x27963c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279640u;
        goto label_279640;
    }
    ctx->pc = 0x279638u;
    SET_GPR_U32(ctx, 31, 0x279640u);
    ctx->pc = 0x27963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279638u;
    // 0x27963c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279638u, 0x279640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279640u;
label_279640:
    // 0x279640: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x279640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279644:
    // 0x279644: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_279648:
    if (ctx->pc == 0x279648u) {
        ctx->pc = 0x279648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279644u;
        // 0x279648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27964Cu;
        goto label_27964c;
    }
    ctx->pc = 0x279644u;
    {
        const bool branch_taken_0x279644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x279648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279644u;
        // 0x279648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279644) {
            ctx->pc = 0x279654u;
            goto label_279654;
        }
    }
    ctx->pc = 0x27964Cu;
label_27964c:
    // 0x27964c: 0x1000000d  b           . + 4 + (0xD << 2)
label_279650:
    if (ctx->pc == 0x279650u) {
        ctx->pc = 0x279650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27964Cu;
        // 0x279650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279654u;
        goto label_279654;
    }
    ctx->pc = 0x27964Cu;
    {
        const bool branch_taken_0x27964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27964Cu;
        // 0x279650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27964c) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x279654u;
label_279654:
    // 0x279654: 0xc089f98  jal         func_227E60
label_279658:
    if (ctx->pc == 0x279658u) {
        ctx->pc = 0x279658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279654u;
        // 0x279658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27965Cu;
        goto label_27965c;
    }
    ctx->pc = 0x279654u;
    SET_GPR_U32(ctx, 31, 0x27965Cu);
    ctx->pc = 0x279658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279654u;
    // 0x279658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x279654u, 0x27965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27965Cu;
label_27965c:
    // 0x27965c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_279660:
    if (ctx->pc == 0x279660u) {
        ctx->pc = 0x279660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27965Cu;
        // 0x279660: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279664u;
        goto label_279664;
    }
    ctx->pc = 0x27965Cu;
    {
        const bool branch_taken_0x27965c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27965Cu;
        // 0x279660: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27965c) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x279664u;
label_279664:
    // 0x279664: 0xc088f04  jal         func_223C10
label_279668:
    if (ctx->pc == 0x279668u) {
        ctx->pc = 0x279668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279664u;
        // 0x279668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27966Cu;
        goto label_27966c;
    }
    ctx->pc = 0x279664u;
    SET_GPR_U32(ctx, 31, 0x27966Cu);
    ctx->pc = 0x279668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279664u;
    // 0x279668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279664u, 0x27966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27966Cu;
label_27966c:
    // 0x27966c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_279670:
    if (ctx->pc == 0x279670u) {
        ctx->pc = 0x279670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27966Cu;
        // 0x279670: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279674u;
        goto label_279674;
    }
    ctx->pc = 0x27966Cu;
    {
        const bool branch_taken_0x27966c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27966Cu;
        // 0x279670: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27966c) {
            ctx->pc = 0x279684u;
            goto label_279684;
        }
    }
    ctx->pc = 0x279674u;
label_279674:
    // 0x279674: 0xc089fe4  jal         func_227F90
label_279678:
    if (ctx->pc == 0x279678u) {
        ctx->pc = 0x279678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279674u;
        // 0x279678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27967Cu;
        goto label_27967c;
    }
    ctx->pc = 0x279674u;
    SET_GPR_U32(ctx, 31, 0x27967Cu);
    ctx->pc = 0x279678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279674u;
    // 0x279678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x279674u, 0x27967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27967Cu;
label_27967c:
    // 0x27967c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x27967cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_279680:
    // 0x279680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279684:
    // 0x279684: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x279684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279688:
    // 0x279688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x279688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27968c:
    // 0x27968c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27968cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279690:
    // 0x279690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279694:
    // 0x279694: 0x3e00008  jr          $ra
label_279698:
    if (ctx->pc == 0x279698u) {
        ctx->pc = 0x279698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279694u;
        // 0x279698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27969Cu;
        goto label_27969c;
    }
    ctx->pc = 0x279694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279694u;
        // 0x279698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27969Cu;
label_27969c:
    // 0x27969c: 0x0  nop
    ctx->pc = 0x27969cu;
    // NOP
    ctx->pc = 0x2796a0u;
}
