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

// Function: sub_0032E150
// Address: 0x32e150 - 0x32e2f0
void sub_0032E150_0x32e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E150_0x32e150");
#endif

    switch (ctx->pc) {
        case 0x32e208u: goto label_32e208;
        case 0x32e214u: goto label_32e214;
        case 0x32e228u: goto label_32e228;
        case 0x32e23cu: goto label_32e23c;
        case 0x32e244u: goto label_32e244;
        case 0x32e254u: goto label_32e254;
        case 0x32e264u: goto label_32e264;
        case 0x32e274u: goto label_32e274;
        case 0x32e284u: goto label_32e284;
        case 0x32e290u: goto label_32e290;
        case 0x32e29cu: goto label_32e29c;
        case 0x32e2b0u: goto label_32e2b0;
        case 0x32e2c0u: goto label_32e2c0;
        default: break;
    }

    ctx->pc = 0x32e150u;

    // 0x32e150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32e154: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x32e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x32e158: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32e158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32e15c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32e15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32e160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e164: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32e164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32e168: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32e168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e16c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32e170: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32e174: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x32E174u;
    {
        const bool branch_taken_0x32e174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E174u;
        // 0x32e178: 0x8e120028  lw          $s2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e174) {
            ctx->pc = 0x32E25Cu;
            goto label_32e25c;
        }
    }
    ctx->pc = 0x32E17Cu;
    // 0x32e17c: 0x28620109  slti        $v0, $v1, 0x109
    ctx->pc = 0x32e17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)265) ? 1 : 0);
    // 0x32e180: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32E180u;
    {
        const bool branch_taken_0x32e180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E180u;
        // 0x32e184: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e180) {
            ctx->pc = 0x32E1BCu;
            goto label_32e1bc;
        }
    }
    ctx->pc = 0x32E188u;
    // 0x32e188: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x32E188u;
    {
        const bool branch_taken_0x32e188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E188u;
        // 0x32e18c: 0x28620029  slti        $v0, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e188) {
            ctx->pc = 0x32E27Cu;
            goto label_32e27c;
        }
    }
    ctx->pc = 0x32E190u;
    // 0x32e190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E190u;
    {
        const bool branch_taken_0x32e190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E190u;
        // 0x32e194: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e190) {
            ctx->pc = 0x32E1A8u;
            goto label_32e1a8;
        }
    }
    ctx->pc = 0x32E198u;
    // 0x32e198: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x32E198u;
    {
        const bool branch_taken_0x32e198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E198u;
        // 0x32e19c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e198) {
            ctx->pc = 0x32E2A4u;
            goto label_32e2a4;
        }
    }
    ctx->pc = 0x32E1A0u;
    // 0x32e1a0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x32E1A0u;
    {
        const bool branch_taken_0x32e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1A0u;
        // 0x32e1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1a0) {
            ctx->pc = 0x32E2B8u;
            goto label_32e2b8;
        }
    }
    ctx->pc = 0x32E1A8u;
label_32e1a8:
    // 0x32e1a8: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x32e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x32e1ac: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32E1ACu;
    {
        const bool branch_taken_0x32e1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1ACu;
        // 0x32e1b0: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1ac) {
            ctx->pc = 0x32E24Cu;
            goto label_32e24c;
        }
    }
    ctx->pc = 0x32E1B4u;
    // 0x32e1b4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x32E1B4u;
    {
        const bool branch_taken_0x32e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1B4u;
        // 0x32e1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1b4) {
            ctx->pc = 0x32E2B8u;
            goto label_32e2b8;
        }
    }
    ctx->pc = 0x32E1BCu;
label_32e1bc:
    // 0x32e1bc: 0x24020113  addiu       $v0, $zero, 0x113
    ctx->pc = 0x32e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x32e1c0: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x32E1C0u;
    {
        const bool branch_taken_0x32e1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1C0u;
        // 0x32e1c4: 0x28620114  slti        $v0, $v1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)276) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1c0) {
            ctx->pc = 0x32E2A4u;
            goto label_32e2a4;
        }
    }
    ctx->pc = 0x32E1C8u;
    // 0x32e1c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E1C8u;
    {
        const bool branch_taken_0x32e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1C8u;
        // 0x32e1cc: 0x2402010b  addiu       $v0, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1c8) {
            ctx->pc = 0x32E1E0u;
            goto label_32e1e0;
        }
    }
    ctx->pc = 0x32E1D0u;
    // 0x32e1d0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32E1D0u;
    {
        const bool branch_taken_0x32e1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1D0u;
        // 0x32e1d4: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1d0) {
            ctx->pc = 0x32E230u;
            goto label_32e230;
        }
    }
    ctx->pc = 0x32E1D8u;
    // 0x32e1d8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x32E1D8u;
    {
        const bool branch_taken_0x32e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1D8u;
        // 0x32e1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1d8) {
            ctx->pc = 0x32E2B8u;
            goto label_32e2b8;
        }
    }
    ctx->pc = 0x32E1E0u;
label_32e1e0:
    // 0x32e1e0: 0x2402011a  addiu       $v0, $zero, 0x11A
    ctx->pc = 0x32e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    // 0x32e1e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E1E4u;
    {
        const bool branch_taken_0x32e1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1E4u;
        // 0x32e1e8: 0x2402011b  addiu       $v0, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1e4) {
            ctx->pc = 0x32E1FCu;
            goto label_32e1fc;
        }
    }
    ctx->pc = 0x32E1ECu;
    // 0x32e1ec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32E1ECu;
    {
        const bool branch_taken_0x32e1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1ECu;
        // 0x32e1f0: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1ec) {
            ctx->pc = 0x32E21Cu;
            goto label_32e21c;
        }
    }
    ctx->pc = 0x32E1F4u;
    // 0x32e1f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x32E1F4u;
    {
        const bool branch_taken_0x32e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1F4u;
        // 0x32e1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1f4) {
            ctx->pc = 0x32E2B8u;
            goto label_32e2b8;
        }
    }
    ctx->pc = 0x32E1FCu;
label_32e1fc:
    // 0x32e1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e200: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E200u;
    SET_GPR_U32(ctx, 31, 0x32E208u);
    ctx->pc = 0x32E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E200u;
    // 0x32e204: 0xde100010  ld          $s0, 0x10($s0) (Delay Slot)
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E200u, 0x32E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E208u;
label_32e208:
    // 0x32e208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32e208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e20c: 0xc0c9a42  jal         func_326908
    ctx->pc = 0x32E20Cu;
    SET_GPR_U32(ctx, 31, 0x32E214u);
    ctx->pc = 0x32E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E20Cu;
    // 0x32e210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326908u, 0x32E20Cu, 0x32E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E214u;
label_32e214:
    // 0x32e214: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x32E214u;
    {
        const bool branch_taken_0x32e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E214u;
        // 0x32e218: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e214) {
            ctx->pc = 0x32E2C8u;
            goto label_32e2c8;
        }
    }
    ctx->pc = 0x32E21Cu;
label_32e21c:
    // 0x32e21c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x32e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32e220: 0xc0cb3ae  jal         func_32CEB8
    ctx->pc = 0x32E220u;
    SET_GPR_U32(ctx, 31, 0x32E228u);
    ctx->pc = 0x32E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E220u;
    // 0x32e224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEB8u, 0x32E220u, 0x32E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E228u;
label_32e228:
    // 0x32e228: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32E228u;
    {
        const bool branch_taken_0x32e228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e228) {
            ctx->pc = 0x32E23Cu;
            goto label_32e23c;
        }
    }
    ctx->pc = 0x32E230u;
label_32e230:
    // 0x32e230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32e230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e234: 0xc0c9a6e  jal         func_3269B8
    ctx->pc = 0x32E234u;
    SET_GPR_U32(ctx, 31, 0x32E23Cu);
    ctx->pc = 0x32E238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E234u;
    // 0x32e238: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269B8u, 0x32E234u, 0x32E23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E23Cu;
label_32e23c:
    // 0x32e23c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E23Cu;
    SET_GPR_U32(ctx, 31, 0x32E244u);
    ctx->pc = 0x32E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E23Cu;
    // 0x32e240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E23Cu, 0x32E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E244u;
label_32e244:
    // 0x32e244: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x32E244u;
    {
        const bool branch_taken_0x32e244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E244u;
        // 0x32e248: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e244) {
            ctx->pc = 0x32E2C8u;
            goto label_32e2c8;
        }
    }
    ctx->pc = 0x32E24Cu;
label_32e24c:
    // 0x32e24c: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x32E24Cu;
    SET_GPR_U32(ctx, 31, 0x32E254u);
    ctx->pc = 0x32E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E24Cu;
    // 0x32e250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x32E24Cu, 0x32E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E254u;
label_32e254:
    // 0x32e254: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x32E254u;
    {
        const bool branch_taken_0x32e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E254u;
        // 0x32e258: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e254) {
            ctx->pc = 0x32E2C8u;
            goto label_32e2c8;
        }
    }
    ctx->pc = 0x32E25Cu;
label_32e25c:
    // 0x32e25c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E25Cu;
    SET_GPR_U32(ctx, 31, 0x32E264u);
    ctx->pc = 0x32E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E25Cu;
    // 0x32e260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E25Cu, 0x32E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E264u;
label_32e264:
    // 0x32e264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32e268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e26c: 0xc0cbd1e  jal         func_32F478
    ctx->pc = 0x32E26Cu;
    SET_GPR_U32(ctx, 31, 0x32E274u);
    ctx->pc = 0x32E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E26Cu;
    // 0x32e270: 0x8c860034  lw          $a2, 0x34($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F478u, 0x32E26Cu, 0x32E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E274u;
label_32e274:
    // 0x32e274: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32E274u;
    {
        const bool branch_taken_0x32e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E274u;
        // 0x32e278: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e274) {
            ctx->pc = 0x32E2C8u;
            goto label_32e2c8;
        }
    }
    ctx->pc = 0x32E27Cu;
label_32e27c:
    // 0x32e27c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E27Cu;
    SET_GPR_U32(ctx, 31, 0x32E284u);
    ctx->pc = 0x32E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E27Cu;
    // 0x32e280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E27Cu, 0x32E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E284u;
label_32e284:
    // 0x32e284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32e284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e288: 0xc0cb980  jal         func_32E600
    ctx->pc = 0x32E288u;
    SET_GPR_U32(ctx, 31, 0x32E290u);
    ctx->pc = 0x32E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E288u;
    // 0x32e28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E600u, 0x32E288u, 0x32E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E290u;
label_32e290:
    // 0x32e290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e294: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32E294u;
    SET_GPR_U32(ctx, 31, 0x32E29Cu);
    ctx->pc = 0x32E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E294u;
    // 0x32e298: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32E294u, 0x32E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E29Cu;
label_32e29c:
    // 0x32e29c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32E29Cu;
    {
        const bool branch_taken_0x32e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E29Cu;
        // 0x32e2a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e29c) {
            ctx->pc = 0x32E2DCu;
            goto label_32e2dc;
        }
    }
    ctx->pc = 0x32E2A4u;
label_32e2a4:
    // 0x32e2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e2a8: 0xc0cb708  jal         func_32DC20
    ctx->pc = 0x32E2A8u;
    SET_GPR_U32(ctx, 31, 0x32E2B0u);
    ctx->pc = 0x32E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E2A8u;
    // 0x32e2ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC20u, 0x32E2A8u, 0x32E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2B0u;
label_32e2b0:
    // 0x32e2b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32E2B0u;
    {
        const bool branch_taken_0x32e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2B0u;
        // 0x32e2b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2b0) {
            ctx->pc = 0x32E2DCu;
            goto label_32e2dc;
        }
    }
    ctx->pc = 0x32E2B8u;
label_32e2b8:
    // 0x32e2b8: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32E2B8u;
    SET_GPR_U32(ctx, 31, 0x32E2C0u);
    ctx->pc = 0x32E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E2B8u;
    // 0x32e2bc: 0x24a55db8  addiu       $a1, $a1, 0x5DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32E2B8u, 0x32E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2C0u;
label_32e2c0:
    // 0x32e2c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32E2C0u;
    {
        const bool branch_taken_0x32e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2C0u;
        // 0x32e2c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2c0) {
            ctx->pc = 0x32E2DCu;
            goto label_32e2dc;
        }
    }
    ctx->pc = 0x32E2C8u;
label_32e2c8:
    // 0x32e2c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32e2cc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x32e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x32e2d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32e2d4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x32e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x32e2d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32e2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32e2dc:
    // 0x32e2dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32e2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e2e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32e2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2E8u;
        // 0x32e2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E2F0u;
}
