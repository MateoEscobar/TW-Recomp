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

// Function: sub_0014E148
// Address: 0x14e148 - 0x14e260
void sub_0014E148_0x14e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E148_0x14e148");
#endif

    switch (ctx->pc) {
        case 0x14e174u: goto label_14e174;
        case 0x14e1a0u: goto label_14e1a0;
        case 0x14e1acu: goto label_14e1ac;
        case 0x14e1b4u: goto label_14e1b4;
        case 0x14e1d4u: goto label_14e1d4;
        case 0x14e1ecu: goto label_14e1ec;
        case 0x14e204u: goto label_14e204;
        case 0x14e22cu: goto label_14e22c;
        case 0x14e234u: goto label_14e234;
        default: break;
    }

    ctx->pc = 0x14e148u;

    // 0x14e148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14e14c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14e150: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14e154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e158: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e15c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14e15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e160: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14e160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14e164: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14e164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e16c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E16Cu;
    SET_GPR_U32(ctx, 31, 0x14E174u);
    ctx->pc = 0x14E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E16Cu;
    // 0x14e170: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E16Cu, 0x14E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E174u;
label_14e174:
    // 0x14e174: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x14e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x14e178: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14E178u;
    {
        const bool branch_taken_0x14e178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E178u;
        // 0x14e17c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e178) {
            ctx->pc = 0x14E1BCu;
            goto label_14e1bc;
        }
    }
    ctx->pc = 0x14E180u;
    // 0x14e180: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14E180u;
    {
        const bool branch_taken_0x14e180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E180u;
        // 0x14e184: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e180) {
            ctx->pc = 0x14E1BCu;
            goto label_14e1bc;
        }
    }
    ctx->pc = 0x14E188u;
    // 0x14e188: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14E188u;
    {
        const bool branch_taken_0x14e188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E188u;
        // 0x14e18c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e188) {
            ctx->pc = 0x14E1BCu;
            goto label_14e1bc;
        }
    }
    ctx->pc = 0x14E190u;
    // 0x14e190: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14E190u;
    {
        const bool branch_taken_0x14e190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E190u;
        // 0x14e194: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e190) {
            ctx->pc = 0x14E1BCu;
            goto label_14e1bc;
        }
    }
    ctx->pc = 0x14E198u;
    // 0x14e198: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14E198u;
    SET_GPR_U32(ctx, 31, 0x14E1A0u);
    ctx->pc = 0x14E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E198u;
    // 0x14e19c: 0x2484ba88  addiu       $a0, $a0, -0x4578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14E198u, 0x14E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1A0u;
label_14e1a0:
    // 0x14e1a0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14e1a4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14E1A4u;
    SET_GPR_U32(ctx, 31, 0x14E1ACu);
    ctx->pc = 0x14E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1A4u;
    // 0x14e1a8: 0x2484baa0  addiu       $a0, $a0, -0x4560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14E1A4u, 0x14E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1ACu;
label_14e1ac:
    // 0x14e1ac: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E1ACu;
    SET_GPR_U32(ctx, 31, 0x14E1B4u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E1ACu, 0x14E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1B4u;
label_14e1b4:
    // 0x14e1b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14E1B4u;
    {
        const bool branch_taken_0x14e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1B4u;
        // 0x14e1b8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1b4) {
            ctx->pc = 0x14E238u;
            goto label_14e238;
        }
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14E1BCu;
    {
        const bool branch_taken_0x14e1bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1BCu;
        // 0x14e1c0: 0x2402007e  addiu       $v0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1bc) {
            ctx->pc = 0x14E204u;
            goto label_14e204;
        }
    }
    ctx->pc = 0x14E1C4u;
    // 0x14e1c4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E1C4u;
    {
        const bool branch_taken_0x14e1c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1C4u;
        // 0x14e1c8: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1c4) {
            ctx->pc = 0x14E1DCu;
            goto label_14e1dc;
        }
    }
    ctx->pc = 0x14E1CCu;
    // 0x14e1cc: 0xc0542dc  jal         func_150B70
    ctx->pc = 0x14E1CCu;
    SET_GPR_U32(ctx, 31, 0x14E1D4u);
    ctx->pc = 0x14E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1CCu;
    // 0x14e1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B70u, 0x14E1CCu, 0x14E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1D4u;
label_14e1d4:
    // 0x14e1d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14E1D4u;
    {
        const bool branch_taken_0x14e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1D4u;
        // 0x14e1d8: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1d4) {
            ctx->pc = 0x14E208u;
            goto label_14e208;
        }
    }
    ctx->pc = 0x14E1DCu;
label_14e1dc:
    // 0x14e1dc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E1DCu;
    {
        const bool branch_taken_0x14e1dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1DCu;
        // 0x14e1e0: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1dc) {
            ctx->pc = 0x14E1F4u;
            goto label_14e1f4;
        }
    }
    ctx->pc = 0x14E1E4u;
    // 0x14e1e4: 0xc053b8c  jal         func_14EE30
    ctx->pc = 0x14E1E4u;
    SET_GPR_U32(ctx, 31, 0x14E1ECu);
    ctx->pc = 0x14E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1E4u;
    // 0x14e1e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE30u, 0x14E1E4u, 0x14E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1ECu;
label_14e1ec:
    // 0x14e1ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E1ECu;
    {
        const bool branch_taken_0x14e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1ECu;
        // 0x14e1f0: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1ec) {
            ctx->pc = 0x14E208u;
            goto label_14e208;
        }
    }
    ctx->pc = 0x14E1F4u;
label_14e1f4:
    // 0x14e1f4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E1F4u;
    {
        const bool branch_taken_0x14e1f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1F4u;
        // 0x14e1f8: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1f4) {
            ctx->pc = 0x14E208u;
            goto label_14e208;
        }
    }
    ctx->pc = 0x14E1FCu;
    // 0x14e1fc: 0xc0542f2  jal         func_150BC8
    ctx->pc = 0x14E1FCu;
    SET_GPR_U32(ctx, 31, 0x14E204u);
    ctx->pc = 0x14E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1FCu;
    // 0x14e200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BC8u, 0x14E1FCu, 0x14E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E204u;
label_14e204:
    // 0x14e204: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x14e204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e208:
    // 0x14e208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e20c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e210: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14e210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14e214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14e218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e21c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14e21cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14e220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e224: 0xc05378a  jal         func_14DE28
    ctx->pc = 0x14E224u;
    SET_GPR_U32(ctx, 31, 0x14E22Cu);
    ctx->pc = 0x14E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E224u;
    // 0x14e228: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE28u, 0x14E224u, 0x14E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E22Cu;
label_14e22c:
    // 0x14e22c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E22Cu;
    SET_GPR_U32(ctx, 31, 0x14E234u);
    ctx->pc = 0x14E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E22Cu;
    // 0x14e230: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E22Cu, 0x14E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E234u;
label_14e234:
    // 0x14e234: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14e234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e238:
    // 0x14e238: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14e238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e23c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14e23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e240: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e244: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14e244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e24c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E24Cu;
        // 0x14e250: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E254u;
    // 0x14e254: 0x0  nop
    ctx->pc = 0x14e254u;
    // NOP
    // 0x14e258: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14e25c: 0x0  nop
    ctx->pc = 0x14e25cu;
    // NOP
    ctx->pc = 0x14e260u;
}
