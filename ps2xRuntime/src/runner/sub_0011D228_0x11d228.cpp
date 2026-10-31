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

// Function: sub_0011D228
// Address: 0x11d228 - 0x11d808
void sub_0011D228_0x11d228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D228_0x11d228");
#endif

    switch (ctx->pc) {
        case 0x11d26cu: goto label_11d26c;
        case 0x11d2d0u: goto label_11d2d0;
        case 0x11d2d8u: goto label_11d2d8;
        case 0x11d2e8u: goto label_11d2e8;
        case 0x11d2f8u: goto label_11d2f8;
        case 0x11d368u: goto label_11d368;
        case 0x11d370u: goto label_11d370;
        case 0x11d380u: goto label_11d380;
        case 0x11d390u: goto label_11d390;
        case 0x11d400u: goto label_11d400;
        case 0x11d408u: goto label_11d408;
        case 0x11d418u: goto label_11d418;
        case 0x11d428u: goto label_11d428;
        case 0x11d480u: goto label_11d480;
        case 0x11d488u: goto label_11d488;
        case 0x11d498u: goto label_11d498;
        case 0x11d4a8u: goto label_11d4a8;
        case 0x11d500u: goto label_11d500;
        case 0x11d508u: goto label_11d508;
        case 0x11d518u: goto label_11d518;
        case 0x11d528u: goto label_11d528;
        case 0x11d580u: goto label_11d580;
        case 0x11d588u: goto label_11d588;
        case 0x11d598u: goto label_11d598;
        case 0x11d5a8u: goto label_11d5a8;
        case 0x11d5d8u: goto label_11d5d8;
        case 0x11d608u: goto label_11d608;
        case 0x11d610u: goto label_11d610;
        case 0x11d624u: goto label_11d624;
        case 0x11d630u: goto label_11d630;
        case 0x11d63cu: goto label_11d63c;
        case 0x11d690u: goto label_11d690;
        case 0x11d698u: goto label_11d698;
        case 0x11d6a8u: goto label_11d6a8;
        case 0x11d6b8u: goto label_11d6b8;
        case 0x11d710u: goto label_11d710;
        case 0x11d718u: goto label_11d718;
        case 0x11d728u: goto label_11d728;
        case 0x11d738u: goto label_11d738;
        case 0x11d768u: goto label_11d768;
        case 0x11d798u: goto label_11d798;
        case 0x11d7a0u: goto label_11d7a0;
        case 0x11d7b4u: goto label_11d7b4;
        case 0x11d7c0u: goto label_11d7c0;
        case 0x11d7ccu: goto label_11d7cc;
        default: break;
    }

    ctx->pc = 0x11d228u;

    // 0x11d228: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d22c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d230: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11d230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11d234: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11d238: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11d238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d23c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11d23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d240: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x11d240u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11d244: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11d244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11d248: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x11d248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11d24c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d250: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11d254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d258: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11d258u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11d25c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11d25cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11d260: 0x222200b  movn        $a0, $s1, $v0
    ctx->pc = 0x11d260u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    // 0x11d264: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D264u;
    SET_GPR_U32(ctx, 31, 0x11D26Cu);
    ctx->pc = 0x11D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D264u;
    // 0x11d268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D264u, 0x11D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D26Cu;
label_11d26c:
    // 0x11d26c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d270: 0x1200015d  beqz        $s0, . + 4 + (0x15D << 2)
    ctx->pc = 0x11D270u;
    {
        const bool branch_taken_0x11d270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D270u;
        // 0x11d274: 0x2e42000a  sltiu       $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d270) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D278u;
    // 0x11d278: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x11D278u;
    {
        const bool branch_taken_0x11d278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D278u;
        // 0x11d27c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d278) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D280u;
    // 0x11d280: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x11d280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11d284: 0x24428450  addiu       $v0, $v0, -0x7BB0
    ctx->pc = 0x11d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935632));
    // 0x11d288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d28c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d290: 0x800008  jr          $a0
    ctx->pc = 0x11D290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D298u: goto label_11d298;
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D3B4u: goto label_11d3b4;
            case 0x11D44Cu: goto label_11d44c;
            case 0x11D4CCu: goto label_11d4cc;
            case 0x11D54Cu: goto label_11d54c;
            case 0x11D5CCu: goto label_11d5cc;
            case 0x11D660u: goto label_11d660;
            case 0x11D6DCu: goto label_11d6dc;
            case 0x11D75Cu: goto label_11d75c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D290u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11D298u;
label_11d298:
    // 0x11d298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11d298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d29c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d2a0: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x11d2a0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x11d2a4: 0xe61503a8  swc1        $f21, 0x3A8($s0)
    ctx->pc = 0x11d2a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
    // 0x11d2a8: 0x1622014f  bne         $s1, $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x11D2A8u;
    {
        const bool branch_taken_0x11d2a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2A8u;
        // 0x11d2ac: 0xe6140378  swc1        $f20, 0x378($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2a8) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D2B0u;
    // 0x11d2b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d2b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d2b8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d2bc: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d2bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d2c0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d2c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d2c4: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x11D2C4u;
    {
        const bool branch_taken_0x11d2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2C4u;
        // 0x11d2c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2c4) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D2CCu;
    // 0x11d2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d2d0:
    // 0x11d2d0: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D2D0u;
    SET_GPR_U32(ctx, 31, 0x11D2D8u);
    ctx->pc = 0x11D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2D0u;
    // 0x11d2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D2D0u, 0x11D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2D8u;
label_11d2d8:
    // 0x11d2d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D2D8u;
    {
        const bool branch_taken_0x11d2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2D8u;
        // 0x11d2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2d8) {
            ctx->pc = 0x11D2FCu;
            goto label_11d2fc;
        }
    }
    ctx->pc = 0x11D2E0u;
    // 0x11d2e0: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D2E0u;
    SET_GPR_U32(ctx, 31, 0x11D2E8u);
    ctx->pc = 0x11D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2E0u;
    // 0x11d2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D2E0u, 0x11D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2E8u;
label_11d2e8:
    // 0x11d2e8: 0xe4540378  swc1        $f20, 0x378($v0)
    ctx->pc = 0x11d2e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 888), bits); }
    // 0x11d2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2f0: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D2F0u;
    SET_GPR_U32(ctx, 31, 0x11D2F8u);
    ctx->pc = 0x11D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2F0u;
    // 0x11d2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D2F0u, 0x11D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2F8u;
label_11d2f8:
    // 0x11d2f8: 0xe45503a8  swc1        $f21, 0x3A8($v0)
    ctx->pc = 0x11d2f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 936), bits); }
label_11d2fc:
    // 0x11d2fc: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d304: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d308: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d30c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D30Cu;
    {
        const bool branch_taken_0x11d30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D30Cu;
        // 0x11d310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d30c) {
            ctx->pc = 0x11D2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d2d0;
        }
    }
    ctx->pc = 0x11D314u;
    // 0x11d314: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x11D314u;
    {
        const bool branch_taken_0x11d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D314u;
        // 0x11d318: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d314) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D31Cu;
label_11d31c:
    // 0x11d31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11d31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d320: 0x0  nop
    ctx->pc = 0x11d320u;
    // NOP
    // 0x11d324: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x11d324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d328: 0x0  nop
    ctx->pc = 0x11d328u;
    // NOP
    // 0x11d32c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x11D32Cu;
    {
        const bool branch_taken_0x11d32c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D32Cu;
        // 0x11d330: 0xe61503a4  swc1        $f21, 0x3A4($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d32c) {
            ctx->pc = 0x11D33Cu;
            goto label_11d33c;
        }
    }
    ctx->pc = 0x11D334u;
    // 0x11d334: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11d334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11d338: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11d338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11d33c:
    // 0x11d33c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d340: 0x16220129  bne         $s1, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x11D340u;
    {
        const bool branch_taken_0x11d340 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D340u;
        // 0x11d344: 0xe614037c  swc1        $f20, 0x37C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d340) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D348u;
    // 0x11d348: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d34c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d350: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d350u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d354: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d358: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d35c: 0x10600122  beqz        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x11D35Cu;
    {
        const bool branch_taken_0x11d35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D35Cu;
        // 0x11d360: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d35c) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D364u;
    // 0x11d364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d368:
    // 0x11d368: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D368u;
    SET_GPR_U32(ctx, 31, 0x11D370u);
    ctx->pc = 0x11D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D368u;
    // 0x11d36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D368u, 0x11D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D370u;
label_11d370:
    // 0x11d370: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D370u;
    {
        const bool branch_taken_0x11d370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D370u;
        // 0x11d374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d370) {
            ctx->pc = 0x11D394u;
            goto label_11d394;
        }
    }
    ctx->pc = 0x11D378u;
    // 0x11d378: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D378u;
    SET_GPR_U32(ctx, 31, 0x11D380u);
    ctx->pc = 0x11D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D378u;
    // 0x11d37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D378u, 0x11D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D380u;
label_11d380:
    // 0x11d380: 0xe454037c  swc1        $f20, 0x37C($v0)
    ctx->pc = 0x11d380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 892), bits); }
    // 0x11d384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d388: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D388u;
    SET_GPR_U32(ctx, 31, 0x11D390u);
    ctx->pc = 0x11D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D388u;
    // 0x11d38c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D388u, 0x11D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D390u;
label_11d390:
    // 0x11d390: 0xe45503a4  swc1        $f21, 0x3A4($v0)
    ctx->pc = 0x11d390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 932), bits); }
label_11d394:
    // 0x11d394: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d398: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d39c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d3a0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d3a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D3A4u;
    {
        const bool branch_taken_0x11d3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3A4u;
        // 0x11d3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3a4) {
            ctx->pc = 0x11D368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d368;
        }
    }
    ctx->pc = 0x11D3ACu;
    // 0x11d3ac: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x11D3ACu;
    {
        const bool branch_taken_0x11d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3ACu;
        // 0x11d3b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3ac) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D3B4u;
label_11d3b4:
    // 0x11d3b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11d3b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d3b8: 0x0  nop
    ctx->pc = 0x11d3b8u;
    // NOP
    // 0x11d3bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x11d3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d3c0: 0x0  nop
    ctx->pc = 0x11d3c0u;
    // NOP
    // 0x11d3c4: 0x45030109  bc1tl       . + 4 + (0x109 << 2)
    ctx->pc = 0x11D3C4u;
    {
        const bool branch_taken_0x11d3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11d3c4) {
            ctx->pc = 0x11D3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D3C4u;
            // 0x11d3c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D3CCu;
    // 0x11d3cc: 0xe61503a0  swc1        $f21, 0x3A0($s0)
    ctx->pc = 0x11d3ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x11d3d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d3d4: 0x16220104  bne         $s1, $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x11D3D4u;
    {
        const bool branch_taken_0x11d3d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3D4u;
        // 0x11d3d8: 0xe6140374  swc1        $f20, 0x374($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3d4) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D3DCu;
    // 0x11d3dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d3e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d3e4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d3e8: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d3e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d3ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d3ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d3f0: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x11D3F0u;
    {
        const bool branch_taken_0x11d3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3F0u;
        // 0x11d3f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3f0) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D3F8u;
    // 0x11d3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3fc: 0x0  nop
    ctx->pc = 0x11d3fcu;
    // NOP
label_11d400:
    // 0x11d400: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D400u;
    SET_GPR_U32(ctx, 31, 0x11D408u);
    ctx->pc = 0x11D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D400u;
    // 0x11d404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D400u, 0x11D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D408u;
label_11d408:
    // 0x11d408: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D408u;
    {
        const bool branch_taken_0x11d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D408u;
        // 0x11d40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d408) {
            ctx->pc = 0x11D42Cu;
            goto label_11d42c;
        }
    }
    ctx->pc = 0x11D410u;
    // 0x11d410: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D410u;
    SET_GPR_U32(ctx, 31, 0x11D418u);
    ctx->pc = 0x11D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D410u;
    // 0x11d414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D410u, 0x11D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D418u;
label_11d418:
    // 0x11d418: 0xe4540374  swc1        $f20, 0x374($v0)
    ctx->pc = 0x11d418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 884), bits); }
    // 0x11d41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d420: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D420u;
    SET_GPR_U32(ctx, 31, 0x11D428u);
    ctx->pc = 0x11D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D420u;
    // 0x11d424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D420u, 0x11D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D428u;
label_11d428:
    // 0x11d428: 0xe45503a0  swc1        $f21, 0x3A0($v0)
    ctx->pc = 0x11d428u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 928), bits); }
label_11d42c:
    // 0x11d42c: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d434: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d438: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d43c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D43Cu;
    {
        const bool branch_taken_0x11d43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D43Cu;
        // 0x11d440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d43c) {
            ctx->pc = 0x11D400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d400;
        }
    }
    ctx->pc = 0x11D444u;
    // 0x11d444: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x11D444u;
    {
        const bool branch_taken_0x11d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D444u;
        // 0x11d448: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d444) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D44Cu;
label_11d44c:
    // 0x11d44c: 0xe61503ac  swc1        $f21, 0x3AC($s0)
    ctx->pc = 0x11d44cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 940), bits); }
    // 0x11d450: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d454: 0x162200e4  bne         $s1, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x11D454u;
    {
        const bool branch_taken_0x11d454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D454u;
        // 0x11d458: 0xe6140380  swc1        $f20, 0x380($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d454) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D45Cu;
    // 0x11d45c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d460: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d464: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d464u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d468: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d46c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d46cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d470: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x11D470u;
    {
        const bool branch_taken_0x11d470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D470u;
        // 0x11d474: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d470) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D478u;
    // 0x11d478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d47c: 0x0  nop
    ctx->pc = 0x11d47cu;
    // NOP
label_11d480:
    // 0x11d480: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D480u;
    SET_GPR_U32(ctx, 31, 0x11D488u);
    ctx->pc = 0x11D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D480u;
    // 0x11d484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D480u, 0x11D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D488u;
label_11d488:
    // 0x11d488: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D488u;
    {
        const bool branch_taken_0x11d488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D488u;
        // 0x11d48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d488) {
            ctx->pc = 0x11D4ACu;
            goto label_11d4ac;
        }
    }
    ctx->pc = 0x11D490u;
    // 0x11d490: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D490u;
    SET_GPR_U32(ctx, 31, 0x11D498u);
    ctx->pc = 0x11D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D490u;
    // 0x11d494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D490u, 0x11D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D498u;
label_11d498:
    // 0x11d498: 0xe4540380  swc1        $f20, 0x380($v0)
    ctx->pc = 0x11d498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
    // 0x11d49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4a0: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D4A0u;
    SET_GPR_U32(ctx, 31, 0x11D4A8u);
    ctx->pc = 0x11D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4A0u;
    // 0x11d4a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D4A0u, 0x11D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4A8u;
label_11d4a8:
    // 0x11d4a8: 0xe45503ac  swc1        $f21, 0x3AC($v0)
    ctx->pc = 0x11d4a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 940), bits); }
label_11d4ac:
    // 0x11d4ac: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d4b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d4b4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d4b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d4b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d4bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D4BCu;
    {
        const bool branch_taken_0x11d4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4BCu;
        // 0x11d4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4bc) {
            ctx->pc = 0x11D480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d480;
        }
    }
    ctx->pc = 0x11D4C4u;
    // 0x11d4c4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x11D4C4u;
    {
        const bool branch_taken_0x11d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4C4u;
        // 0x11d4c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4c4) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D4CCu;
label_11d4cc:
    // 0x11d4cc: 0xe61503b0  swc1        $f21, 0x3B0($s0)
    ctx->pc = 0x11d4ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 944), bits); }
    // 0x11d4d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d4d4: 0x162200c4  bne         $s1, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x11D4D4u;
    {
        const bool branch_taken_0x11d4d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4D4u;
        // 0x11d4d8: 0xe6140384  swc1        $f20, 0x384($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4d4) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D4DCu;
    // 0x11d4dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d4e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d4e4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d4e8: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d4ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d4ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d4f0: 0x106000bd  beqz        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x11D4F0u;
    {
        const bool branch_taken_0x11d4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4F0u;
        // 0x11d4f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4f0) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D4F8u;
    // 0x11d4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4fc: 0x0  nop
    ctx->pc = 0x11d4fcu;
    // NOP
label_11d500:
    // 0x11d500: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D500u;
    SET_GPR_U32(ctx, 31, 0x11D508u);
    ctx->pc = 0x11D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D500u;
    // 0x11d504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D500u, 0x11D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D508u;
label_11d508:
    // 0x11d508: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D508u;
    {
        const bool branch_taken_0x11d508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D508u;
        // 0x11d50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d508) {
            ctx->pc = 0x11D52Cu;
            goto label_11d52c;
        }
    }
    ctx->pc = 0x11D510u;
    // 0x11d510: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D510u;
    SET_GPR_U32(ctx, 31, 0x11D518u);
    ctx->pc = 0x11D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D510u;
    // 0x11d514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D510u, 0x11D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D518u;
label_11d518:
    // 0x11d518: 0xe4540384  swc1        $f20, 0x384($v0)
    ctx->pc = 0x11d518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 900), bits); }
    // 0x11d51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d520: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D520u;
    SET_GPR_U32(ctx, 31, 0x11D528u);
    ctx->pc = 0x11D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D520u;
    // 0x11d524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D520u, 0x11D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D528u;
label_11d528:
    // 0x11d528: 0xe45503b0  swc1        $f21, 0x3B0($v0)
    ctx->pc = 0x11d528u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 944), bits); }
label_11d52c:
    // 0x11d52c: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d530: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d534: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d538: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d53c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D53Cu;
    {
        const bool branch_taken_0x11d53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D53Cu;
        // 0x11d540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d53c) {
            ctx->pc = 0x11D500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d500;
        }
    }
    ctx->pc = 0x11D544u;
    // 0x11d544: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x11D544u;
    {
        const bool branch_taken_0x11d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D544u;
        // 0x11d548: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d544) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D54Cu;
label_11d54c:
    // 0x11d54c: 0xe61503c4  swc1        $f21, 0x3C4($s0)
    ctx->pc = 0x11d54cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 964), bits); }
    // 0x11d550: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d554: 0x162200a4  bne         $s1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x11D554u;
    {
        const bool branch_taken_0x11d554 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D554u;
        // 0x11d558: 0xe6140398  swc1        $f20, 0x398($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d554) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D55Cu;
    // 0x11d55c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d560: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d564: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d564u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d568: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d56c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d56cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d570: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x11D570u;
    {
        const bool branch_taken_0x11d570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D570u;
        // 0x11d574: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d570) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D578u;
    // 0x11d578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d57c: 0x0  nop
    ctx->pc = 0x11d57cu;
    // NOP
label_11d580:
    // 0x11d580: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D580u;
    SET_GPR_U32(ctx, 31, 0x11D588u);
    ctx->pc = 0x11D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D580u;
    // 0x11d584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D580u, 0x11D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D588u;
label_11d588:
    // 0x11d588: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D588u;
    {
        const bool branch_taken_0x11d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D588u;
        // 0x11d58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d588) {
            ctx->pc = 0x11D5ACu;
            goto label_11d5ac;
        }
    }
    ctx->pc = 0x11D590u;
    // 0x11d590: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D590u;
    SET_GPR_U32(ctx, 31, 0x11D598u);
    ctx->pc = 0x11D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D590u;
    // 0x11d594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D590u, 0x11D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D598u;
label_11d598:
    // 0x11d598: 0xe4540398  swc1        $f20, 0x398($v0)
    ctx->pc = 0x11d598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 920), bits); }
    // 0x11d59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5a0: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D5A0u;
    SET_GPR_U32(ctx, 31, 0x11D5A8u);
    ctx->pc = 0x11D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5A0u;
    // 0x11d5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D5A0u, 0x11D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5A8u;
label_11d5a8:
    // 0x11d5a8: 0xe45503c4  swc1        $f21, 0x3C4($v0)
    ctx->pc = 0x11d5a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 964), bits); }
label_11d5ac:
    // 0x11d5ac: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d5b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d5b4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d5b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d5b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d5bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D5BCu;
    {
        const bool branch_taken_0x11d5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5BCu;
        // 0x11d5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5bc) {
            ctx->pc = 0x11D580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d580;
        }
    }
    ctx->pc = 0x11D5C4u;
    // 0x11d5c4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x11D5C4u;
    {
        const bool branch_taken_0x11d5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5C4u;
        // 0x11d5c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5c4) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D5CCu;
label_11d5cc:
    // 0x11d5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5d0: 0xc04feb2  jal         func_13FAC8
    ctx->pc = 0x11D5D0u;
    SET_GPR_U32(ctx, 31, 0x11D5D8u);
    ctx->pc = 0x11D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5D0u;
    // 0x11d5d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAC8u, 0x11D5D0u, 0x11D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5D8u;
label_11d5d8:
    // 0x11d5d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d5dc: 0x16220082  bne         $s1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x11D5DCu;
    {
        const bool branch_taken_0x11d5dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5DCu;
        // 0x11d5e0: 0xe61503b4  swc1        $f21, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5dc) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D5E4u;
    // 0x11d5e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d5e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d5ec: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d5f0: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d5f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d5f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d5f8: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x11D5F8u;
    {
        const bool branch_taken_0x11d5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5F8u;
        // 0x11d5fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5f8) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D600u;
    // 0x11d600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d604: 0x0  nop
    ctx->pc = 0x11d604u;
    // NOP
label_11d608:
    // 0x11d608: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D608u;
    SET_GPR_U32(ctx, 31, 0x11D610u);
    ctx->pc = 0x11D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D608u;
    // 0x11d60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D608u, 0x11D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D610u;
label_11d610:
    // 0x11d610: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11D610u;
    {
        const bool branch_taken_0x11d610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D610u;
        // 0x11d614: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d610) {
            ctx->pc = 0x11D644u;
            goto label_11d644;
        }
    }
    ctx->pc = 0x11D618u;
    // 0x11d618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d61c: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D61Cu;
    SET_GPR_U32(ctx, 31, 0x11D624u);
    ctx->pc = 0x11D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D61Cu;
    // 0x11d620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D61Cu, 0x11D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D624u;
label_11d624:
    // 0x11d624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d628: 0xc04feb2  jal         func_13FAC8
    ctx->pc = 0x11D628u;
    SET_GPR_U32(ctx, 31, 0x11D630u);
    ctx->pc = 0x11D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D628u;
    // 0x11d62c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAC8u, 0x11D628u, 0x11D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D630u;
label_11d630:
    // 0x11d630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d634: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D634u;
    SET_GPR_U32(ctx, 31, 0x11D63Cu);
    ctx->pc = 0x11D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D634u;
    // 0x11d638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D634u, 0x11D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D63Cu;
label_11d63c:
    // 0x11d63c: 0xe45503b4  swc1        $f21, 0x3B4($v0)
    ctx->pc = 0x11d63cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 948), bits); }
    // 0x11d640: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_11d644:
    // 0x11d644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d648: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d64c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d650: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11D650u;
    {
        const bool branch_taken_0x11d650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D650u;
        // 0x11d654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d650) {
            ctx->pc = 0x11D608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d608;
        }
    }
    ctx->pc = 0x11D658u;
    // 0x11d658: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x11D658u;
    {
        const bool branch_taken_0x11d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D658u;
        // 0x11d65c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d658) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D660u;
label_11d660:
    // 0x11d660: 0xe61503b8  swc1        $f21, 0x3B8($s0)
    ctx->pc = 0x11d660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
    // 0x11d664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d668: 0x1622005f  bne         $s1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x11D668u;
    {
        const bool branch_taken_0x11d668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D668u;
        // 0x11d66c: 0xe614038c  swc1        $f20, 0x38C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d668) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D670u;
    // 0x11d670: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d674: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d678: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d678u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d67c: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d67cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d680: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d684: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x11D684u;
    {
        const bool branch_taken_0x11d684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D684u;
        // 0x11d688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d684) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D68Cu;
    // 0x11d68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d690:
    // 0x11d690: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D690u;
    SET_GPR_U32(ctx, 31, 0x11D698u);
    ctx->pc = 0x11D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D690u;
    // 0x11d694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D690u, 0x11D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D698u;
label_11d698:
    // 0x11d698: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D698u;
    {
        const bool branch_taken_0x11d698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D698u;
        // 0x11d69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d698) {
            ctx->pc = 0x11D6BCu;
            goto label_11d6bc;
        }
    }
    ctx->pc = 0x11D6A0u;
    // 0x11d6a0: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D6A0u;
    SET_GPR_U32(ctx, 31, 0x11D6A8u);
    ctx->pc = 0x11D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6A0u;
    // 0x11d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D6A0u, 0x11D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6A8u;
label_11d6a8:
    // 0x11d6a8: 0xe454038c  swc1        $f20, 0x38C($v0)
    ctx->pc = 0x11d6a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 908), bits); }
    // 0x11d6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6b0: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D6B0u;
    SET_GPR_U32(ctx, 31, 0x11D6B8u);
    ctx->pc = 0x11D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6B0u;
    // 0x11d6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D6B0u, 0x11D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6B8u;
label_11d6b8:
    // 0x11d6b8: 0xe45503b8  swc1        $f21, 0x3B8($v0)
    ctx->pc = 0x11d6b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 952), bits); }
label_11d6bc:
    // 0x11d6bc: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d6c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d6c4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d6c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d6c8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d6cc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D6CCu;
    {
        const bool branch_taken_0x11d6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6CCu;
        // 0x11d6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6cc) {
            ctx->pc = 0x11D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d690;
        }
    }
    ctx->pc = 0x11D6D4u;
    // 0x11d6d4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x11D6D4u;
    {
        const bool branch_taken_0x11d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6D4u;
        // 0x11d6d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6d4) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D6DCu;
label_11d6dc:
    // 0x11d6dc: 0xe61503bc  swc1        $f21, 0x3BC($s0)
    ctx->pc = 0x11d6dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
    // 0x11d6e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d6e4: 0x16220040  bne         $s1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x11D6E4u;
    {
        const bool branch_taken_0x11d6e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6E4u;
        // 0x11d6e8: 0xe6140390  swc1        $f20, 0x390($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e4) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D6ECu;
    // 0x11d6ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d6f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d6f4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d6f8: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d6fc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d6fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d700: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x11D700u;
    {
        const bool branch_taken_0x11d700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D700u;
        // 0x11d704: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d700) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D708u;
    // 0x11d708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d70c: 0x0  nop
    ctx->pc = 0x11d70cu;
    // NOP
label_11d710:
    // 0x11d710: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D710u;
    SET_GPR_U32(ctx, 31, 0x11D718u);
    ctx->pc = 0x11D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D710u;
    // 0x11d714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D710u, 0x11D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D718u;
label_11d718:
    // 0x11d718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D718u;
    {
        const bool branch_taken_0x11d718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D718u;
        // 0x11d71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d718) {
            ctx->pc = 0x11D73Cu;
            goto label_11d73c;
        }
    }
    ctx->pc = 0x11D720u;
    // 0x11d720: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D720u;
    SET_GPR_U32(ctx, 31, 0x11D728u);
    ctx->pc = 0x11D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D720u;
    // 0x11d724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D720u, 0x11D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D728u;
label_11d728:
    // 0x11d728: 0xe4540390  swc1        $f20, 0x390($v0)
    ctx->pc = 0x11d728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 912), bits); }
    // 0x11d72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d730: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D730u;
    SET_GPR_U32(ctx, 31, 0x11D738u);
    ctx->pc = 0x11D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D730u;
    // 0x11d734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D730u, 0x11D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D738u;
label_11d738:
    // 0x11d738: 0xe45503bc  swc1        $f21, 0x3BC($v0)
    ctx->pc = 0x11d738u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 956), bits); }
label_11d73c:
    // 0x11d73c: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d744: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d748: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d74c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D74Cu;
    {
        const bool branch_taken_0x11d74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D74Cu;
        // 0x11d750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d74c) {
            ctx->pc = 0x11D710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d710;
        }
    }
    ctx->pc = 0x11D754u;
    // 0x11d754: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11D754u;
    {
        const bool branch_taken_0x11d754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D754u;
        // 0x11d758: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d754) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D75Cu;
label_11d75c:
    // 0x11d75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d760: 0xc04fecc  jal         func_13FB30
    ctx->pc = 0x11D760u;
    SET_GPR_U32(ctx, 31, 0x11D768u);
    ctx->pc = 0x11D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D760u;
    // 0x11d764: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB30u, 0x11D760u, 0x11D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D768u;
label_11d768:
    // 0x11d768: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d76c: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11D76Cu;
    {
        const bool branch_taken_0x11d76c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D76Cu;
        // 0x11d770: 0xe61503c0  swc1        $f21, 0x3C0($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 960), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d76c) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D774u;
    // 0x11d774: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11d778: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d77c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d780: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11d780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11d784: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11d784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d788: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11D788u;
    {
        const bool branch_taken_0x11d788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D788u;
        // 0x11d78c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d788) {
            ctx->pc = 0x11D7E8u;
            goto label_11d7e8;
        }
    }
    ctx->pc = 0x11D790u;
    // 0x11d790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d794: 0x0  nop
    ctx->pc = 0x11d794u;
    // NOP
label_11d798:
    // 0x11d798: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D798u;
    SET_GPR_U32(ctx, 31, 0x11D7A0u);
    ctx->pc = 0x11D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D798u;
    // 0x11d79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D798u, 0x11D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7A0u;
label_11d7a0:
    // 0x11d7a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11D7A0u;
    {
        const bool branch_taken_0x11d7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7A0u;
        // 0x11d7a4: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7a0) {
            ctx->pc = 0x11D7D4u;
            goto label_11d7d4;
        }
    }
    ctx->pc = 0x11D7A8u;
    // 0x11d7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7ac: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D7ACu;
    SET_GPR_U32(ctx, 31, 0x11D7B4u);
    ctx->pc = 0x11D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7ACu;
    // 0x11d7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D7ACu, 0x11D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7B4u;
label_11d7b4:
    // 0x11d7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7b8: 0xc04fecc  jal         func_13FB30
    ctx->pc = 0x11D7B8u;
    SET_GPR_U32(ctx, 31, 0x11D7C0u);
    ctx->pc = 0x11D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7B8u;
    // 0x11d7bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB30u, 0x11D7B8u, 0x11D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7C0u;
label_11d7c0:
    // 0x11d7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7c4: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D7C4u;
    SET_GPR_U32(ctx, 31, 0x11D7CCu);
    ctx->pc = 0x11D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7C4u;
    // 0x11d7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D7C4u, 0x11D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7CCu;
label_11d7cc:
    // 0x11d7cc: 0xe45503c0  swc1        $f21, 0x3C0($v0)
    ctx->pc = 0x11d7ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 960), bits); }
    // 0x11d7d0: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_11d7d4:
    // 0x11d7d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d7d8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d7d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d7dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d7e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11D7E0u;
    {
        const bool branch_taken_0x11d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7E0u;
        // 0x11d7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7e0) {
            ctx->pc = 0x11D798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d798;
        }
    }
    ctx->pc = 0x11D7E8u;
label_11d7e8:
    // 0x11d7e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11d7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11d7ec:
    // 0x11d7ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11d7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d7f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11d7f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d7f8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x11d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11d7fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d800: 0x3e00008  jr          $ra
    ctx->pc = 0x11D800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D800u;
        // 0x11d804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D808u;
}
