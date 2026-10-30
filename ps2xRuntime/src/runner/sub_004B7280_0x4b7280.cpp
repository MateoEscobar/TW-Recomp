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

// Function: sub_004B7280
// Address: 0x4b7280 - 0x4b73b0
void sub_004B7280_0x4b7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7280_0x4b7280");
#endif

    switch (ctx->pc) {
        case 0x4b7280u: goto label_4b7280;
        case 0x4b7284u: goto label_4b7284;
        case 0x4b7288u: goto label_4b7288;
        case 0x4b728cu: goto label_4b728c;
        case 0x4b7290u: goto label_4b7290;
        case 0x4b7294u: goto label_4b7294;
        case 0x4b7298u: goto label_4b7298;
        case 0x4b729cu: goto label_4b729c;
        case 0x4b72a0u: goto label_4b72a0;
        case 0x4b72a4u: goto label_4b72a4;
        case 0x4b72a8u: goto label_4b72a8;
        case 0x4b72acu: goto label_4b72ac;
        case 0x4b72b0u: goto label_4b72b0;
        case 0x4b72b4u: goto label_4b72b4;
        case 0x4b72b8u: goto label_4b72b8;
        case 0x4b72bcu: goto label_4b72bc;
        case 0x4b72c0u: goto label_4b72c0;
        case 0x4b72c4u: goto label_4b72c4;
        case 0x4b72c8u: goto label_4b72c8;
        case 0x4b72ccu: goto label_4b72cc;
        case 0x4b72d0u: goto label_4b72d0;
        case 0x4b72d4u: goto label_4b72d4;
        case 0x4b72d8u: goto label_4b72d8;
        case 0x4b72dcu: goto label_4b72dc;
        case 0x4b72e0u: goto label_4b72e0;
        case 0x4b72e4u: goto label_4b72e4;
        case 0x4b72e8u: goto label_4b72e8;
        case 0x4b72ecu: goto label_4b72ec;
        case 0x4b72f0u: goto label_4b72f0;
        case 0x4b72f4u: goto label_4b72f4;
        case 0x4b72f8u: goto label_4b72f8;
        case 0x4b72fcu: goto label_4b72fc;
        case 0x4b7300u: goto label_4b7300;
        case 0x4b7304u: goto label_4b7304;
        case 0x4b7308u: goto label_4b7308;
        case 0x4b730cu: goto label_4b730c;
        case 0x4b7310u: goto label_4b7310;
        case 0x4b7314u: goto label_4b7314;
        case 0x4b7318u: goto label_4b7318;
        case 0x4b731cu: goto label_4b731c;
        case 0x4b7320u: goto label_4b7320;
        case 0x4b7324u: goto label_4b7324;
        case 0x4b7328u: goto label_4b7328;
        case 0x4b732cu: goto label_4b732c;
        case 0x4b7330u: goto label_4b7330;
        case 0x4b7334u: goto label_4b7334;
        case 0x4b7338u: goto label_4b7338;
        case 0x4b733cu: goto label_4b733c;
        case 0x4b7340u: goto label_4b7340;
        case 0x4b7344u: goto label_4b7344;
        case 0x4b7348u: goto label_4b7348;
        case 0x4b734cu: goto label_4b734c;
        case 0x4b7350u: goto label_4b7350;
        case 0x4b7354u: goto label_4b7354;
        case 0x4b7358u: goto label_4b7358;
        case 0x4b735cu: goto label_4b735c;
        case 0x4b7360u: goto label_4b7360;
        case 0x4b7364u: goto label_4b7364;
        case 0x4b7368u: goto label_4b7368;
        case 0x4b736cu: goto label_4b736c;
        case 0x4b7370u: goto label_4b7370;
        case 0x4b7374u: goto label_4b7374;
        case 0x4b7378u: goto label_4b7378;
        case 0x4b737cu: goto label_4b737c;
        case 0x4b7380u: goto label_4b7380;
        case 0x4b7384u: goto label_4b7384;
        case 0x4b7388u: goto label_4b7388;
        case 0x4b738cu: goto label_4b738c;
        case 0x4b7390u: goto label_4b7390;
        case 0x4b7394u: goto label_4b7394;
        case 0x4b7398u: goto label_4b7398;
        case 0x4b739cu: goto label_4b739c;
        case 0x4b73a0u: goto label_4b73a0;
        case 0x4b73a4u: goto label_4b73a4;
        case 0x4b73a8u: goto label_4b73a8;
        case 0x4b73acu: goto label_4b73ac;
        default: break;
    }

    ctx->pc = 0x4b7280u;

label_4b7280:
    // 0x4b7280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b7284:
    // 0x4b7284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b7288:
    // 0x4b7288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b728c:
    // 0x4b728c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b728cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b7290:
    // 0x4b7290: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b7290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b7294:
    // 0x4b7294: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4b7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4b7298:
    // 0x4b7298: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4b729c:
    if (ctx->pc == 0x4B729Cu) {
        ctx->pc = 0x4B729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7298u;
        // 0x4b729c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B72A0u;
        goto label_4b72a0;
    }
    ctx->pc = 0x4B7298u;
    {
        const bool branch_taken_0x4b7298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7298) {
            ctx->pc = 0x4B729Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7298u;
            // 0x4b729c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B72B8u;
            goto label_4b72b8;
        }
    }
    ctx->pc = 0x4B72A0u;
label_4b72a0:
    // 0x4b72a0: 0xc136270  jal         func_4D89C0
label_4b72a4:
    if (ctx->pc == 0x4B72A4u) {
        ctx->pc = 0x4B72A8u;
        goto label_4b72a8;
    }
    ctx->pc = 0x4B72A0u;
    SET_GPR_U32(ctx, 31, 0x4B72A8u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B72A0u, 0x4B72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B72A8u;
label_4b72a8:
    // 0x4b72a8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4b72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4b72ac:
    // 0x4b72ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b72acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b72b0:
    // 0x4b72b0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4b72b4:
    if (ctx->pc == 0x4B72B4u) {
        ctx->pc = 0x4B72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72B0u;
        // 0x4b72b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B72B8u;
        goto label_4b72b8;
    }
    ctx->pc = 0x4B72B0u;
    {
        const bool branch_taken_0x4b72b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72B0u;
        // 0x4b72b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b72b0) {
            ctx->pc = 0x4B739Cu;
            goto label_4b739c;
        }
    }
    ctx->pc = 0x4B72B8u;
label_4b72b8:
    // 0x4b72b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b72bc:
    // 0x4b72bc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4b72bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b72c0:
    // 0x4b72c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4b72c4:
    if (ctx->pc == 0x4B72C4u) {
        ctx->pc = 0x4B72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72C0u;
        // 0x4b72c4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B72C8u;
        goto label_4b72c8;
    }
    ctx->pc = 0x4B72C0u;
    {
        const bool branch_taken_0x4b72c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b72c0) {
            ctx->pc = 0x4B72C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B72C0u;
            // 0x4b72c4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B72D0u;
            goto label_4b72d0;
        }
    }
    ctx->pc = 0x4B72C8u;
label_4b72c8:
    // 0x4b72c8: 0x10000034  b           . + 4 + (0x34 << 2)
label_4b72cc:
    if (ctx->pc == 0x4B72CCu) {
        ctx->pc = 0x4B72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72C8u;
        // 0x4b72cc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B72D0u;
        goto label_4b72d0;
    }
    ctx->pc = 0x4B72C8u;
    {
        const bool branch_taken_0x4b72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72C8u;
        // 0x4b72cc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b72c8) {
            ctx->pc = 0x4B739Cu;
            goto label_4b739c;
        }
    }
    ctx->pc = 0x4B72D0u;
label_4b72d0:
    // 0x4b72d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4b72d4:
    if (ctx->pc == 0x4B72D4u) {
        ctx->pc = 0x4B72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72D0u;
        // 0x4b72d4: 0x30620202  andi        $v0, $v1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B72D8u;
        goto label_4b72d8;
    }
    ctx->pc = 0x4B72D0u;
    {
        const bool branch_taken_0x4b72d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72D0u;
        // 0x4b72d4: 0x30620202  andi        $v0, $v1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b72d0) {
            ctx->pc = 0x4B72E8u;
            goto label_4b72e8;
        }
    }
    ctx->pc = 0x4B72D8u;
label_4b72d8:
    // 0x4b72d8: 0xc12c3b4  jal         func_4B0ED0
label_4b72dc:
    if (ctx->pc == 0x4B72DCu) {
        ctx->pc = 0x4B72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72D8u;
        // 0x4b72dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B72E0u;
        goto label_4b72e0;
    }
    ctx->pc = 0x4B72D8u;
    SET_GPR_U32(ctx, 31, 0x4B72E0u);
    ctx->pc = 0x4B72DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B72D8u;
    // 0x4b72dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0ED0u, 0x4B72D8u, 0x4B72E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B72E0u;
label_4b72e0:
    // 0x4b72e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b72e4:
    // 0x4b72e4: 0x30620202  andi        $v0, $v1, 0x202
    ctx->pc = 0x4b72e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
label_4b72e8:
    // 0x4b72e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b72ec:
    if (ctx->pc == 0x4B72ECu) {
        ctx->pc = 0x4B72F0u;
        goto label_4b72f0;
    }
    ctx->pc = 0x4B72E8u;
    {
        const bool branch_taken_0x4b72e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b72e8) {
            ctx->pc = 0x4B72F8u;
            goto label_4b72f8;
        }
    }
    ctx->pc = 0x4B72F0u;
label_4b72f0:
    // 0x4b72f0: 0xc12c56e  jal         func_4B15B8
label_4b72f4:
    if (ctx->pc == 0x4B72F4u) {
        ctx->pc = 0x4B72F8u;
        goto label_4b72f8;
    }
    ctx->pc = 0x4B72F0u;
    SET_GPR_U32(ctx, 31, 0x4B72F8u);
    ctx->pc = 0x4B15B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B15B8u, 0x4B72F0u, 0x4B72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B72F8u;
label_4b72f8:
    // 0x4b72f8: 0xc12c274  jal         func_4B09D0
label_4b72fc:
    if (ctx->pc == 0x4B72FCu) {
        ctx->pc = 0x4B72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B72F8u;
        // 0x4b72fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7300u;
        goto label_4b7300;
    }
    ctx->pc = 0x4B72F8u;
    SET_GPR_U32(ctx, 31, 0x4B7300u);
    ctx->pc = 0x4B72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B72F8u;
    // 0x4b72fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B09D0u, 0x4B72F8u, 0x4B7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7300u;
label_4b7300:
    // 0x4b7300: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4b7300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b7304:
    // 0x4b7304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b7304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7308:
    // 0x4b7308: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x4b7308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b730c:
    // 0x4b730c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x4b730cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4b7310:
    // 0x4b7310: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4b7310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4b7314:
    // 0x4b7314: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x4b7314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_4b7318:
    // 0x4b7318: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x4b7318u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4b731c:
    // 0x4b731c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4b731cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4b7320:
    // 0x4b7320: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4b7320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4b7324:
    // 0x4b7324: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4b7324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_4b7328:
    // 0x4b7328: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4b7328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_4b732c:
    // 0x4b732c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4b732cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_4b7330:
    // 0x4b7330: 0x40f809  jalr        $v0
label_4b7334:
    if (ctx->pc == 0x4B7334u) {
        ctx->pc = 0x4B7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7330u;
        // 0x4b7334: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7338u;
        goto label_4b7338;
    }
    ctx->pc = 0x4B7330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B7338u);
        ctx->pc = 0x4B7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7330u;
        // 0x4b7334: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7330u, 0x4B7338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B7338u;
label_4b7338:
    // 0x4b7338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b7338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b733c:
    // 0x4b733c: 0x5c800009  bgtzl       $a0, . + 4 + (0x9 << 2)
label_4b7340:
    if (ctx->pc == 0x4B7340u) {
        ctx->pc = 0x4B7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B733Cu;
        // 0x4b7340: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7344u;
        goto label_4b7344;
    }
    ctx->pc = 0x4B733Cu;
    {
        const bool branch_taken_0x4b733c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x4b733c) {
            ctx->pc = 0x4B7340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B733Cu;
            // 0x4b7340: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7364u;
            goto label_4b7364;
        }
    }
    ctx->pc = 0x4B7344u;
label_4b7344:
    // 0x4b7344: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_4b7348:
    if (ctx->pc == 0x4B7348u) {
        ctx->pc = 0x4B7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7344u;
        // 0x4b7348: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B734Cu;
        goto label_4b734c;
    }
    ctx->pc = 0x4B7344u;
    {
        const bool branch_taken_0x4b7344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7344u;
        // 0x4b7348: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7344) {
            ctx->pc = 0x4B7354u;
            goto label_4b7354;
        }
    }
    ctx->pc = 0x4B734Cu;
label_4b734c:
    // 0x4b734c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b7350:
    if (ctx->pc == 0x4B7350u) {
        ctx->pc = 0x4B7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B734Cu;
        // 0x4b7350: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7354u;
        goto label_4b7354;
    }
    ctx->pc = 0x4B734Cu;
    {
        const bool branch_taken_0x4b734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B734Cu;
        // 0x4b7350: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b734c) {
            ctx->pc = 0x4B735Cu;
            goto label_4b735c;
        }
    }
    ctx->pc = 0x4B7354u;
label_4b7354:
    // 0x4b7354: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7358:
    // 0x4b7358: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4b7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4b735c:
    // 0x4b735c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b735cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b7360:
    // 0x4b7360: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b7364:
    // 0x4b7364: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x4b7364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_4b7368:
    // 0x4b7368: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b7368u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4b736c:
    // 0x4b736c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b7370:
    // 0x4b7370: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_4b7374:
    if (ctx->pc == 0x4B7374u) {
        ctx->pc = 0x4B7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7370u;
        // 0x4b7374: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7378u;
        goto label_4b7378;
    }
    ctx->pc = 0x4B7370u;
    {
        const bool branch_taken_0x4b7370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7370u;
        // 0x4b7374: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7370) {
            ctx->pc = 0x4B7380u;
            goto label_4b7380;
        }
    }
    ctx->pc = 0x4B7378u;
label_4b7378:
    // 0x4b7378: 0x10000008  b           . + 4 + (0x8 << 2)
label_4b737c:
    if (ctx->pc == 0x4B737Cu) {
        ctx->pc = 0x4B737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7378u;
        // 0x4b737c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7380u;
        goto label_4b7380;
    }
    ctx->pc = 0x4B7378u;
    {
        const bool branch_taken_0x4b7378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7378u;
        // 0x4b737c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7378) {
            ctx->pc = 0x4B739Cu;
            goto label_4b739c;
        }
    }
    ctx->pc = 0x4B7380u;
label_4b7380:
    // 0x4b7380: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x4b7380u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_4b7384:
    // 0x4b7384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b7384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b7388:
    // 0x4b7388: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_4b738c:
    if (ctx->pc == 0x4B738Cu) {
        ctx->pc = 0x4B738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7388u;
        // 0x4b738c: 0x64102d  daddu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7390u;
        goto label_4b7390;
    }
    ctx->pc = 0x4B7388u;
    {
        const bool branch_taken_0x4b7388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7388u;
        // 0x4b738c: 0x64102d  daddu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7388) {
            ctx->pc = 0x4B7394u;
            goto label_4b7394;
        }
    }
    ctx->pc = 0x4B7390u;
label_4b7390:
    // 0x4b7390: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x4b7390u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_4b7394:
    // 0x4b7394: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b7394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b7398:
    // 0x4b7398: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b7398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b739c:
    // 0x4b739c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b739cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b73a0:
    // 0x4b73a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b73a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b73a4:
    // 0x4b73a4: 0x3e00008  jr          $ra
label_4b73a8:
    if (ctx->pc == 0x4B73A8u) {
        ctx->pc = 0x4B73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B73A4u;
        // 0x4b73a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B73ACu;
        goto label_4b73ac;
    }
    ctx->pc = 0x4B73A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B73A4u;
        // 0x4b73a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B73A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B73ACu;
label_4b73ac:
    // 0x4b73ac: 0x0  nop
    ctx->pc = 0x4b73acu;
    // NOP
    ctx->pc = 0x4b73b0u;
}
