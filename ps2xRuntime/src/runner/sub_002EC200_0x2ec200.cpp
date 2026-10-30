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

// Function: sub_002EC200
// Address: 0x2ec200 - 0x2ec460
void sub_002EC200_0x2ec200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC200_0x2ec200");
#endif

    switch (ctx->pc) {
        case 0x2ec268u: goto label_2ec268;
        case 0x2ec278u: goto label_2ec278;
        case 0x2ec288u: goto label_2ec288;
        case 0x2ec298u: goto label_2ec298;
        case 0x2ec2a0u: goto label_2ec2a0;
        case 0x2ec2e4u: goto label_2ec2e4;
        case 0x2ec2f0u: goto label_2ec2f0;
        case 0x2ec2fcu: goto label_2ec2fc;
        case 0x2ec30cu: goto label_2ec30c;
        case 0x2ec318u: goto label_2ec318;
        case 0x2ec368u: goto label_2ec368;
        case 0x2ec370u: goto label_2ec370;
        case 0x2ec3b4u: goto label_2ec3b4;
        case 0x2ec3c4u: goto label_2ec3c4;
        case 0x2ec3e8u: goto label_2ec3e8;
        case 0x2ec3f4u: goto label_2ec3f4;
        case 0x2ec3fcu: goto label_2ec3fc;
        case 0x2ec420u: goto label_2ec420;
        case 0x2ec42cu: goto label_2ec42c;
        case 0x2ec43cu: goto label_2ec43c;
        case 0x2ec448u: goto label_2ec448;
        default: break;
    }

    ctx->pc = 0x2ec200u;

    // 0x2ec200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ec200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ec204: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ec204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ec208: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ec208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ec20c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ec20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ec210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec214: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ec214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ec218: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ec218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec21c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ec220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec224: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2ec224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec228: 0x1472003d  bne         $v1, $s2, . + 4 + (0x3D << 2)
    ctx->pc = 0x2EC228u;
    {
        const bool branch_taken_0x2ec228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC228u;
        // 0x2ec22c: 0xa205001c  sb          $a1, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec228) {
            ctx->pc = 0x2EC320u;
            goto label_2ec320;
        }
    }
    ctx->pc = 0x2EC230u;
    // 0x2ec230: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ec230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2ec234: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ec234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2ec238: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2ec238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2ec23c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ec23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2ec240: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ec240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ec244: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2ec244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2ec248: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x2ec248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec24c: 0x244204e2  addiu       $v0, $v0, 0x4E2
    ctx->pc = 0x2ec24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1250));
    // 0x2ec250: 0xa200001e  sb          $zero, 0x1E($s0)
    ctx->pc = 0x2ec250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec254: 0xa2120020  sb          $s2, 0x20($s0)
    ctx->pc = 0x2ec254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 18));
    // 0x2ec258: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x2ec258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec25c: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x2ec25cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec260: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2EC260u;
    SET_GPR_U32(ctx, 31, 0x2EC268u);
    ctx->pc = 0x2EC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC260u;
    // 0x2ec264: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EC260u, 0x2EC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC268u;
label_2ec268:
    // 0x2ec268: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2ec268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2ec26c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ec26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec270: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2EC270u;
    SET_GPR_U32(ctx, 31, 0x2EC278u);
    ctx->pc = 0x2EC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC270u;
    // 0x2ec274: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EC270u, 0x2EC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC278u;
label_2ec278:
    // 0x2ec278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ec278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec27c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec280: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x2EC280u;
    SET_GPR_U32(ctx, 31, 0x2EC288u);
    ctx->pc = 0x2EC284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC280u;
    // 0x2ec284: 0xa072011f  sb          $s2, 0x11F($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 287), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EC280u, 0x2EC288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC288u;
label_2ec288:
    // 0x2ec288: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC288u;
    {
        const bool branch_taken_0x2ec288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2ec288) {
            ctx->pc = 0x2EC298u;
            goto label_2ec298;
        }
    }
    ctx->pc = 0x2EC290u;
    // 0x2ec290: 0xc08be36  jal         func_22F8D8
    ctx->pc = 0x2EC290u;
    SET_GPR_U32(ctx, 31, 0x2EC298u);
    ctx->pc = 0x2EC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC290u;
    // 0x2ec294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2EC290u, 0x2EC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC298u;
label_2ec298:
    // 0x2ec298: 0xc0bb13a  jal         func_2EC4E8
    ctx->pc = 0x2EC298u;
    SET_GPR_U32(ctx, 31, 0x2EC2A0u);
    ctx->pc = 0x2EC29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC298u;
    // 0x2ec29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC4E8u, 0x2EC298u, 0x2EC2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2A0u;
label_2ec2a0:
    // 0x2ec2a0: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC2A0u;
    {
        const bool branch_taken_0x2ec2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2A0u;
        // 0x2ec2a4: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2a0) {
            ctx->pc = 0x2EC2B8u;
            goto label_2ec2b8;
        }
    }
    ctx->pc = 0x2EC2A8u;
    // 0x2ec2a8: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2ec2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ec2ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec2b0: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2ec2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    // 0x2ec2b4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ec2b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2ec2b8:
    // 0x2ec2b8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2ec2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ec2bc: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x2ec2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x2ec2c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ec2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ec2c4: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x2ec2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ec2c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ec2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec2d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ec2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ec2d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ec2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ec2d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2dc: 0xc087612  jal         func_21D848
    ctx->pc = 0x2EC2DCu;
    SET_GPR_U32(ctx, 31, 0x2EC2E4u);
    ctx->pc = 0x2EC2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2DCu;
    // 0x2ec2e0: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2EC2DCu, 0x2EC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2E4u;
label_2ec2e4:
    // 0x2ec2e4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2ec2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec2e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2EC2E8u;
    SET_GPR_U32(ctx, 31, 0x2EC2F0u);
    ctx->pc = 0x2EC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2E8u;
    // 0x2ec2ec: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EC2E8u, 0x2EC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2F0u;
label_2ec2f0:
    // 0x2ec2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2f4: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2EC2F4u;
    SET_GPR_U32(ctx, 31, 0x2EC2FCu);
    ctx->pc = 0x2EC2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2F4u;
    // 0x2ec2f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EC2F4u, 0x2EC2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2FCu;
label_2ec2fc:
    // 0x2ec2fc: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2EC2FCu;
    {
        const bool branch_taken_0x2ec2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2FCu;
        // 0x2ec300: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2fc) {
            ctx->pc = 0x2EC44Cu;
            goto label_2ec44c;
        }
    }
    ctx->pc = 0x2EC304u;
    // 0x2ec304: 0xc087502  jal         func_21D408
    ctx->pc = 0x2EC304u;
    SET_GPR_U32(ctx, 31, 0x2EC30Cu);
    ctx->pc = 0x2EC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC304u;
    // 0x2ec308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EC304u, 0x2EC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC30Cu;
label_2ec30c:
    // 0x2ec30c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ec30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec310: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2EC310u;
    SET_GPR_U32(ctx, 31, 0x2EC318u);
    ctx->pc = 0x2EC314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC310u;
    // 0x2ec314: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2EC310u, 0x2EC318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC318u;
label_2ec318:
    // 0x2ec318: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2EC318u;
    {
        const bool branch_taken_0x2ec318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC318u;
        // 0x2ec31c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec318) {
            ctx->pc = 0x2EC44Cu;
            goto label_2ec44c;
        }
    }
    ctx->pc = 0x2EC320u;
label_2ec320:
    // 0x2ec320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ec320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec324: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EC324u;
    {
        const bool branch_taken_0x2ec324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC324u;
        // 0x2ec328: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec324) {
            ctx->pc = 0x2EC38Cu;
            goto label_2ec38c;
        }
    }
    ctx->pc = 0x2EC32Cu;
    // 0x2ec32c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2ec32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2ec330: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x2ec330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x2ec334: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2ec334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2ec338: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x2ec338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec33c: 0x2406f7ff  addiu       $a2, $zero, -0x801
    ctx->pc = 0x2ec33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2ec340: 0xa092011f  sb          $s2, 0x11F($a0)
    ctx->pc = 0x2ec340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 287), (uint8_t)GPR_U32(ctx, 18));
    // 0x2ec344: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2ec344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ec348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ec34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec350: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ec350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2ec354: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2ec354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2ec358: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ec358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ec35c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec360: 0xc087612  jal         func_21D848
    ctx->pc = 0x2EC360u;
    SET_GPR_U32(ctx, 31, 0x2EC368u);
    ctx->pc = 0x2EC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC360u;
    // 0x2ec364: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2EC360u, 0x2EC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC368u;
label_2ec368:
    // 0x2ec368: 0xc0bb13a  jal         func_2EC4E8
    ctx->pc = 0x2EC368u;
    SET_GPR_U32(ctx, 31, 0x2EC370u);
    ctx->pc = 0x2EC36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC368u;
    // 0x2ec36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC4E8u, 0x2EC368u, 0x2EC370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC370u;
label_2ec370:
    // 0x2ec370: 0x14520036  bne         $v0, $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2EC370u;
    {
        const bool branch_taken_0x2ec370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC370u;
        // 0x2ec374: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec370) {
            ctx->pc = 0x2EC44Cu;
            goto label_2ec44c;
        }
    }
    ctx->pc = 0x2EC378u;
    // 0x2ec378: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ec378u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2ec37c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2ec37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ec380: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec384: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2EC384u;
    {
        const bool branch_taken_0x2ec384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC384u;
        // 0x2ec388: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec384) {
            ctx->pc = 0x2EC44Cu;
            goto label_2ec44c;
        }
    }
    ctx->pc = 0x2EC38Cu;
label_2ec38c:
    // 0x2ec38c: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2EC38Cu;
    {
        const bool branch_taken_0x2ec38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ec38c) {
            ctx->pc = 0x2EC390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC38Cu;
            // 0x2ec390: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC44Cu;
            goto label_2ec44c;
        }
    }
    ctx->pc = 0x2EC394u;
    // 0x2ec394: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2ec394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2ec398: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2ec398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2ec39c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2ec39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ec3a0: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x2ec3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec3a4: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x2ec3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2ec3a8: 0xa200001e  sb          $zero, 0x1E($s0)
    ctx->pc = 0x2ec3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec3ac: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2EC3ACu;
    SET_GPR_U32(ctx, 31, 0x2EC3B4u);
    ctx->pc = 0x2EC3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3ACu;
    // 0x2ec3b0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EC3ACu, 0x2EC3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3B4u;
label_2ec3b4:
    // 0x2ec3b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ec3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3bc: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2EC3BCu;
    SET_GPR_U32(ctx, 31, 0x2EC3C4u);
    ctx->pc = 0x2EC3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3BCu;
    // 0x2ec3c0: 0xa060011f  sb          $zero, 0x11F($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 287), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2EC3BCu, 0x2EC3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3C4u;
label_2ec3c4:
    // 0x2ec3c4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ec3c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2ec3c8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec3cc: 0x2406f7ff  addiu       $a2, $zero, -0x801
    ctx->pc = 0x2ec3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2ec3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec3d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3dc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ec3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ec3e0: 0xc087612  jal         func_21D848
    ctx->pc = 0x2EC3E0u;
    SET_GPR_U32(ctx, 31, 0x2EC3E8u);
    ctx->pc = 0x2EC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3E0u;
    // 0x2ec3e4: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2EC3E0u, 0x2EC3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3E8u;
label_2ec3e8:
    // 0x2ec3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3ec: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2EC3ECu;
    SET_GPR_U32(ctx, 31, 0x2EC3F4u);
    ctx->pc = 0x2EC3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3ECu;
    // 0x2ec3f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2EC3ECu, 0x2EC3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3F4u;
label_2ec3f4:
    // 0x2ec3f4: 0xc0bb13a  jal         func_2EC4E8
    ctx->pc = 0x2EC3F4u;
    SET_GPR_U32(ctx, 31, 0x2EC3FCu);
    ctx->pc = 0x2EC3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3F4u;
    // 0x2ec3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC4E8u, 0x2EC3F4u, 0x2EC3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3FCu;
label_2ec3fc:
    // 0x2ec3fc: 0x54520006  bnel        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC3FCu;
    {
        const bool branch_taken_0x2ec3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2ec3fc) {
            ctx->pc = 0x2EC400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC3FCu;
            // 0x2ec400: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC418u;
            goto label_2ec418;
        }
    }
    ctx->pc = 0x2EC404u;
    // 0x2ec404: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ec404u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2ec408: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2ec408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2ec40c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec410: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2ec410u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    // 0x2ec414: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2ec414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ec418:
    // 0x2ec418: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2EC418u;
    SET_GPR_U32(ctx, 31, 0x2EC420u);
    ctx->pc = 0x2EC41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC418u;
    // 0x2ec41c: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EC418u, 0x2EC420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC420u;
label_2ec420:
    // 0x2ec420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec424: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2EC424u;
    SET_GPR_U32(ctx, 31, 0x2EC42Cu);
    ctx->pc = 0x2EC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC424u;
    // 0x2ec428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EC424u, 0x2EC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC42Cu;
label_2ec42c:
    // 0x2ec42c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC42Cu;
    {
        const bool branch_taken_0x2ec42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC42Cu;
        // 0x2ec430: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec42c) {
            ctx->pc = 0x2EC44Cu;
            goto label_2ec44c;
        }
    }
    ctx->pc = 0x2EC434u;
    // 0x2ec434: 0xc087502  jal         func_21D408
    ctx->pc = 0x2EC434u;
    SET_GPR_U32(ctx, 31, 0x2EC43Cu);
    ctx->pc = 0x2EC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC434u;
    // 0x2ec438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EC434u, 0x2EC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC43Cu;
label_2ec43c:
    // 0x2ec43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ec43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec440: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2EC440u;
    SET_GPR_U32(ctx, 31, 0x2EC448u);
    ctx->pc = 0x2EC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC440u;
    // 0x2ec444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2EC440u, 0x2EC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC448u;
label_2ec448:
    // 0x2ec448: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ec448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ec44c:
    // 0x2ec44c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ec44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec450: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ec450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec458: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC458u;
        // 0x2ec45c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC460u;
}
