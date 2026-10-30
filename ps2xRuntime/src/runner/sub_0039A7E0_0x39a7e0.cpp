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

// Function: sub_0039A7E0
// Address: 0x39a7e0 - 0x39a850
void sub_0039A7E0_0x39a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A7E0_0x39a7e0");
#endif

    switch (ctx->pc) {
        case 0x39a7e0u: goto label_39a7e0;
        case 0x39a7e4u: goto label_39a7e4;
        case 0x39a7e8u: goto label_39a7e8;
        case 0x39a7ecu: goto label_39a7ec;
        case 0x39a7f0u: goto label_39a7f0;
        case 0x39a7f4u: goto label_39a7f4;
        case 0x39a7f8u: goto label_39a7f8;
        case 0x39a7fcu: goto label_39a7fc;
        case 0x39a800u: goto label_39a800;
        case 0x39a804u: goto label_39a804;
        case 0x39a808u: goto label_39a808;
        case 0x39a80cu: goto label_39a80c;
        case 0x39a810u: goto label_39a810;
        case 0x39a814u: goto label_39a814;
        case 0x39a818u: goto label_39a818;
        case 0x39a81cu: goto label_39a81c;
        case 0x39a820u: goto label_39a820;
        case 0x39a824u: goto label_39a824;
        case 0x39a828u: goto label_39a828;
        case 0x39a82cu: goto label_39a82c;
        case 0x39a830u: goto label_39a830;
        case 0x39a834u: goto label_39a834;
        case 0x39a838u: goto label_39a838;
        case 0x39a83cu: goto label_39a83c;
        case 0x39a840u: goto label_39a840;
        case 0x39a844u: goto label_39a844;
        case 0x39a848u: goto label_39a848;
        case 0x39a84cu: goto label_39a84c;
        default: break;
    }

    ctx->pc = 0x39a7e0u;

label_39a7e0:
    // 0x39a7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39a7e4:
    // 0x39a7e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39a7e8:
    // 0x39a7e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_39a7ec:
    // 0x39a7ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39a7f0:
    // 0x39a7f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39a7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39a7f4:
    // 0x39a7f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x39a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_39a7f8:
    // 0x39a7f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39a7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a7fc:
    // 0x39a7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a800:
    // 0x39a800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a804:
    // 0x39a804: 0x8c482b04  lw          $t0, 0x2B04($v0)
    ctx->pc = 0x39a804u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_39a808:
    // 0x39a808: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x39a808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39a80c:
    // 0x39a80c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x39a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39a810:
    // 0x39a810: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x39a810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_39a814:
    // 0x39a814: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x39a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_39a818:
    // 0x39a818: 0x40f809  jalr        $v0
label_39a81c:
    if (ctx->pc == 0x39A81Cu) {
        ctx->pc = 0x39A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A818u;
        // 0x39a81c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A820u;
        goto label_39a820;
    }
    ctx->pc = 0x39A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A820u);
        ctx->pc = 0x39A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A818u;
        // 0x39a81c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A818u, 0x39A820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A820u;
label_39a820:
    // 0x39a820: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x39a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_39a824:
    // 0x39a824: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x39a824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_39a828:
    // 0x39a828: 0x2238818  mult        $s1, $s1, $v1
    ctx->pc = 0x39a828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_39a82c:
    // 0x39a82c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a830:
    // 0x39a830: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x39a830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_39a834:
    // 0x39a834: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x39a834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_39a838:
    // 0x39a838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39a838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a83c:
    // 0x39a83c: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x39a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_39a840:
    // 0x39a840: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39a840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a844:
    // 0x39a844: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x39a844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a848:
    // 0x39a848: 0x3e00008  jr          $ra
label_39a84c:
    if (ctx->pc == 0x39A84Cu) {
        ctx->pc = 0x39A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A848u;
        // 0x39a84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A850u;
        goto label_fallthrough_0x39a848;
    }
    ctx->pc = 0x39A848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A848u;
        // 0x39a84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a848:
    ctx->pc = 0x39A850u;
}
