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

// Function: sub_00197970
// Address: 0x197970 - 0x197b30
void sub_00197970_0x197970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197970_0x197970");
#endif

    switch (ctx->pc) {
        case 0x1979a0u: goto label_1979a0;
        case 0x1979acu: goto label_1979ac;
        case 0x1979bcu: goto label_1979bc;
        case 0x1979d0u: goto label_1979d0;
        case 0x1979d8u: goto label_1979d8;
        case 0x1979e4u: goto label_1979e4;
        case 0x1979f4u: goto label_1979f4;
        case 0x197a08u: goto label_197a08;
        case 0x197a20u: goto label_197a20;
        case 0x197a2cu: goto label_197a2c;
        case 0x197a3cu: goto label_197a3c;
        case 0x197a50u: goto label_197a50;
        case 0x197a60u: goto label_197a60;
        case 0x197a6cu: goto label_197a6c;
        case 0x197a7cu: goto label_197a7c;
        case 0x197a90u: goto label_197a90;
        case 0x197a98u: goto label_197a98;
        case 0x197aa4u: goto label_197aa4;
        case 0x197ab4u: goto label_197ab4;
        case 0x197ac8u: goto label_197ac8;
        case 0x197ae0u: goto label_197ae0;
        case 0x197aecu: goto label_197aec;
        case 0x197afcu: goto label_197afc;
        case 0x197b10u: goto label_197b10;
        default: break;
    }

    ctx->pc = 0x197970u;

    // 0x197970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x197974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197978: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x197978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19797c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19797cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197980: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x197980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x197984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197988: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x197988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19798c: 0xd29823  subu        $s3, $a2, $s2
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x197990: 0x1a60005f  blez        $s3, . + 4 + (0x5F << 2)
    ctx->pc = 0x197990u;
    {
        const bool branch_taken_0x197990 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x197994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197990u;
        // 0x197994: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197990) {
            ctx->pc = 0x197B10u;
            goto label_197b10;
        }
    }
    ctx->pc = 0x197998u;
    // 0x197998: 0xc060b64  jal         func_182D90
    ctx->pc = 0x197998u;
    SET_GPR_U32(ctx, 31, 0x1979A0u);
    ctx->pc = 0x182D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D90u, 0x197998u, 0x1979A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979A0u;
label_1979a0:
    // 0x1979a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1979a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979a4: 0xc060b66  jal         func_182D98
    ctx->pc = 0x1979A4u;
    SET_GPR_U32(ctx, 31, 0x1979ACu);
    ctx->pc = 0x1979A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979A4u;
    // 0x1979a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D98u, 0x1979A4u, 0x1979ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979ACu;
label_1979ac:
    // 0x1979ac: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1979acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1979b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1979b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979b4: 0xc060b66  jal         func_182D98
    ctx->pc = 0x1979B4u;
    SET_GPR_U32(ctx, 31, 0x1979BCu);
    ctx->pc = 0x1979B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979B4u;
    // 0x1979b8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D98u, 0x1979B4u, 0x1979BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979BCu;
label_1979bc:
    // 0x1979bc: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x1979bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1979c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1979c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979c4: 0x3012  mflo        $a2
    ctx->pc = 0x1979c4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1979c8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1979C8u;
    SET_GPR_U32(ctx, 31, 0x1979D0u);
    ctx->pc = 0x1979CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979C8u;
    // 0x1979cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1979C8u, 0x1979D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979D0u;
label_1979d0:
    // 0x1979d0: 0xc060b68  jal         func_182DA0
    ctx->pc = 0x1979D0u;
    SET_GPR_U32(ctx, 31, 0x1979D8u);
    ctx->pc = 0x1979D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979D0u;
    // 0x1979d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DA0u, 0x1979D0u, 0x1979D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979D8u;
label_1979d8:
    // 0x1979d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1979d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979dc: 0xc060b6a  jal         func_182DA8
    ctx->pc = 0x1979DCu;
    SET_GPR_U32(ctx, 31, 0x1979E4u);
    ctx->pc = 0x1979E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979DCu;
    // 0x1979e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DA8u, 0x1979DCu, 0x1979E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979E4u;
label_1979e4:
    // 0x1979e4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1979e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1979e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1979e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979ec: 0xc060b6a  jal         func_182DA8
    ctx->pc = 0x1979ECu;
    SET_GPR_U32(ctx, 31, 0x1979F4u);
    ctx->pc = 0x1979F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979ECu;
    // 0x1979f0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DA8u, 0x1979ECu, 0x1979F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979F4u;
label_1979f4:
    // 0x1979f4: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x1979f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1979f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1979f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979fc: 0x3012  mflo        $a2
    ctx->pc = 0x1979fcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x197a00: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x197A00u;
    SET_GPR_U32(ctx, 31, 0x197A08u);
    ctx->pc = 0x197A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A00u;
    // 0x197a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x197A00u, 0x197A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A08u;
label_197a08:
    // 0x197a08: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x197a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x197a0c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x197a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x197a10: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x197A10u;
    {
        const bool branch_taken_0x197a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a10) {
            ctx->pc = 0x197A58u;
            goto label_197a58;
        }
    }
    ctx->pc = 0x197A18u;
    // 0x197a18: 0xc060b74  jal         func_182DD0
    ctx->pc = 0x197A18u;
    SET_GPR_U32(ctx, 31, 0x197A20u);
    ctx->pc = 0x197A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A18u;
    // 0x197a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD0u, 0x197A18u, 0x197A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A20u;
label_197a20:
    // 0x197a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a24: 0xc060b76  jal         func_182DD8
    ctx->pc = 0x197A24u;
    SET_GPR_U32(ctx, 31, 0x197A2Cu);
    ctx->pc = 0x197A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A24u;
    // 0x197a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD8u, 0x197A24u, 0x197A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A2Cu;
label_197a2c:
    // 0x197a2c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x197a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a34: 0xc060b76  jal         func_182DD8
    ctx->pc = 0x197A34u;
    SET_GPR_U32(ctx, 31, 0x197A3Cu);
    ctx->pc = 0x197A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A34u;
    // 0x197a38: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD8u, 0x197A34u, 0x197A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A3Cu;
label_197a3c:
    // 0x197a3c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x197a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a44: 0x3012  mflo        $a2
    ctx->pc = 0x197a44u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x197a48: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x197A48u;
    SET_GPR_U32(ctx, 31, 0x197A50u);
    ctx->pc = 0x197A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A48u;
    // 0x197a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x197A48u, 0x197A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A50u;
label_197a50:
    // 0x197a50: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x197A50u;
    {
        const bool branch_taken_0x197a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A50u;
        // 0x197a54: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a50) {
            ctx->pc = 0x197B14u;
            goto label_197b14;
        }
    }
    ctx->pc = 0x197A58u;
label_197a58:
    // 0x197a58: 0xc060b60  jal         func_182D80
    ctx->pc = 0x197A58u;
    SET_GPR_U32(ctx, 31, 0x197A60u);
    ctx->pc = 0x197A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A58u;
    // 0x197a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D80u, 0x197A58u, 0x197A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A60u;
label_197a60:
    // 0x197a60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a64: 0xc060b62  jal         func_182D88
    ctx->pc = 0x197A64u;
    SET_GPR_U32(ctx, 31, 0x197A6Cu);
    ctx->pc = 0x197A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A64u;
    // 0x197a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D88u, 0x197A64u, 0x197A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A6Cu;
label_197a6c:
    // 0x197a6c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x197a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a74: 0xc060b62  jal         func_182D88
    ctx->pc = 0x197A74u;
    SET_GPR_U32(ctx, 31, 0x197A7Cu);
    ctx->pc = 0x197A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A74u;
    // 0x197a78: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D88u, 0x197A74u, 0x197A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A7Cu;
label_197a7c:
    // 0x197a7c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x197a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a84: 0x3012  mflo        $a2
    ctx->pc = 0x197a84u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x197a88: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x197A88u;
    SET_GPR_U32(ctx, 31, 0x197A90u);
    ctx->pc = 0x197A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A88u;
    // 0x197a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x197A88u, 0x197A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A90u;
label_197a90:
    // 0x197a90: 0xc060b6c  jal         func_182DB0
    ctx->pc = 0x197A90u;
    SET_GPR_U32(ctx, 31, 0x197A98u);
    ctx->pc = 0x197A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A90u;
    // 0x197a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DB0u, 0x197A90u, 0x197A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A98u;
label_197a98:
    // 0x197a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a9c: 0xc060b6e  jal         func_182DB8
    ctx->pc = 0x197A9Cu;
    SET_GPR_U32(ctx, 31, 0x197AA4u);
    ctx->pc = 0x197AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A9Cu;
    // 0x197aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DB8u, 0x197A9Cu, 0x197AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AA4u;
label_197aa4:
    // 0x197aa4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x197aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197aac: 0xc060b6e  jal         func_182DB8
    ctx->pc = 0x197AACu;
    SET_GPR_U32(ctx, 31, 0x197AB4u);
    ctx->pc = 0x197AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AACu;
    // 0x197ab0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DB8u, 0x197AACu, 0x197AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AB4u;
label_197ab4:
    // 0x197ab4: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x197ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197abc: 0x3012  mflo        $a2
    ctx->pc = 0x197abcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x197ac0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x197AC0u;
    SET_GPR_U32(ctx, 31, 0x197AC8u);
    ctx->pc = 0x197AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AC0u;
    // 0x197ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x197AC0u, 0x197AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AC8u;
label_197ac8:
    // 0x197ac8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x197ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x197acc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x197accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x197ad0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x197AD0u;
    {
        const bool branch_taken_0x197ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ad0) {
            ctx->pc = 0x197AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197AD0u;
            // 0x197ad4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197B14u;
            goto label_197b14;
        }
    }
    ctx->pc = 0x197AD8u;
    // 0x197ad8: 0xc060b70  jal         func_182DC0
    ctx->pc = 0x197AD8u;
    SET_GPR_U32(ctx, 31, 0x197AE0u);
    ctx->pc = 0x197ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AD8u;
    // 0x197adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DC0u, 0x197AD8u, 0x197AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AE0u;
label_197ae0:
    // 0x197ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ae4: 0xc060b72  jal         func_182DC8
    ctx->pc = 0x197AE4u;
    SET_GPR_U32(ctx, 31, 0x197AECu);
    ctx->pc = 0x197AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AE4u;
    // 0x197ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DC8u, 0x197AE4u, 0x197AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AECu;
label_197aec:
    // 0x197aec: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x197aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197af4: 0xc060b72  jal         func_182DC8
    ctx->pc = 0x197AF4u;
    SET_GPR_U32(ctx, 31, 0x197AFCu);
    ctx->pc = 0x197AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AF4u;
    // 0x197af8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DC8u, 0x197AF4u, 0x197AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AFCu;
label_197afc:
    // 0x197afc: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x197afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b04: 0x3012  mflo        $a2
    ctx->pc = 0x197b04u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x197b08: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x197B08u;
    SET_GPR_U32(ctx, 31, 0x197B10u);
    ctx->pc = 0x197B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B08u;
    // 0x197b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x197B08u, 0x197B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B10u;
label_197b10:
    // 0x197b10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x197b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_197b14:
    // 0x197b14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x197b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197b18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197b1c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x197b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197b24: 0x3e00008  jr          $ra
    ctx->pc = 0x197B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B24u;
        // 0x197b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197B2Cu;
    // 0x197b2c: 0x0  nop
    ctx->pc = 0x197b2cu;
    // NOP
    ctx->pc = 0x197b30u;
}
