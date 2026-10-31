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

// Function: sub_002798C0
// Address: 0x2798c0 - 0x279a08
void sub_002798C0_0x2798c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002798C0_0x2798c0");
#endif

    switch (ctx->pc) {
        case 0x2798c0u: goto label_2798c0;
        case 0x2798c4u: goto label_2798c4;
        case 0x2798c8u: goto label_2798c8;
        case 0x2798ccu: goto label_2798cc;
        case 0x2798d0u: goto label_2798d0;
        case 0x2798d4u: goto label_2798d4;
        case 0x2798d8u: goto label_2798d8;
        case 0x2798dcu: goto label_2798dc;
        case 0x2798e0u: goto label_2798e0;
        case 0x2798e4u: goto label_2798e4;
        case 0x2798e8u: goto label_2798e8;
        case 0x2798ecu: goto label_2798ec;
        case 0x2798f0u: goto label_2798f0;
        case 0x2798f4u: goto label_2798f4;
        case 0x2798f8u: goto label_2798f8;
        case 0x2798fcu: goto label_2798fc;
        case 0x279900u: goto label_279900;
        case 0x279904u: goto label_279904;
        case 0x279908u: goto label_279908;
        case 0x27990cu: goto label_27990c;
        case 0x279910u: goto label_279910;
        case 0x279914u: goto label_279914;
        case 0x279918u: goto label_279918;
        case 0x27991cu: goto label_27991c;
        case 0x279920u: goto label_279920;
        case 0x279924u: goto label_279924;
        case 0x279928u: goto label_279928;
        case 0x27992cu: goto label_27992c;
        case 0x279930u: goto label_279930;
        case 0x279934u: goto label_279934;
        case 0x279938u: goto label_279938;
        case 0x27993cu: goto label_27993c;
        case 0x279940u: goto label_279940;
        case 0x279944u: goto label_279944;
        case 0x279948u: goto label_279948;
        case 0x27994cu: goto label_27994c;
        case 0x279950u: goto label_279950;
        case 0x279954u: goto label_279954;
        case 0x279958u: goto label_279958;
        case 0x27995cu: goto label_27995c;
        case 0x279960u: goto label_279960;
        case 0x279964u: goto label_279964;
        case 0x279968u: goto label_279968;
        case 0x27996cu: goto label_27996c;
        case 0x279970u: goto label_279970;
        case 0x279974u: goto label_279974;
        case 0x279978u: goto label_279978;
        case 0x27997cu: goto label_27997c;
        case 0x279980u: goto label_279980;
        case 0x279984u: goto label_279984;
        case 0x279988u: goto label_279988;
        case 0x27998cu: goto label_27998c;
        case 0x279990u: goto label_279990;
        case 0x279994u: goto label_279994;
        case 0x279998u: goto label_279998;
        case 0x27999cu: goto label_27999c;
        case 0x2799a0u: goto label_2799a0;
        case 0x2799a4u: goto label_2799a4;
        case 0x2799a8u: goto label_2799a8;
        case 0x2799acu: goto label_2799ac;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799b4u: goto label_2799b4;
        case 0x2799b8u: goto label_2799b8;
        case 0x2799bcu: goto label_2799bc;
        case 0x2799c0u: goto label_2799c0;
        case 0x2799c4u: goto label_2799c4;
        case 0x2799c8u: goto label_2799c8;
        case 0x2799ccu: goto label_2799cc;
        case 0x2799d0u: goto label_2799d0;
        case 0x2799d4u: goto label_2799d4;
        case 0x2799d8u: goto label_2799d8;
        case 0x2799dcu: goto label_2799dc;
        case 0x2799e0u: goto label_2799e0;
        case 0x2799e4u: goto label_2799e4;
        case 0x2799e8u: goto label_2799e8;
        case 0x2799ecu: goto label_2799ec;
        case 0x2799f0u: goto label_2799f0;
        case 0x2799f4u: goto label_2799f4;
        case 0x2799f8u: goto label_2799f8;
        case 0x2799fcu: goto label_2799fc;
        case 0x279a00u: goto label_279a00;
        case 0x279a04u: goto label_279a04;
        default: break;
    }

    ctx->pc = 0x2798c0u;

label_2798c0:
    // 0x2798c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2798c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2798c4:
    // 0x2798c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2798c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2798c8:
    // 0x2798c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2798c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2798cc:
    // 0x2798cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2798ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2798d0:
    // 0x2798d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2798d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2798d4:
    // 0x2798d4: 0xc08a61a  jal         func_229868
label_2798d8:
    if (ctx->pc == 0x2798D8u) {
        ctx->pc = 0x2798D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798D4u;
        // 0x2798d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2798DCu;
        goto label_2798dc;
    }
    ctx->pc = 0x2798D4u;
    SET_GPR_U32(ctx, 31, 0x2798DCu);
    ctx->pc = 0x2798D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798D4u;
    // 0x2798d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2798D4u, 0x2798DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798DCu;
label_2798dc:
    // 0x2798dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2798dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2798e0:
    // 0x2798e0: 0xc08a61a  jal         func_229868
label_2798e4:
    if (ctx->pc == 0x2798E4u) {
        ctx->pc = 0x2798E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798E0u;
        // 0x2798e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2798E8u;
        goto label_2798e8;
    }
    ctx->pc = 0x2798E0u;
    SET_GPR_U32(ctx, 31, 0x2798E8u);
    ctx->pc = 0x2798E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798E0u;
    // 0x2798e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2798E0u, 0x2798E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798E8u;
label_2798e8:
    // 0x2798e8: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_2798ec:
    if (ctx->pc == 0x2798ECu) {
        ctx->pc = 0x2798ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798E8u;
        // 0x2798ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2798F0u;
        goto label_2798f0;
    }
    ctx->pc = 0x2798E8u;
    {
        const bool branch_taken_0x2798e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798E8u;
        // 0x2798ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798e8) {
            ctx->pc = 0x2799A0u;
            goto label_2799a0;
        }
    }
    ctx->pc = 0x2798F0u;
label_2798f0:
    // 0x2798f0: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
label_2798f4:
    if (ctx->pc == 0x2798F4u) {
        ctx->pc = 0x2798F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798F0u;
        // 0x2798f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2798F8u;
        goto label_2798f8;
    }
    ctx->pc = 0x2798F0u;
    {
        const bool branch_taken_0x2798f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798F0u;
        // 0x2798f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798f0) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x2798F8u;
label_2798f8:
    // 0x2798f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2798f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2798fc:
    // 0x2798fc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2798fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279900:
    // 0x279900: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_279904:
    // 0x279904: 0x40f809  jalr        $v0
label_279908:
    if (ctx->pc == 0x279908u) {
        ctx->pc = 0x279908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279904u;
        // 0x279908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27990Cu;
        goto label_27990c;
    }
    ctx->pc = 0x279904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27990Cu);
        ctx->pc = 0x279908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279904u;
        // 0x279908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279904u, 0x27990Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27990Cu;
label_27990c:
    // 0x27990c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_279910:
    if (ctx->pc == 0x279910u) {
        ctx->pc = 0x279910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27990Cu;
        // 0x279910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279914u;
        goto label_279914;
    }
    ctx->pc = 0x27990Cu;
    {
        const bool branch_taken_0x27990c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27990Cu;
        // 0x279910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27990c) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x279914u;
label_279914:
    // 0x279914: 0xc089f5e  jal         func_227D78
label_279918:
    if (ctx->pc == 0x279918u) {
        ctx->pc = 0x279918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279914u;
        // 0x279918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27991Cu;
        goto label_27991c;
    }
    ctx->pc = 0x279914u;
    SET_GPR_U32(ctx, 31, 0x27991Cu);
    ctx->pc = 0x279918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279914u;
    // 0x279918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279914u, 0x27991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27991Cu;
label_27991c:
    // 0x27991c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_279920:
    if (ctx->pc == 0x279920u) {
        ctx->pc = 0x279920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27991Cu;
        // 0x279920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279924u;
        goto label_279924;
    }
    ctx->pc = 0x27991Cu;
    {
        const bool branch_taken_0x27991c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27991Cu;
        // 0x279920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27991c) {
            ctx->pc = 0x2799A0u;
            goto label_2799a0;
        }
    }
    ctx->pc = 0x279924u;
label_279924:
    // 0x279924: 0xc09e42a  jal         func_2790A8
label_279928:
    if (ctx->pc == 0x279928u) {
        ctx->pc = 0x279928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279924u;
        // 0x279928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27992Cu;
        goto label_27992c;
    }
    ctx->pc = 0x279924u;
    SET_GPR_U32(ctx, 31, 0x27992Cu);
    ctx->pc = 0x279928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279924u;
    // 0x279928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x279924u, 0x27992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27992Cu;
label_27992c:
    // 0x27992c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27992cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279930:
    // 0x279930: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x279930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279934:
    // 0x279934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279938:
    // 0x279938: 0x0  nop
    ctx->pc = 0x279938u;
    // NOP
label_27993c:
    // 0x27993c: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_279940:
    if (ctx->pc == 0x279940u) {
        ctx->pc = 0x279940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27993Cu;
        // 0x279940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279944u;
        goto label_279944;
    }
    ctx->pc = 0x27993Cu;
    {
        const bool branch_taken_0x27993c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27993Cu;
        // 0x279940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27993c) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x279944u;
label_279944:
    // 0x279944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279948:
    // 0x279948: 0xc08a684  jal         func_229A10
label_27994c:
    if (ctx->pc == 0x27994Cu) {
        ctx->pc = 0x27994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279948u;
        // 0x27994c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279950u;
        goto label_279950;
    }
    ctx->pc = 0x279948u;
    SET_GPR_U32(ctx, 31, 0x279950u);
    ctx->pc = 0x27994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279948u;
    // 0x27994c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279948u, 0x279950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279950u;
label_279950:
    // 0x279950: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279954:
    // 0x279954: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279954u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279958:
    // 0x279958: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27995c:
    // 0x27995c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27995cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279960:
    // 0x279960: 0x0  nop
    ctx->pc = 0x279960u;
    // NOP
label_279964:
    // 0x279964: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_279968:
    if (ctx->pc == 0x279968u) {
        ctx->pc = 0x279968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279964u;
        // 0x279968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27996Cu;
        goto label_27996c;
    }
    ctx->pc = 0x279964u;
    {
        const bool branch_taken_0x279964 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279964u;
        // 0x279968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279964) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x27996Cu;
label_27996c:
    // 0x27996c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_279970:
    // 0x279970: 0xc088aa4  jal         func_222A90
label_279974:
    if (ctx->pc == 0x279974u) {
        ctx->pc = 0x279974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279970u;
        // 0x279974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279978u;
        goto label_279978;
    }
    ctx->pc = 0x279970u;
    SET_GPR_U32(ctx, 31, 0x279978u);
    ctx->pc = 0x279974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279970u;
    // 0x279974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x279970u, 0x279978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279978u;
label_279978:
    // 0x279978: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_27997c:
    if (ctx->pc == 0x27997Cu) {
        ctx->pc = 0x27997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279978u;
        // 0x27997c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279980u;
        goto label_279980;
    }
    ctx->pc = 0x279978u;
    {
        const bool branch_taken_0x279978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279978u;
        // 0x27997c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279978) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x279980u;
label_279980:
    // 0x279980: 0xc087502  jal         func_21D408
label_279984:
    if (ctx->pc == 0x279984u) {
        ctx->pc = 0x279984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279980u;
        // 0x279984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279988u;
        goto label_279988;
    }
    ctx->pc = 0x279980u;
    SET_GPR_U32(ctx, 31, 0x279988u);
    ctx->pc = 0x279984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279980u;
    // 0x279984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279980u, 0x279988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279988u;
label_279988:
    // 0x279988: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x279988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_27998c:
    // 0x27998c: 0xc087502  jal         func_21D408
label_279990:
    if (ctx->pc == 0x279990u) {
        ctx->pc = 0x279990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27998Cu;
        // 0x279990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279994u;
        goto label_279994;
    }
    ctx->pc = 0x27998Cu;
    SET_GPR_U32(ctx, 31, 0x279994u);
    ctx->pc = 0x279990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27998Cu;
    // 0x279990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x27998Cu, 0x279994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279994u;
label_279994:
    // 0x279994: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x279994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279998:
    // 0x279998: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_27999c:
    if (ctx->pc == 0x27999Cu) {
        ctx->pc = 0x27999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279998u;
        // 0x27999c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799A0u;
        goto label_2799a0;
    }
    ctx->pc = 0x279998u;
    {
        const bool branch_taken_0x279998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x27999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279998u;
        // 0x27999c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279998) {
            ctx->pc = 0x2799A8u;
            goto label_2799a8;
        }
    }
    ctx->pc = 0x2799A0u;
label_2799a0:
    // 0x2799a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2799a4:
    if (ctx->pc == 0x2799A4u) {
        ctx->pc = 0x2799A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799A0u;
        // 0x2799a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799A8u;
        goto label_2799a8;
    }
    ctx->pc = 0x2799A0u;
    {
        const bool branch_taken_0x2799a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2799A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799A0u;
        // 0x2799a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799a0) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x2799A8u;
label_2799a8:
    // 0x2799a8: 0xc089f98  jal         func_227E60
label_2799ac:
    if (ctx->pc == 0x2799ACu) {
        ctx->pc = 0x2799ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799A8u;
        // 0x2799ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799B0u;
        goto label_2799b0;
    }
    ctx->pc = 0x2799A8u;
    SET_GPR_U32(ctx, 31, 0x2799B0u);
    ctx->pc = 0x2799ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2799A8u;
    // 0x2799ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2799A8u, 0x2799B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799B0u;
label_2799b0:
    // 0x2799b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2799b4:
    if (ctx->pc == 0x2799B4u) {
        ctx->pc = 0x2799B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799B0u;
        // 0x2799b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799B8u;
        goto label_2799b8;
    }
    ctx->pc = 0x2799B0u;
    {
        const bool branch_taken_0x2799b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799B0u;
        // 0x2799b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799b0) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x2799B8u;
label_2799b8:
    // 0x2799b8: 0xc088f04  jal         func_223C10
label_2799bc:
    if (ctx->pc == 0x2799BCu) {
        ctx->pc = 0x2799BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799B8u;
        // 0x2799bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799C0u;
        goto label_2799c0;
    }
    ctx->pc = 0x2799B8u;
    SET_GPR_U32(ctx, 31, 0x2799C0u);
    ctx->pc = 0x2799BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2799B8u;
    // 0x2799bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x2799B8u, 0x2799C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799C0u;
label_2799c0:
    // 0x2799c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2799c4:
    if (ctx->pc == 0x2799C4u) {
        ctx->pc = 0x2799C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799C0u;
        // 0x2799c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799C8u;
        goto label_2799c8;
    }
    ctx->pc = 0x2799C0u;
    {
        const bool branch_taken_0x2799c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799C0u;
        // 0x2799c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799c0) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x2799C8u;
label_2799c8:
    // 0x2799c8: 0xc089fe4  jal         func_227F90
label_2799cc:
    if (ctx->pc == 0x2799CCu) {
        ctx->pc = 0x2799CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799C8u;
        // 0x2799cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799D0u;
        goto label_2799d0;
    }
    ctx->pc = 0x2799C8u;
    SET_GPR_U32(ctx, 31, 0x2799D0u);
    ctx->pc = 0x2799CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2799C8u;
    // 0x2799cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x2799C8u, 0x2799D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799D0u;
label_2799d0:
    // 0x2799d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2799d4:
    if (ctx->pc == 0x2799D4u) {
        ctx->pc = 0x2799D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799D0u;
        // 0x2799d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799D8u;
        goto label_2799d8;
    }
    ctx->pc = 0x2799D0u;
    {
        const bool branch_taken_0x2799d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799D0u;
        // 0x2799d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799d0) {
            ctx->pc = 0x2799F0u;
            goto label_2799f0;
        }
    }
    ctx->pc = 0x2799D8u;
label_2799d8:
    // 0x2799d8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2799d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2799dc:
    // 0x2799dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2799dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2799e0:
    // 0x2799e0: 0xc089998  jal         func_226660
label_2799e4:
    if (ctx->pc == 0x2799E4u) {
        ctx->pc = 0x2799E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799E0u;
        // 0x2799e4: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799E8u;
        goto label_2799e8;
    }
    ctx->pc = 0x2799E0u;
    SET_GPR_U32(ctx, 31, 0x2799E8u);
    ctx->pc = 0x2799E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2799E0u;
    // 0x2799e4: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2799E0u, 0x2799E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799E8u;
label_2799e8:
    // 0x2799e8: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2799e8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2799ec:
    // 0x2799ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2799ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2799f0:
    // 0x2799f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2799f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2799f4:
    // 0x2799f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2799f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2799f8:
    // 0x2799f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2799f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2799fc:
    // 0x2799fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2799fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279a00:
    // 0x279a00: 0x3e00008  jr          $ra
label_279a04:
    if (ctx->pc == 0x279A04u) {
        ctx->pc = 0x279A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A00u;
        // 0x279a04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A08u;
        goto label_fallthrough_0x279a00;
    }
    ctx->pc = 0x279A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A00u;
        // 0x279a04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x279a00:
    ctx->pc = 0x279A08u;
}
