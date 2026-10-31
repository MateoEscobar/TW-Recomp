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

// Function: sub_0021F410
// Address: 0x21f410 - 0x21f548
void sub_0021F410_0x21f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F410_0x21f410");
#endif

    switch (ctx->pc) {
        case 0x21f448u: goto label_21f448;
        case 0x21f47cu: goto label_21f47c;
        case 0x21f4a0u: goto label_21f4a0;
        case 0x21f4d8u: goto label_21f4d8;
        case 0x21f4e8u: goto label_21f4e8;
        case 0x21f508u: goto label_21f508;
        case 0x21f528u: goto label_21f528;
        default: break;
    }

    ctx->pc = 0x21f410u;

    // 0x21f410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21f414: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21f414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x21f418: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21f418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x21f41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f420: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21f420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x21f424: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21f424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f428: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21f42c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21f42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f430: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21f434: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21f434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f438: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21f438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21f43c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x21f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x21f440: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21F440u;
    SET_GPR_U32(ctx, 31, 0x21F448u);
    ctx->pc = 0x21F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F440u;
    // 0x21f444: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21F440u, 0x21F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F448u;
label_21f448:
    // 0x21f448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F448u;
    {
        const bool branch_taken_0x21f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f448) {
            ctx->pc = 0x21F44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F448u;
            // 0x21f44c: 0x92020199  lbu         $v0, 0x199($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F45Cu;
            goto label_21f45c;
        }
    }
    ctx->pc = 0x21F450u;
    // 0x21f450: 0x52200036  beql        $s1, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x21F450u;
    {
        const bool branch_taken_0x21f450 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f450) {
            ctx->pc = 0x21F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F450u;
            // 0x21f454: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F52Cu;
            goto label_21f52c;
        }
    }
    ctx->pc = 0x21F458u;
    // 0x21f458: 0x92020199  lbu         $v0, 0x199($s0)
    ctx->pc = 0x21f458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_21f45c:
    // 0x21f45c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x21F45Cu;
    {
        const bool branch_taken_0x21f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F45Cu;
        // 0x21f460: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f45c) {
            ctx->pc = 0x21F528u;
            goto label_21f528;
        }
    }
    ctx->pc = 0x21F464u;
    // 0x21f464: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f468: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x21f46c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x21f46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f470: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21f470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f474: 0xc045200  jal         func_114800
    ctx->pc = 0x21F474u;
    SET_GPR_U32(ctx, 31, 0x21F47Cu);
    ctx->pc = 0x21F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F474u;
    // 0x21f478: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x21F474u, 0x21F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F47Cu;
label_21f47c:
    // 0x21f47c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f480: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x21F480u;
    {
        const bool branch_taken_0x21f480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f480) {
            ctx->pc = 0x21F484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F480u;
            // 0x21f484: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F52Cu;
            goto label_21f52c;
        }
    }
    ctx->pc = 0x21F488u;
    // 0x21f488: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x21f488u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x21f48c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f48cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21f490: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21F490u;
    {
        const bool branch_taken_0x21f490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F490u;
        // 0x21f494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f490) {
            ctx->pc = 0x21F4E0u;
            goto label_21f4e0;
        }
    }
    ctx->pc = 0x21F498u;
    // 0x21f498: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x21F498u;
    SET_GPR_U32(ctx, 31, 0x21F4A0u);
    ctx->pc = 0x21F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F498u;
    // 0x21f49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x21F498u, 0x21F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4A0u;
label_21f4a0:
    // 0x21f4a0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F4A0u;
    {
        const bool branch_taken_0x21f4a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4A0u;
        // 0x21f4a4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4a0) {
            ctx->pc = 0x21F4BCu;
            goto label_21f4bc;
        }
    }
    ctx->pc = 0x21F4A8u;
    // 0x21f4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4ac: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x21f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f4b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21F4B4u;
    {
        const bool branch_taken_0x21f4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4B4u;
        // 0x21f4b8: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4b4) {
            ctx->pc = 0x21F4FCu;
            goto label_21f4fc;
        }
    }
    ctx->pc = 0x21F4BCu;
label_21f4bc:
    // 0x21f4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x21f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f4c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4c8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x21f4c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x21f4cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21f4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4d0: 0xc087900  jal         func_21E400
    ctx->pc = 0x21F4D0u;
    SET_GPR_U32(ctx, 31, 0x21F4D8u);
    ctx->pc = 0x21F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4D0u;
    // 0x21f4d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x21F4D0u, 0x21F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4D8u;
label_21f4d8:
    // 0x21f4d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21F4D8u;
    {
        const bool branch_taken_0x21f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4D8u;
        // 0x21f4dc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4d8) {
            ctx->pc = 0x21F52Cu;
            goto label_21f52c;
        }
    }
    ctx->pc = 0x21F4E0u;
label_21f4e0:
    // 0x21f4e0: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x21F4E0u;
    SET_GPR_U32(ctx, 31, 0x21F4E8u);
    ctx->pc = 0x21F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4E0u;
    // 0x21f4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x21F4E0u, 0x21F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4E8u;
label_21f4e8:
    // 0x21f4e8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F4E8u;
    {
        const bool branch_taken_0x21f4e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4E8u;
        // 0x21f4ec: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4e8) {
            ctx->pc = 0x21F510u;
            goto label_21f510;
        }
    }
    ctx->pc = 0x21F4F0u;
    // 0x21f4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4f4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x21f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f4f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f4fc:
    // 0x21f4fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21f4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f500: 0xc0879a6  jal         func_21E698
    ctx->pc = 0x21F500u;
    SET_GPR_U32(ctx, 31, 0x21F508u);
    ctx->pc = 0x21F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F500u;
    // 0x21f504: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x21F500u, 0x21F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F508u;
label_21f508:
    // 0x21f508: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21F508u;
    {
        const bool branch_taken_0x21f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F508u;
        // 0x21f50c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f508) {
            ctx->pc = 0x21F52Cu;
            goto label_21f52c;
        }
    }
    ctx->pc = 0x21F510u;
label_21f510:
    // 0x21f510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f514: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x21f514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f51c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21f51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f520: 0xc087900  jal         func_21E400
    ctx->pc = 0x21F520u;
    SET_GPR_U32(ctx, 31, 0x21F528u);
    ctx->pc = 0x21F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F520u;
    // 0x21f524: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x21F520u, 0x21F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F528u;
label_21f528:
    // 0x21f528: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21f528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21f52c:
    // 0x21f52c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21f52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f530: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x21f530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f534: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21f534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f538: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f53c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F53Cu;
        // 0x21f540: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F544u;
    // 0x21f544: 0x0  nop
    ctx->pc = 0x21f544u;
    // NOP
    ctx->pc = 0x21f548u;
}
