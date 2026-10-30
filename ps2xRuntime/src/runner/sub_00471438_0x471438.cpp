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

// Function: sub_00471438
// Address: 0x471438 - 0x471590
void sub_00471438_0x471438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471438_0x471438");
#endif

    switch (ctx->pc) {
        case 0x471460u: goto label_471460;
        case 0x471480u: goto label_471480;
        case 0x4714a0u: goto label_4714a0;
        case 0x4714c0u: goto label_4714c0;
        case 0x4714e0u: goto label_4714e0;
        case 0x471500u: goto label_471500;
        case 0x471520u: goto label_471520;
        case 0x471540u: goto label_471540;
        case 0x471554u: goto label_471554;
        case 0x471564u: goto label_471564;
        case 0x471574u: goto label_471574;
        default: break;
    }

    ctx->pc = 0x471438u;

    // 0x471438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x471438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47143c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x47143cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x471440: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x471440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x471444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x471444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x471448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47144c: 0x24c6cd48  addiu       $a2, $a2, -0x32B8
    ctx->pc = 0x47144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954312));
    // 0x471450: 0x24e7cce0  addiu       $a3, $a3, -0x3320
    ctx->pc = 0x471450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954208));
    // 0x471454: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x471454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x471458: 0xc120d9a  jal         func_483668
    ctx->pc = 0x471458u;
    SET_GPR_U32(ctx, 31, 0x471460u);
    ctx->pc = 0x47145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471458u;
    // 0x47145c: 0x24050501  addiu       $a1, $zero, 0x501 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x471458u, 0x471460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471460u;
label_471460:
    // 0x471460: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x471460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x471464: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x471464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x471468: 0x24c6d748  addiu       $a2, $a2, -0x28B8
    ctx->pc = 0x471468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956872));
    // 0x47146c: 0x24e7dc30  addiu       $a3, $a3, -0x23D0
    ctx->pc = 0x47146cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958128));
    // 0x471470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x471470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471474: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x471474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x471478: 0xc120d9a  jal         func_483668
    ctx->pc = 0x471478u;
    SET_GPR_U32(ctx, 31, 0x471480u);
    ctx->pc = 0x47147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471478u;
    // 0x47147c: 0x24050502  addiu       $a1, $zero, 0x502 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x471478u, 0x471480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471480u;
label_471480:
    // 0x471480: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x471480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x471484: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x471484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x471488: 0x24c6be90  addiu       $a2, $a2, -0x4170
    ctx->pc = 0x471488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950544));
    // 0x47148c: 0x24e7be78  addiu       $a3, $a3, -0x4188
    ctx->pc = 0x47148cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950520));
    // 0x471490: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x471490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x471494: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x471494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x471498: 0xc120d9a  jal         func_483668
    ctx->pc = 0x471498u;
    SET_GPR_U32(ctx, 31, 0x4714A0u);
    ctx->pc = 0x47149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471498u;
    // 0x47149c: 0x24050503  addiu       $a1, $zero, 0x503 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x471498u, 0x4714A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4714A0u;
label_4714a0:
    // 0x4714a0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x4714a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x4714a4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x4714a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x4714a8: 0x24c69bf0  addiu       $a2, $a2, -0x6410
    ctx->pc = 0x4714a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941680));
    // 0x4714ac: 0x24e79cc0  addiu       $a3, $a3, -0x6340
    ctx->pc = 0x4714acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941888));
    // 0x4714b0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4714b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4714b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4714b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4714b8: 0xc120d9a  jal         func_483668
    ctx->pc = 0x4714B8u;
    SET_GPR_U32(ctx, 31, 0x4714C0u);
    ctx->pc = 0x4714BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4714B8u;
    // 0x4714bc: 0x24050504  addiu       $a1, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x4714B8u, 0x4714C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4714C0u;
label_4714c0:
    // 0x4714c0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x4714c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x4714c4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x4714c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x4714c8: 0x24c6c5b8  addiu       $a2, $a2, -0x3A48
    ctx->pc = 0x4714c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952376));
    // 0x4714cc: 0x24e7c638  addiu       $a3, $a3, -0x39C8
    ctx->pc = 0x4714ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952504));
    // 0x4714d0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4714d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4714d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4714d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4714d8: 0xc120d9a  jal         func_483668
    ctx->pc = 0x4714D8u;
    SET_GPR_U32(ctx, 31, 0x4714E0u);
    ctx->pc = 0x4714DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4714D8u;
    // 0x4714dc: 0x24050505  addiu       $a1, $zero, 0x505 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x4714D8u, 0x4714E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4714E0u;
label_4714e0:
    // 0x4714e0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x4714e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x4714e4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x4714e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x4714e8: 0x24c60828  addiu       $a2, $a2, 0x828
    ctx->pc = 0x4714e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2088));
    // 0x4714ec: 0x24e70840  addiu       $a3, $a3, 0x840
    ctx->pc = 0x4714ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2112));
    // 0x4714f0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4714f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4714f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4714f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4714f8: 0xc120d9a  jal         func_483668
    ctx->pc = 0x4714F8u;
    SET_GPR_U32(ctx, 31, 0x471500u);
    ctx->pc = 0x4714FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4714F8u;
    // 0x4714fc: 0x2405050a  addiu       $a1, $zero, 0x50A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x4714F8u, 0x471500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471500u;
label_471500:
    // 0x471500: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x471500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x471504: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x471504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x471508: 0x24c62070  addiu       $a2, $a2, 0x2070
    ctx->pc = 0x471508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8304));
    // 0x47150c: 0x24e72000  addiu       $a3, $a3, 0x2000
    ctx->pc = 0x47150cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8192));
    // 0x471510: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x471510u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x471514: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x471514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x471518: 0xc120d9a  jal         func_483668
    ctx->pc = 0x471518u;
    SET_GPR_U32(ctx, 31, 0x471520u);
    ctx->pc = 0x47151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471518u;
    // 0x47151c: 0x24050507  addiu       $a1, $zero, 0x507 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x471518u, 0x471520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471520u;
label_471520:
    // 0x471520: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x471520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x471524: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x471524u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x471528: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x471528u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x47152c: 0x24c688c0  addiu       $a2, $a2, -0x7740
    ctx->pc = 0x47152cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936768));
    // 0x471530: 0x24e788d8  addiu       $a3, $a3, -0x7728
    ctx->pc = 0x471530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936792));
    // 0x471534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x471534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471538: 0xc120d9a  jal         func_483668
    ctx->pc = 0x471538u;
    SET_GPR_U32(ctx, 31, 0x471540u);
    ctx->pc = 0x47153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471538u;
    // 0x47153c: 0x2405050b  addiu       $a1, $zero, 0x50B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x471538u, 0x471540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471540u;
label_471540:
    // 0x471540: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x471540u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x471544: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x471544u;
    {
        const bool branch_taken_0x471544 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x471548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471544u;
        // 0x471548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471544) {
            ctx->pc = 0x471578u;
            goto label_471578;
        }
    }
    ctx->pc = 0x47154Cu;
    // 0x47154c: 0xc11ca40  jal         func_472900
    ctx->pc = 0x47154Cu;
    SET_GPR_U32(ctx, 31, 0x471554u);
    ctx->pc = 0x472900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472900u, 0x47154Cu, 0x471554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471554u;
label_471554:
    // 0x471554: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x471554u;
    {
        const bool branch_taken_0x471554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471554u;
        // 0x471558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471554) {
            ctx->pc = 0x471578u;
            goto label_471578;
        }
    }
    ctx->pc = 0x47155Cu;
    // 0x47155c: 0xc11a79a  jal         func_469E68
    ctx->pc = 0x47155Cu;
    SET_GPR_U32(ctx, 31, 0x471564u);
    ctx->pc = 0x469E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469E68u, 0x47155Cu, 0x471564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471564u;
label_471564:
    // 0x471564: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x471564u;
    {
        const bool branch_taken_0x471564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471564) {
            ctx->pc = 0x471568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471564u;
            // 0x471568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471578u;
            goto label_471578;
        }
    }
    ctx->pc = 0x47156Cu;
    // 0x47156c: 0xc11ed20  jal         func_47B480
    ctx->pc = 0x47156Cu;
    SET_GPR_U32(ctx, 31, 0x471574u);
    ctx->pc = 0x47B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B480u, 0x47156Cu, 0x471574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471574u;
label_471574:
    // 0x471574: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x471574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_471578:
    // 0x471578: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x471578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47157c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x471580: 0x3e00008  jr          $ra
    ctx->pc = 0x471580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471580u;
        // 0x471584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471588u;
    // 0x471588: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x471588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x47158c: 0x0  nop
    ctx->pc = 0x47158cu;
    // NOP
    ctx->pc = 0x471590u;
}
