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

// Function: sub_0028E248
// Address: 0x28e248 - 0x28e708
void sub_0028E248_0x28e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E248_0x28e248");
#endif

    switch (ctx->pc) {
        case 0x28e2b4u: goto label_28e2b4;
        case 0x28e2d8u: goto label_28e2d8;
        case 0x28e2e0u: goto label_28e2e0;
        case 0x28e2f4u: goto label_28e2f4;
        case 0x28e314u: goto label_28e314;
        case 0x28e338u: goto label_28e338;
        case 0x28e340u: goto label_28e340;
        case 0x28e354u: goto label_28e354;
        case 0x28e374u: goto label_28e374;
        case 0x28e398u: goto label_28e398;
        case 0x28e3a0u: goto label_28e3a0;
        case 0x28e3b4u: goto label_28e3b4;
        case 0x28e3d4u: goto label_28e3d4;
        case 0x28e3dcu: goto label_28e3dc;
        case 0x28e3f0u: goto label_28e3f0;
        case 0x28e410u: goto label_28e410;
        case 0x28e434u: goto label_28e434;
        case 0x28e43cu: goto label_28e43c;
        case 0x28e450u: goto label_28e450;
        case 0x28e470u: goto label_28e470;
        case 0x28e494u: goto label_28e494;
        case 0x28e49cu: goto label_28e49c;
        case 0x28e4b0u: goto label_28e4b0;
        case 0x28e4d0u: goto label_28e4d0;
        case 0x28e4f4u: goto label_28e4f4;
        case 0x28e4fcu: goto label_28e4fc;
        case 0x28e510u: goto label_28e510;
        case 0x28e530u: goto label_28e530;
        case 0x28e538u: goto label_28e538;
        case 0x28e54cu: goto label_28e54c;
        case 0x28e56cu: goto label_28e56c;
        case 0x28e594u: goto label_28e594;
        case 0x28e5b8u: goto label_28e5b8;
        case 0x28e5c0u: goto label_28e5c0;
        case 0x28e5d4u: goto label_28e5d4;
        case 0x28e5f4u: goto label_28e5f4;
        case 0x28e61cu: goto label_28e61c;
        case 0x28e640u: goto label_28e640;
        case 0x28e648u: goto label_28e648;
        case 0x28e65cu: goto label_28e65c;
        case 0x28e67cu: goto label_28e67c;
        case 0x28e684u: goto label_28e684;
        case 0x28e6a8u: goto label_28e6a8;
        case 0x28e6b8u: goto label_28e6b8;
        case 0x28e6dcu: goto label_28e6dc;
        default: break;
    }

    ctx->pc = 0x28e248u;

    // 0x28e248: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28e24c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28e250: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28e250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x28e254: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28e254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e258: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28e25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e260: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x28e264: 0x2663fffe  addiu       $v1, $s3, -0x2
    ctx->pc = 0x28e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x28e268: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x28e268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x28e26c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28e26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e270: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x28e274: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28e274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e27c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x28e27cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x28e280: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x28e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x28e284: 0x2c620026  sltiu       $v0, $v1, 0x26
    ctx->pc = 0x28e284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x28e288: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x28E288u;
    {
        const bool branch_taken_0x28e288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E288u;
        // 0x28e28c: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e288) {
            ctx->pc = 0x28E6B0u;
            goto label_28e6b0;
        }
    }
    ctx->pc = 0x28E290u;
    // 0x28e290: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x28e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x28e294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28e294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28e298: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x28e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x28e29c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e2a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28e2a4: 0x800008  jr          $a0
    ctx->pc = 0x28E2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28E2ACu: goto label_28e2ac;
            case 0x28E30Cu: goto label_28e30c;
            case 0x28E36Cu: goto label_28e36c;
            case 0x28E408u: goto label_28e408;
            case 0x28E468u: goto label_28e468;
            case 0x28E4C8u: goto label_28e4c8;
            case 0x28E564u: goto label_28e564;
            case 0x28E58Cu: goto label_28e58c;
            case 0x28E5ECu: goto label_28e5ec;
            case 0x28E614u: goto label_28e614;
            case 0x28E6B0u: goto label_28e6b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E2A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28E2ACu;
label_28e2ac:
    // 0x28e2ac: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E2ACu;
    SET_GPR_U32(ctx, 31, 0x28E2B4u);
    ctx->pc = 0x28E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2ACu;
    // 0x28e2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E2ACu, 0x28E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2B4u;
label_28e2b4:
    // 0x28e2b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E2B4u;
    {
        const bool branch_taken_0x28e2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2B4u;
        // 0x28e2b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2b4) {
            ctx->pc = 0x28E2D8u;
            goto label_28e2d8;
        }
    }
    ctx->pc = 0x28E2BCu;
    // 0x28e2bc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e2bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e2d0: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E2D0u;
    SET_GPR_U32(ctx, 31, 0x28E2D8u);
    ctx->pc = 0x28E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2D0u;
    // 0x28e2d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E2D0u, 0x28E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2D8u;
label_28e2d8:
    // 0x28e2d8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E2D8u;
    SET_GPR_U32(ctx, 31, 0x28E2E0u);
    ctx->pc = 0x28E2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2D8u;
    // 0x28e2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E2D8u, 0x28E2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2E0u;
label_28e2e0:
    // 0x28e2e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2e4: 0x122000fd  beqz        $s1, . + 4 + (0xFD << 2)
    ctx->pc = 0x28E2E4u;
    {
        const bool branch_taken_0x28e2e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2E4u;
        // 0x28e2e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2e4) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E2ECu;
    // 0x28e2ec: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E2ECu;
    SET_GPR_U32(ctx, 31, 0x28E2F4u);
    ctx->pc = 0x28E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2ECu;
    // 0x28e2f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E2ECu, 0x28E2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2F4u;
label_28e2f4:
    // 0x28e2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e300: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e304: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x28E304u;
    {
        const bool branch_taken_0x28e304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E304u;
        // 0x28e308: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e304) {
            ctx->pc = 0x28E69Cu;
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E30Cu;
label_28e30c:
    // 0x28e30c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E30Cu;
    SET_GPR_U32(ctx, 31, 0x28E314u);
    ctx->pc = 0x28E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E30Cu;
    // 0x28e310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E30Cu, 0x28E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E314u;
label_28e314:
    // 0x28e314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E314u;
    {
        const bool branch_taken_0x28e314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E314u;
        // 0x28e318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e314) {
            ctx->pc = 0x28E338u;
            goto label_28e338;
        }
    }
    ctx->pc = 0x28E31Cu;
    // 0x28e31c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e31cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e324: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e328: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28e328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e32c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e330: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E330u;
    SET_GPR_U32(ctx, 31, 0x28E338u);
    ctx->pc = 0x28E334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E330u;
    // 0x28e334: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E330u, 0x28E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E338u;
label_28e338:
    // 0x28e338: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E338u;
    SET_GPR_U32(ctx, 31, 0x28E340u);
    ctx->pc = 0x28E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E338u;
    // 0x28e33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E338u, 0x28E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E340u;
label_28e340:
    // 0x28e340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e344: 0x122000e5  beqz        $s1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x28E344u;
    {
        const bool branch_taken_0x28e344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E344u;
        // 0x28e348: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e344) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E34Cu;
    // 0x28e34c: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E34Cu;
    SET_GPR_U32(ctx, 31, 0x28E354u);
    ctx->pc = 0x28E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E34Cu;
    // 0x28e350: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E34Cu, 0x28E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E354u;
label_28e354:
    // 0x28e354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e358: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e35c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e360: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e364: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x28E364u;
    {
        const bool branch_taken_0x28e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E364u;
        // 0x28e368: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e364) {
            ctx->pc = 0x28E69Cu;
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E36Cu;
label_28e36c:
    // 0x28e36c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E36Cu;
    SET_GPR_U32(ctx, 31, 0x28E374u);
    ctx->pc = 0x28E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E36Cu;
    // 0x28e370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E36Cu, 0x28E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E374u;
label_28e374:
    // 0x28e374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E374u;
    {
        const bool branch_taken_0x28e374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E374u;
        // 0x28e378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e374) {
            ctx->pc = 0x28E398u;
            goto label_28e398;
        }
    }
    ctx->pc = 0x28E37Cu;
    // 0x28e37c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e37cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e388: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28e388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e38c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e38cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e390: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E390u;
    SET_GPR_U32(ctx, 31, 0x28E398u);
    ctx->pc = 0x28E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E390u;
    // 0x28e394: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E390u, 0x28E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E398u;
label_28e398:
    // 0x28e398: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E398u;
    SET_GPR_U32(ctx, 31, 0x28E3A0u);
    ctx->pc = 0x28E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E398u;
    // 0x28e39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E398u, 0x28E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3A0u;
label_28e3a0:
    // 0x28e3a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3a4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x28E3A4u;
    {
        const bool branch_taken_0x28e3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3A4u;
        // 0x28e3a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3a4) {
            ctx->pc = 0x28E3D4u;
            goto label_28e3d4;
        }
    }
    ctx->pc = 0x28E3ACu;
    // 0x28e3ac: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E3ACu;
    SET_GPR_U32(ctx, 31, 0x28E3B4u);
    ctx->pc = 0x28E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3ACu;
    // 0x28e3b0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E3ACu, 0x28E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3B4u;
label_28e3b4:
    // 0x28e3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3b8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28e3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3c4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x28e3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28e3c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e3cc: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E3CCu;
    SET_GPR_U32(ctx, 31, 0x28E3D4u);
    ctx->pc = 0x28E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3CCu;
    // 0x28e3d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E3CCu, 0x28E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3D4u;
label_28e3d4:
    // 0x28e3d4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E3D4u;
    SET_GPR_U32(ctx, 31, 0x28E3DCu);
    ctx->pc = 0x28E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3D4u;
    // 0x28e3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E3D4u, 0x28E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3DCu;
label_28e3dc:
    // 0x28e3dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3e0: 0x122000be  beqz        $s1, . + 4 + (0xBE << 2)
    ctx->pc = 0x28E3E0u;
    {
        const bool branch_taken_0x28e3e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3E0u;
        // 0x28e3e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3e0) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E3E8u;
    // 0x28e3e8: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E3E8u;
    SET_GPR_U32(ctx, 31, 0x28E3F0u);
    ctx->pc = 0x28E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3E8u;
    // 0x28e3ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E3E8u, 0x28E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3F0u;
label_28e3f0:
    // 0x28e3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e400: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x28E400u;
    {
        const bool branch_taken_0x28e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E400u;
        // 0x28e404: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e400) {
            ctx->pc = 0x28E69Cu;
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E408u;
label_28e408:
    // 0x28e408: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E408u;
    SET_GPR_U32(ctx, 31, 0x28E410u);
    ctx->pc = 0x28E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E408u;
    // 0x28e40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E408u, 0x28E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E410u;
label_28e410:
    // 0x28e410: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E410u;
    {
        const bool branch_taken_0x28e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E410u;
        // 0x28e414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e410) {
            ctx->pc = 0x28E434u;
            goto label_28e434;
        }
    }
    ctx->pc = 0x28E418u;
    // 0x28e418: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e41c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e420: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e424: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28e424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e428: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e42c: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E42Cu;
    SET_GPR_U32(ctx, 31, 0x28E434u);
    ctx->pc = 0x28E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E42Cu;
    // 0x28e430: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E42Cu, 0x28E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E434u;
label_28e434:
    // 0x28e434: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E434u;
    SET_GPR_U32(ctx, 31, 0x28E43Cu);
    ctx->pc = 0x28E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E434u;
    // 0x28e438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E434u, 0x28E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E43Cu;
label_28e43c:
    // 0x28e43c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e440: 0x122000a6  beqz        $s1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x28E440u;
    {
        const bool branch_taken_0x28e440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E440u;
        // 0x28e444: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e440) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E448u;
    // 0x28e448: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E448u;
    SET_GPR_U32(ctx, 31, 0x28E450u);
    ctx->pc = 0x28E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E448u;
    // 0x28e44c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E448u, 0x28E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E450u;
label_28e450:
    // 0x28e450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e458: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e45c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e460: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x28E460u;
    {
        const bool branch_taken_0x28e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E460u;
        // 0x28e464: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e460) {
            ctx->pc = 0x28E69Cu;
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E468u;
label_28e468:
    // 0x28e468: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E468u;
    SET_GPR_U32(ctx, 31, 0x28E470u);
    ctx->pc = 0x28E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E468u;
    // 0x28e46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E468u, 0x28E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E470u;
label_28e470:
    // 0x28e470: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E470u;
    {
        const bool branch_taken_0x28e470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E470u;
        // 0x28e474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e470) {
            ctx->pc = 0x28E494u;
            goto label_28e494;
        }
    }
    ctx->pc = 0x28E478u;
    // 0x28e478: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e47c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e480: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e488: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e48c: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E48Cu;
    SET_GPR_U32(ctx, 31, 0x28E494u);
    ctx->pc = 0x28E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E48Cu;
    // 0x28e490: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E48Cu, 0x28E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E494u;
label_28e494:
    // 0x28e494: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E494u;
    SET_GPR_U32(ctx, 31, 0x28E49Cu);
    ctx->pc = 0x28E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E494u;
    // 0x28e498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E494u, 0x28E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E49Cu;
label_28e49c:
    // 0x28e49c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4a0: 0x1220008e  beqz        $s1, . + 4 + (0x8E << 2)
    ctx->pc = 0x28E4A0u;
    {
        const bool branch_taken_0x28e4a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4A0u;
        // 0x28e4a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4a0) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E4A8u;
    // 0x28e4a8: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E4A8u;
    SET_GPR_U32(ctx, 31, 0x28E4B0u);
    ctx->pc = 0x28E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4A8u;
    // 0x28e4ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E4A8u, 0x28E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4B0u;
label_28e4b0:
    // 0x28e4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4c0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x28E4C0u;
    {
        const bool branch_taken_0x28e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4C0u;
        // 0x28e4c4: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4c0) {
            ctx->pc = 0x28E69Cu;
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E4C8u;
label_28e4c8:
    // 0x28e4c8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E4C8u;
    SET_GPR_U32(ctx, 31, 0x28E4D0u);
    ctx->pc = 0x28E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4C8u;
    // 0x28e4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E4C8u, 0x28E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4D0u;
label_28e4d0:
    // 0x28e4d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E4D0u;
    {
        const bool branch_taken_0x28e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4D0u;
        // 0x28e4d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4d0) {
            ctx->pc = 0x28E4F4u;
            goto label_28e4f4;
        }
    }
    ctx->pc = 0x28E4D8u;
    // 0x28e4d8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e4d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28e4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e4e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e4ec: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E4ECu;
    SET_GPR_U32(ctx, 31, 0x28E4F4u);
    ctx->pc = 0x28E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4ECu;
    // 0x28e4f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E4ECu, 0x28E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4F4u;
label_28e4f4:
    // 0x28e4f4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E4F4u;
    SET_GPR_U32(ctx, 31, 0x28E4FCu);
    ctx->pc = 0x28E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4F4u;
    // 0x28e4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E4F4u, 0x28E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4FCu;
label_28e4fc:
    // 0x28e4fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e500: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x28E500u;
    {
        const bool branch_taken_0x28e500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E500u;
        // 0x28e504: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e500) {
            ctx->pc = 0x28E530u;
            goto label_28e530;
        }
    }
    ctx->pc = 0x28E508u;
    // 0x28e508: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E508u;
    SET_GPR_U32(ctx, 31, 0x28E510u);
    ctx->pc = 0x28E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E508u;
    // 0x28e50c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E508u, 0x28E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E510u;
label_28e510:
    // 0x28e510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e514: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28e514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e51c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e520: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x28e520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28e524: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e528: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E528u;
    SET_GPR_U32(ctx, 31, 0x28E530u);
    ctx->pc = 0x28E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E528u;
    // 0x28e52c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E528u, 0x28E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E530u;
label_28e530:
    // 0x28e530: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E530u;
    SET_GPR_U32(ctx, 31, 0x28E538u);
    ctx->pc = 0x28E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E530u;
    // 0x28e534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E530u, 0x28E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E538u;
label_28e538:
    // 0x28e538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e53c: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x28E53Cu;
    {
        const bool branch_taken_0x28e53c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E53Cu;
        // 0x28e540: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e53c) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E544u;
    // 0x28e544: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E544u;
    SET_GPR_U32(ctx, 31, 0x28E54Cu);
    ctx->pc = 0x28E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E544u;
    // 0x28e548: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E544u, 0x28E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E54Cu;
label_28e54c:
    // 0x28e54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e554: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e558: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e55c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x28E55Cu;
    {
        const bool branch_taken_0x28e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E55Cu;
        // 0x28e560: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e55c) {
            ctx->pc = 0x28E69Cu;
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E564u;
label_28e564:
    // 0x28e564: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E564u;
    SET_GPR_U32(ctx, 31, 0x28E56Cu);
    ctx->pc = 0x28E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E564u;
    // 0x28e568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E564u, 0x28E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E56Cu;
label_28e56c:
    // 0x28e56c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x28E56Cu;
    {
        const bool branch_taken_0x28e56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E56Cu;
        // 0x28e570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e56c) {
            ctx->pc = 0x28E67Cu;
            goto label_28e67c;
        }
    }
    ctx->pc = 0x28E574u;
    // 0x28e574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e578: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e57c: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x28e57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x28e580: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e584: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28E584u;
    {
        const bool branch_taken_0x28e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E584u;
        // 0x28e588: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e584) {
            ctx->pc = 0x28E674u;
            goto label_28e674;
        }
    }
    ctx->pc = 0x28E58Cu;
label_28e58c:
    // 0x28e58c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E58Cu;
    SET_GPR_U32(ctx, 31, 0x28E594u);
    ctx->pc = 0x28E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E58Cu;
    // 0x28e590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E58Cu, 0x28E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E594u;
label_28e594:
    // 0x28e594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E594u;
    {
        const bool branch_taken_0x28e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E594u;
        // 0x28e598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e594) {
            ctx->pc = 0x28E5B8u;
            goto label_28e5b8;
        }
    }
    ctx->pc = 0x28E59Cu;
    // 0x28e59c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5a4: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x28e5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x28e5a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e5ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e5acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5b0: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E5B0u;
    SET_GPR_U32(ctx, 31, 0x28E5B8u);
    ctx->pc = 0x28E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5B0u;
    // 0x28e5b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E5B0u, 0x28E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5B8u;
label_28e5b8:
    // 0x28e5b8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E5B8u;
    SET_GPR_U32(ctx, 31, 0x28E5C0u);
    ctx->pc = 0x28E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5B8u;
    // 0x28e5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E5B8u, 0x28E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5C0u;
label_28e5c0:
    // 0x28e5c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5c4: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x28E5C4u;
    {
        const bool branch_taken_0x28e5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5C4u;
        // 0x28e5c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5c4) {
            ctx->pc = 0x28E67Cu;
            goto label_28e67c;
        }
    }
    ctx->pc = 0x28E5CCu;
    // 0x28e5cc: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E5CCu;
    SET_GPR_U32(ctx, 31, 0x28E5D4u);
    ctx->pc = 0x28E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5CCu;
    // 0x28e5d0: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E5CCu, 0x28E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5D4u;
label_28e5d4:
    // 0x28e5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5d8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28e5d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28E5E4u;
    {
        const bool branch_taken_0x28e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5E4u;
        // 0x28e5e8: 0x2407001b  addiu       $a3, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5e4) {
            ctx->pc = 0x28E670u;
            goto label_28e670;
        }
    }
    ctx->pc = 0x28E5ECu;
label_28e5ec:
    // 0x28e5ec: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E5ECu;
    SET_GPR_U32(ctx, 31, 0x28E5F4u);
    ctx->pc = 0x28E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5ECu;
    // 0x28e5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E5ECu, 0x28E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5F4u;
label_28e5f4:
    // 0x28e5f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28E5F4u;
    {
        const bool branch_taken_0x28e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5F4u;
        // 0x28e5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5f4) {
            ctx->pc = 0x28E67Cu;
            goto label_28e67c;
        }
    }
    ctx->pc = 0x28E5FCu;
    // 0x28e5fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e600: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e604: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x28e604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28e608: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e60c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28E60Cu;
    {
        const bool branch_taken_0x28e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E60Cu;
        // 0x28e610: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e60c) {
            ctx->pc = 0x28E674u;
            goto label_28e674;
        }
    }
    ctx->pc = 0x28E614u;
label_28e614:
    // 0x28e614: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E614u;
    SET_GPR_U32(ctx, 31, 0x28E61Cu);
    ctx->pc = 0x28E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E614u;
    // 0x28e618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E614u, 0x28E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E61Cu;
label_28e61c:
    // 0x28e61c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E61Cu;
    {
        const bool branch_taken_0x28e61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E61Cu;
        // 0x28e620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e61c) {
            ctx->pc = 0x28E640u;
            goto label_28e640;
        }
    }
    ctx->pc = 0x28E624u;
    // 0x28e624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e628: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e62c: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x28e62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28e630: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e634: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e634u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e638: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E638u;
    SET_GPR_U32(ctx, 31, 0x28E640u);
    ctx->pc = 0x28E63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E638u;
    // 0x28e63c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E638u, 0x28E640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E640u;
label_28e640:
    // 0x28e640: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E640u;
    SET_GPR_U32(ctx, 31, 0x28E648u);
    ctx->pc = 0x28E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E640u;
    // 0x28e644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E640u, 0x28E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E648u;
label_28e648:
    // 0x28e648: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e64c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x28E64Cu;
    {
        const bool branch_taken_0x28e64c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E64Cu;
        // 0x28e650: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e64c) {
            ctx->pc = 0x28E67Cu;
            goto label_28e67c;
        }
    }
    ctx->pc = 0x28E654u;
    // 0x28e654: 0xc08c466  jal         func_231198
    ctx->pc = 0x28E654u;
    SET_GPR_U32(ctx, 31, 0x28E65Cu);
    ctx->pc = 0x28E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E654u;
    // 0x28e658: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x28E654u, 0x28E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E65Cu;
label_28e65c:
    // 0x28e65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e660: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28e660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e668: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e66c: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x28e66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_28e670:
    // 0x28e670: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28e670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e674:
    // 0x28e674: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E674u;
    SET_GPR_U32(ctx, 31, 0x28E67Cu);
    ctx->pc = 0x28E678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E674u;
    // 0x28e678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E674u, 0x28E67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E67Cu;
label_28e67c:
    // 0x28e67c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E67Cu;
    SET_GPR_U32(ctx, 31, 0x28E684u);
    ctx->pc = 0x28E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E67Cu;
    // 0x28e680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E67Cu, 0x28E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E684u;
label_28e684:
    // 0x28e684: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28E684u;
    {
        const bool branch_taken_0x28e684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E684u;
        // 0x28e688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e684) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E68Cu;
    // 0x28e68c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e690: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e694: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e698: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28e69c:
    // 0x28e69c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e69cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28e6a0: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E6A0u;
    SET_GPR_U32(ctx, 31, 0x28E6A8u);
    ctx->pc = 0x28E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6A0u;
    // 0x28e6a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E6A0u, 0x28E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6A8u;
label_28e6a8:
    // 0x28e6a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28E6A8u;
    {
        const bool branch_taken_0x28e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6A8u;
        // 0x28e6ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6a8) {
            ctx->pc = 0x28E6E0u;
            goto label_28e6e0;
        }
    }
    ctx->pc = 0x28E6B0u;
label_28e6b0:
    // 0x28e6b0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28E6B0u;
    SET_GPR_U32(ctx, 31, 0x28E6B8u);
    ctx->pc = 0x28E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6B0u;
    // 0x28e6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28E6B0u, 0x28E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6B8u;
label_28e6b8:
    // 0x28e6b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E6B8u;
    {
        const bool branch_taken_0x28e6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6B8u;
        // 0x28e6bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6b8) {
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E6C0u;
    // 0x28e6c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28e6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6cc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28e6ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e6d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28e6d4: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x28E6D4u;
    SET_GPR_U32(ctx, 31, 0x28E6DCu);
    ctx->pc = 0x28E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6D4u;
    // 0x28e6d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x28E6D4u, 0x28E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6DCu;
label_28e6dc:
    // 0x28e6dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28e6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28e6e0:
    // 0x28e6e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28e6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e6e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28e6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e6e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28e6e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e6ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28e6ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e6f0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x28e6f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e6f8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x28e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x28E6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6FCu;
        // 0x28e700: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E704u;
    // 0x28e704: 0x0  nop
    ctx->pc = 0x28e704u;
    // NOP
    ctx->pc = 0x28e708u;
}
