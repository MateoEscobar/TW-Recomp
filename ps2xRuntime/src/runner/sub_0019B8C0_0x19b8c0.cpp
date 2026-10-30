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

// Function: sub_0019B8C0
// Address: 0x19b8c0 - 0x19b968
void sub_0019B8C0_0x19b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B8C0_0x19b8c0");
#endif

    switch (ctx->pc) {
        case 0x19b8c0u: goto label_19b8c0;
        case 0x19b8c4u: goto label_19b8c4;
        case 0x19b8c8u: goto label_19b8c8;
        case 0x19b8ccu: goto label_19b8cc;
        case 0x19b8d0u: goto label_19b8d0;
        case 0x19b8d4u: goto label_19b8d4;
        case 0x19b8d8u: goto label_19b8d8;
        case 0x19b8dcu: goto label_19b8dc;
        case 0x19b8e0u: goto label_19b8e0;
        case 0x19b8e4u: goto label_19b8e4;
        case 0x19b8e8u: goto label_19b8e8;
        case 0x19b8ecu: goto label_19b8ec;
        case 0x19b8f0u: goto label_19b8f0;
        case 0x19b8f4u: goto label_19b8f4;
        case 0x19b8f8u: goto label_19b8f8;
        case 0x19b8fcu: goto label_19b8fc;
        case 0x19b900u: goto label_19b900;
        case 0x19b904u: goto label_19b904;
        case 0x19b908u: goto label_19b908;
        case 0x19b90cu: goto label_19b90c;
        case 0x19b910u: goto label_19b910;
        case 0x19b914u: goto label_19b914;
        case 0x19b918u: goto label_19b918;
        case 0x19b91cu: goto label_19b91c;
        case 0x19b920u: goto label_19b920;
        case 0x19b924u: goto label_19b924;
        case 0x19b928u: goto label_19b928;
        case 0x19b92cu: goto label_19b92c;
        case 0x19b930u: goto label_19b930;
        case 0x19b934u: goto label_19b934;
        case 0x19b938u: goto label_19b938;
        case 0x19b93cu: goto label_19b93c;
        case 0x19b940u: goto label_19b940;
        case 0x19b944u: goto label_19b944;
        case 0x19b948u: goto label_19b948;
        case 0x19b94cu: goto label_19b94c;
        case 0x19b950u: goto label_19b950;
        case 0x19b954u: goto label_19b954;
        case 0x19b958u: goto label_19b958;
        case 0x19b95cu: goto label_19b95c;
        case 0x19b960u: goto label_19b960;
        case 0x19b964u: goto label_19b964;
        default: break;
    }

    ctx->pc = 0x19b8c0u;

label_19b8c0:
    // 0x19b8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19b8c4:
    // 0x19b8c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19b8c8:
    // 0x19b8c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19b8cc:
    // 0x19b8cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b8d0:
    // 0x19b8d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19b8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b8d4:
    // 0x19b8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19b8d8:
    // 0x19b8d8: 0xc047e6c  jal         func_11F9B0
label_19b8dc:
    if (ctx->pc == 0x19B8DCu) {
        ctx->pc = 0x19B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8D8u;
        // 0x19b8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B8E0u;
        goto label_19b8e0;
    }
    ctx->pc = 0x19B8D8u;
    SET_GPR_U32(ctx, 31, 0x19B8E0u);
    ctx->pc = 0x19B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8D8u;
    // 0x19b8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19B8D8u, 0x19B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8E0u;
label_19b8e0:
    // 0x19b8e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b8e4:
    // 0x19b8e4: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x19b8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_19b8e8:
    // 0x19b8e8: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x19b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_19b8ec:
    // 0x19b8ec: 0xa0f809  jalr        $a1
label_19b8f0:
    if (ctx->pc == 0x19B8F0u) {
        ctx->pc = 0x19B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8ECu;
        // 0x19b8f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B8F4u;
        goto label_19b8f4;
    }
    ctx->pc = 0x19B8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19B8F4u);
        ctx->pc = 0x19B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8ECu;
        // 0x19b8f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8ECu, 0x19B8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B8F4u;
label_19b8f4:
    // 0x19b8f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19b8f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19b8f8:
    // 0x19b8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b8fc:
    // 0x19b8fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19b8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19b900:
    // 0x19b900: 0xc066df6  jal         func_19B7D8
label_19b904:
    if (ctx->pc == 0x19B904u) {
        ctx->pc = 0x19B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B900u;
        // 0x19b904: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B908u;
        goto label_19b908;
    }
    ctx->pc = 0x19B900u;
    SET_GPR_U32(ctx, 31, 0x19B908u);
    ctx->pc = 0x19B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B900u;
    // 0x19b904: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B7D8u, 0x19B900u, 0x19B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B908u;
label_19b908:
    // 0x19b908: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x19b908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_19b90c:
    // 0x19b90c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x19b90cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_19b910:
    // 0x19b910: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19b910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19b914:
    // 0x19b914: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
label_19b918:
    // 0x19b918: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19b918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19b91c:
    // 0x19b91c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19b91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_19b920:
    // 0x19b920: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x19b920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_19b924:
    // 0x19b924: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x19b924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_19b928:
    // 0x19b928: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x19b928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
label_19b92c:
    // 0x19b92c: 0x3421f972  ori         $at, $at, 0xF972
    ctx->pc = 0x19b92cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63858);
label_19b930:
    // 0x19b930: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x19b930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_19b934:
    // 0x19b934: 0xc0cdd5a  jal         func_337568
label_19b938:
    if (ctx->pc == 0x19B938u) {
        ctx->pc = 0x19B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B934u;
        // 0x19b938: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B93Cu;
        goto label_19b93c;
    }
    ctx->pc = 0x19B934u;
    SET_GPR_U32(ctx, 31, 0x19B93Cu);
    ctx->pc = 0x19B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B934u;
    // 0x19b938: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x19B934u, 0x19B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B93Cu;
label_19b93c:
    // 0x19b93c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x19b93cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19b940:
    // 0x19b940: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x19b940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_19b944:
    // 0x19b944: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x19b944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_19b948:
    // 0x19b948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b94c:
    // 0x19b94c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x19b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b950:
    // 0x19b950: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x19b950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_19b954:
    // 0x19b954: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19b954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b958:
    // 0x19b958: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19b958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19b95c:
    // 0x19b95c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19b95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19b960:
    // 0x19b960: 0x3e00008  jr          $ra
label_19b964:
    if (ctx->pc == 0x19B964u) {
        ctx->pc = 0x19B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B960u;
        // 0x19b964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B968u;
        goto label_fallthrough_0x19b960;
    }
    ctx->pc = 0x19B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B960u;
        // 0x19b964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19b960:
    ctx->pc = 0x19B968u;
}
