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

// Function: sub_002CD258
// Address: 0x2cd258 - 0x2cd4f8
void sub_002CD258_0x2cd258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD258_0x2cd258");
#endif

    switch (ctx->pc) {
        case 0x2cd258u: goto label_2cd258;
        case 0x2cd25cu: goto label_2cd25c;
        case 0x2cd260u: goto label_2cd260;
        case 0x2cd264u: goto label_2cd264;
        case 0x2cd268u: goto label_2cd268;
        case 0x2cd26cu: goto label_2cd26c;
        case 0x2cd270u: goto label_2cd270;
        case 0x2cd274u: goto label_2cd274;
        case 0x2cd278u: goto label_2cd278;
        case 0x2cd27cu: goto label_2cd27c;
        case 0x2cd280u: goto label_2cd280;
        case 0x2cd284u: goto label_2cd284;
        case 0x2cd288u: goto label_2cd288;
        case 0x2cd28cu: goto label_2cd28c;
        case 0x2cd290u: goto label_2cd290;
        case 0x2cd294u: goto label_2cd294;
        case 0x2cd298u: goto label_2cd298;
        case 0x2cd29cu: goto label_2cd29c;
        case 0x2cd2a0u: goto label_2cd2a0;
        case 0x2cd2a4u: goto label_2cd2a4;
        case 0x2cd2a8u: goto label_2cd2a8;
        case 0x2cd2acu: goto label_2cd2ac;
        case 0x2cd2b0u: goto label_2cd2b0;
        case 0x2cd2b4u: goto label_2cd2b4;
        case 0x2cd2b8u: goto label_2cd2b8;
        case 0x2cd2bcu: goto label_2cd2bc;
        case 0x2cd2c0u: goto label_2cd2c0;
        case 0x2cd2c4u: goto label_2cd2c4;
        case 0x2cd2c8u: goto label_2cd2c8;
        case 0x2cd2ccu: goto label_2cd2cc;
        case 0x2cd2d0u: goto label_2cd2d0;
        case 0x2cd2d4u: goto label_2cd2d4;
        case 0x2cd2d8u: goto label_2cd2d8;
        case 0x2cd2dcu: goto label_2cd2dc;
        case 0x2cd2e0u: goto label_2cd2e0;
        case 0x2cd2e4u: goto label_2cd2e4;
        case 0x2cd2e8u: goto label_2cd2e8;
        case 0x2cd2ecu: goto label_2cd2ec;
        case 0x2cd2f0u: goto label_2cd2f0;
        case 0x2cd2f4u: goto label_2cd2f4;
        case 0x2cd2f8u: goto label_2cd2f8;
        case 0x2cd2fcu: goto label_2cd2fc;
        case 0x2cd300u: goto label_2cd300;
        case 0x2cd304u: goto label_2cd304;
        case 0x2cd308u: goto label_2cd308;
        case 0x2cd30cu: goto label_2cd30c;
        case 0x2cd310u: goto label_2cd310;
        case 0x2cd314u: goto label_2cd314;
        case 0x2cd318u: goto label_2cd318;
        case 0x2cd31cu: goto label_2cd31c;
        case 0x2cd320u: goto label_2cd320;
        case 0x2cd324u: goto label_2cd324;
        case 0x2cd328u: goto label_2cd328;
        case 0x2cd32cu: goto label_2cd32c;
        case 0x2cd330u: goto label_2cd330;
        case 0x2cd334u: goto label_2cd334;
        case 0x2cd338u: goto label_2cd338;
        case 0x2cd33cu: goto label_2cd33c;
        case 0x2cd340u: goto label_2cd340;
        case 0x2cd344u: goto label_2cd344;
        case 0x2cd348u: goto label_2cd348;
        case 0x2cd34cu: goto label_2cd34c;
        case 0x2cd350u: goto label_2cd350;
        case 0x2cd354u: goto label_2cd354;
        case 0x2cd358u: goto label_2cd358;
        case 0x2cd35cu: goto label_2cd35c;
        case 0x2cd360u: goto label_2cd360;
        case 0x2cd364u: goto label_2cd364;
        case 0x2cd368u: goto label_2cd368;
        case 0x2cd36cu: goto label_2cd36c;
        case 0x2cd370u: goto label_2cd370;
        case 0x2cd374u: goto label_2cd374;
        case 0x2cd378u: goto label_2cd378;
        case 0x2cd37cu: goto label_2cd37c;
        case 0x2cd380u: goto label_2cd380;
        case 0x2cd384u: goto label_2cd384;
        case 0x2cd388u: goto label_2cd388;
        case 0x2cd38cu: goto label_2cd38c;
        case 0x2cd390u: goto label_2cd390;
        case 0x2cd394u: goto label_2cd394;
        case 0x2cd398u: goto label_2cd398;
        case 0x2cd39cu: goto label_2cd39c;
        case 0x2cd3a0u: goto label_2cd3a0;
        case 0x2cd3a4u: goto label_2cd3a4;
        case 0x2cd3a8u: goto label_2cd3a8;
        case 0x2cd3acu: goto label_2cd3ac;
        case 0x2cd3b0u: goto label_2cd3b0;
        case 0x2cd3b4u: goto label_2cd3b4;
        case 0x2cd3b8u: goto label_2cd3b8;
        case 0x2cd3bcu: goto label_2cd3bc;
        case 0x2cd3c0u: goto label_2cd3c0;
        case 0x2cd3c4u: goto label_2cd3c4;
        case 0x2cd3c8u: goto label_2cd3c8;
        case 0x2cd3ccu: goto label_2cd3cc;
        case 0x2cd3d0u: goto label_2cd3d0;
        case 0x2cd3d4u: goto label_2cd3d4;
        case 0x2cd3d8u: goto label_2cd3d8;
        case 0x2cd3dcu: goto label_2cd3dc;
        case 0x2cd3e0u: goto label_2cd3e0;
        case 0x2cd3e4u: goto label_2cd3e4;
        case 0x2cd3e8u: goto label_2cd3e8;
        case 0x2cd3ecu: goto label_2cd3ec;
        case 0x2cd3f0u: goto label_2cd3f0;
        case 0x2cd3f4u: goto label_2cd3f4;
        case 0x2cd3f8u: goto label_2cd3f8;
        case 0x2cd3fcu: goto label_2cd3fc;
        case 0x2cd400u: goto label_2cd400;
        case 0x2cd404u: goto label_2cd404;
        case 0x2cd408u: goto label_2cd408;
        case 0x2cd40cu: goto label_2cd40c;
        case 0x2cd410u: goto label_2cd410;
        case 0x2cd414u: goto label_2cd414;
        case 0x2cd418u: goto label_2cd418;
        case 0x2cd41cu: goto label_2cd41c;
        case 0x2cd420u: goto label_2cd420;
        case 0x2cd424u: goto label_2cd424;
        case 0x2cd428u: goto label_2cd428;
        case 0x2cd42cu: goto label_2cd42c;
        case 0x2cd430u: goto label_2cd430;
        case 0x2cd434u: goto label_2cd434;
        case 0x2cd438u: goto label_2cd438;
        case 0x2cd43cu: goto label_2cd43c;
        case 0x2cd440u: goto label_2cd440;
        case 0x2cd444u: goto label_2cd444;
        case 0x2cd448u: goto label_2cd448;
        case 0x2cd44cu: goto label_2cd44c;
        case 0x2cd450u: goto label_2cd450;
        case 0x2cd454u: goto label_2cd454;
        case 0x2cd458u: goto label_2cd458;
        case 0x2cd45cu: goto label_2cd45c;
        case 0x2cd460u: goto label_2cd460;
        case 0x2cd464u: goto label_2cd464;
        case 0x2cd468u: goto label_2cd468;
        case 0x2cd46cu: goto label_2cd46c;
        case 0x2cd470u: goto label_2cd470;
        case 0x2cd474u: goto label_2cd474;
        case 0x2cd478u: goto label_2cd478;
        case 0x2cd47cu: goto label_2cd47c;
        case 0x2cd480u: goto label_2cd480;
        case 0x2cd484u: goto label_2cd484;
        case 0x2cd488u: goto label_2cd488;
        case 0x2cd48cu: goto label_2cd48c;
        case 0x2cd490u: goto label_2cd490;
        case 0x2cd494u: goto label_2cd494;
        case 0x2cd498u: goto label_2cd498;
        case 0x2cd49cu: goto label_2cd49c;
        case 0x2cd4a0u: goto label_2cd4a0;
        case 0x2cd4a4u: goto label_2cd4a4;
        case 0x2cd4a8u: goto label_2cd4a8;
        case 0x2cd4acu: goto label_2cd4ac;
        case 0x2cd4b0u: goto label_2cd4b0;
        case 0x2cd4b4u: goto label_2cd4b4;
        case 0x2cd4b8u: goto label_2cd4b8;
        case 0x2cd4bcu: goto label_2cd4bc;
        case 0x2cd4c0u: goto label_2cd4c0;
        case 0x2cd4c4u: goto label_2cd4c4;
        case 0x2cd4c8u: goto label_2cd4c8;
        case 0x2cd4ccu: goto label_2cd4cc;
        case 0x2cd4d0u: goto label_2cd4d0;
        case 0x2cd4d4u: goto label_2cd4d4;
        case 0x2cd4d8u: goto label_2cd4d8;
        case 0x2cd4dcu: goto label_2cd4dc;
        case 0x2cd4e0u: goto label_2cd4e0;
        case 0x2cd4e4u: goto label_2cd4e4;
        case 0x2cd4e8u: goto label_2cd4e8;
        case 0x2cd4ecu: goto label_2cd4ec;
        case 0x2cd4f0u: goto label_2cd4f0;
        case 0x2cd4f4u: goto label_2cd4f4;
        default: break;
    }

    ctx->pc = 0x2cd258u;

label_2cd258:
    // 0x2cd258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cd258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2cd25c:
    // 0x2cd25c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cd25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2cd260:
    // 0x2cd260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd264:
    // 0x2cd264: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cd264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cd268:
    // 0x2cd268: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cd268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2cd26c:
    // 0x2cd26c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cd26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2cd270:
    // 0x2cd270: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cd270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2cd274:
    // 0x2cd274: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2cd274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2cd278:
    // 0x2cd278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cd27c:
    // 0x2cd27c: 0xc0e40a2  jal         func_390288
label_2cd280:
    if (ctx->pc == 0x2CD280u) {
        ctx->pc = 0x2CD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD27Cu;
        // 0x2cd280: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD284u;
        goto label_2cd284;
    }
    ctx->pc = 0x2CD27Cu;
    SET_GPR_U32(ctx, 31, 0x2CD284u);
    ctx->pc = 0x2CD280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD27Cu;
    // 0x2cd280: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2CD27Cu, 0x2CD284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD284u;
label_2cd284:
    // 0x2cd284: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cd284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd288:
    // 0x2cd288: 0x12600092  beqz        $s3, . + 4 + (0x92 << 2)
label_2cd28c:
    if (ctx->pc == 0x2CD28Cu) {
        ctx->pc = 0x2CD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD288u;
        // 0x2cd28c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD290u;
        goto label_2cd290;
    }
    ctx->pc = 0x2CD288u;
    {
        const bool branch_taken_0x2cd288 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD288u;
        // 0x2cd28c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd288) {
            ctx->pc = 0x2CD4D4u;
            goto label_2cd4d4;
        }
    }
    ctx->pc = 0x2CD290u;
label_2cd290:
    // 0x2cd290: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cd290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd294:
    // 0x2cd294: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2cd294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd298:
    // 0x2cd298: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2cd298u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd29c:
    // 0x2cd29c: 0xc088edc  jal         func_223B70
label_2cd2a0:
    if (ctx->pc == 0x2CD2A0u) {
        ctx->pc = 0x2CD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD29Cu;
        // 0x2cd2a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2A4u;
        goto label_2cd2a4;
    }
    ctx->pc = 0x2CD29Cu;
    SET_GPR_U32(ctx, 31, 0x2CD2A4u);
    ctx->pc = 0x2CD2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD29Cu;
    // 0x2cd2a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2CD29Cu, 0x2CD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2A4u;
label_2cd2a4:
    // 0x2cd2a4: 0x10550011  beq         $v0, $s5, . + 4 + (0x11 << 2)
label_2cd2a8:
    if (ctx->pc == 0x2CD2A8u) {
        ctx->pc = 0x2CD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2A4u;
        // 0x2cd2a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2ACu;
        goto label_2cd2ac;
    }
    ctx->pc = 0x2CD2A4u;
    {
        const bool branch_taken_0x2cd2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2CD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2A4u;
        // 0x2cd2a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2a4) {
            ctx->pc = 0x2CD2ECu;
            goto label_2cd2ec;
        }
    }
    ctx->pc = 0x2CD2ACu;
label_2cd2ac:
    // 0x2cd2ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cd2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cd2b0:
    // 0x2cd2b0: 0x8e7000dc  lw          $s0, 0xDC($s3)
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2cd2b4:
    // 0x2cd2b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cd2b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cd2b8:
    // 0x2cd2b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cd2bc:
    // 0x2cd2bc: 0x40f809  jalr        $v0
label_2cd2c0:
    if (ctx->pc == 0x2CD2C0u) {
        ctx->pc = 0x2CD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2BCu;
        // 0x2cd2c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2C4u;
        goto label_2cd2c4;
    }
    ctx->pc = 0x2CD2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD2C4u);
        ctx->pc = 0x2CD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2BCu;
        // 0x2cd2c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD2BCu, 0x2CD2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD2C4u;
label_2cd2c4:
    // 0x2cd2c4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2cd2c8:
    if (ctx->pc == 0x2CD2C8u) {
        ctx->pc = 0x2CD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2C4u;
        // 0x2cd2c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2CCu;
        goto label_2cd2cc;
    }
    ctx->pc = 0x2CD2C4u;
    {
        const bool branch_taken_0x2cd2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2C4u;
        // 0x2cd2c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2c4) {
            ctx->pc = 0x2CD2DCu;
            goto label_2cd2dc;
        }
    }
    ctx->pc = 0x2CD2CCu;
label_2cd2cc:
    // 0x2cd2cc: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x2cd2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2cd2d0:
    // 0x2cd2d0: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2cd2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2cd2d4:
    // 0x2cd2d4: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2cd2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_2cd2d8:
    // 0x2cd2d8: 0x2a3a00b  movn        $s4, $s5, $v1
    ctx->pc = 0x2cd2d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 21));
label_2cd2dc:
    // 0x2cd2dc: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
label_2cd2e0:
    if (ctx->pc == 0x2CD2E0u) {
        ctx->pc = 0x2CD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2DCu;
        // 0x2cd2e0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2E4u;
        goto label_2cd2e4;
    }
    ctx->pc = 0x2CD2DCu;
    {
        const bool branch_taken_0x2cd2dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2dc) {
            ctx->pc = 0x2CD2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD2DCu;
            // 0x2cd2e0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD2F4u;
            goto label_2cd2f4;
        }
    }
    ctx->pc = 0x2CD2E4u;
label_2cd2e4:
    // 0x2cd2e4: 0xc0a36c8  jal         func_28DB20
label_2cd2e8:
    if (ctx->pc == 0x2CD2E8u) {
        ctx->pc = 0x2CD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2E4u;
        // 0x2cd2e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2ECu;
        goto label_2cd2ec;
    }
    ctx->pc = 0x2CD2E4u;
    SET_GPR_U32(ctx, 31, 0x2CD2ECu);
    ctx->pc = 0x2CD2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2E4u;
    // 0x2cd2e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2CD2E4u, 0x2CD2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2ECu;
label_2cd2ec:
    // 0x2cd2ec: 0x10000079  b           . + 4 + (0x79 << 2)
label_2cd2f0:
    if (ctx->pc == 0x2CD2F0u) {
        ctx->pc = 0x2CD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2ECu;
        // 0x2cd2f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2F4u;
        goto label_2cd2f4;
    }
    ctx->pc = 0x2CD2ECu;
    {
        const bool branch_taken_0x2cd2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2ECu;
        // 0x2cd2f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2ec) {
            ctx->pc = 0x2CD4D4u;
            goto label_2cd4d4;
        }
    }
    ctx->pc = 0x2CD2F4u;
label_2cd2f4:
    // 0x2cd2f4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cd2f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cd2f8:
    // 0x2cd2f8: 0x1c600076  bgtz        $v1, . + 4 + (0x76 << 2)
label_2cd2fc:
    if (ctx->pc == 0x2CD2FCu) {
        ctx->pc = 0x2CD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2F8u;
        // 0x2cd2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD300u;
        goto label_2cd300;
    }
    ctx->pc = 0x2CD2F8u;
    {
        const bool branch_taken_0x2cd2f8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2F8u;
        // 0x2cd2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2f8) {
            ctx->pc = 0x2CD4D4u;
            goto label_2cd4d4;
        }
    }
    ctx->pc = 0x2CD300u;
label_2cd300:
    // 0x2cd300: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2cd300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2cd304:
    // 0x2cd304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd308:
    // 0x2cd308: 0xc089998  jal         func_226660
label_2cd30c:
    if (ctx->pc == 0x2CD30Cu) {
        ctx->pc = 0x2CD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD308u;
        // 0x2cd30c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD310u;
        goto label_2cd310;
    }
    ctx->pc = 0x2CD308u;
    SET_GPR_U32(ctx, 31, 0x2CD310u);
    ctx->pc = 0x2CD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD308u;
    // 0x2cd30c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2CD308u, 0x2CD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD310u;
label_2cd310:
    // 0x2cd310: 0x10550070  beq         $v0, $s5, . + 4 + (0x70 << 2)
label_2cd314:
    if (ctx->pc == 0x2CD314u) {
        ctx->pc = 0x2CD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD310u;
        // 0x2cd314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD318u;
        goto label_2cd318;
    }
    ctx->pc = 0x2CD310u;
    {
        const bool branch_taken_0x2cd310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2CD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD310u;
        // 0x2cd314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd310) {
            ctx->pc = 0x2CD4D4u;
            goto label_2cd4d4;
        }
    }
    ctx->pc = 0x2CD318u;
label_2cd318:
    // 0x2cd318: 0xc08bfbc  jal         func_22FEF0
label_2cd31c:
    if (ctx->pc == 0x2CD31Cu) {
        ctx->pc = 0x2CD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD318u;
        // 0x2cd31c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD320u;
        goto label_2cd320;
    }
    ctx->pc = 0x2CD318u;
    SET_GPR_U32(ctx, 31, 0x2CD320u);
    ctx->pc = 0x2CD31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD318u;
    // 0x2cd31c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2CD318u, 0x2CD320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD320u;
label_2cd320:
    // 0x2cd320: 0x86230024  lh          $v1, 0x24($s1)
    ctx->pc = 0x2cd320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2cd324:
    // 0x2cd324: 0x10750020  beq         $v1, $s5, . + 4 + (0x20 << 2)
label_2cd328:
    if (ctx->pc == 0x2CD328u) {
        ctx->pc = 0x2CD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD324u;
        // 0x2cd328: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD32Cu;
        goto label_2cd32c;
    }
    ctx->pc = 0x2CD324u;
    {
        const bool branch_taken_0x2cd324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2CD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD324u;
        // 0x2cd328: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd324) {
            ctx->pc = 0x2CD3A8u;
            goto label_2cd3a8;
        }
    }
    ctx->pc = 0x2CD32Cu;
label_2cd32c:
    // 0x2cd32c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cd330:
    if (ctx->pc == 0x2CD330u) {
        ctx->pc = 0x2CD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD32Cu;
        // 0x2cd330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD334u;
        goto label_2cd334;
    }
    ctx->pc = 0x2CD32Cu;
    {
        const bool branch_taken_0x2cd32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD32Cu;
        // 0x2cd330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd32c) {
            ctx->pc = 0x2CD344u;
            goto label_2cd344;
        }
    }
    ctx->pc = 0x2CD334u;
label_2cd334:
    // 0x2cd334: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2cd338:
    if (ctx->pc == 0x2CD338u) {
        ctx->pc = 0x2CD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD334u;
        // 0x2cd338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD33Cu;
        goto label_2cd33c;
    }
    ctx->pc = 0x2CD334u;
    {
        const bool branch_taken_0x2cd334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD334u;
        // 0x2cd338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd334) {
            ctx->pc = 0x2CD354u;
            goto label_2cd354;
        }
    }
    ctx->pc = 0x2CD33Cu;
label_2cd33c:
    // 0x2cd33c: 0x10000066  b           . + 4 + (0x66 << 2)
label_2cd340:
    if (ctx->pc == 0x2CD340u) {
        ctx->pc = 0x2CD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD33Cu;
        // 0x2cd340: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD344u;
        goto label_2cd344;
    }
    ctx->pc = 0x2CD33Cu;
    {
        const bool branch_taken_0x2cd33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD33Cu;
        // 0x2cd340: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd33c) {
            ctx->pc = 0x2CD4D8u;
            goto label_2cd4d8;
        }
    }
    ctx->pc = 0x2CD344u;
label_2cd344:
    // 0x2cd344: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_2cd348:
    if (ctx->pc == 0x2CD348u) {
        ctx->pc = 0x2CD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD344u;
        // 0x2cd348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD34Cu;
        goto label_2cd34c;
    }
    ctx->pc = 0x2CD344u;
    {
        const bool branch_taken_0x2cd344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD344u;
        // 0x2cd348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd344) {
            ctx->pc = 0x2CD4A0u;
            goto label_2cd4a0;
        }
    }
    ctx->pc = 0x2CD34Cu;
label_2cd34c:
    // 0x2cd34c: 0x10000062  b           . + 4 + (0x62 << 2)
label_2cd350:
    if (ctx->pc == 0x2CD350u) {
        ctx->pc = 0x2CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD34Cu;
        // 0x2cd350: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD354u;
        goto label_2cd354;
    }
    ctx->pc = 0x2CD34Cu;
    {
        const bool branch_taken_0x2cd34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD34Cu;
        // 0x2cd350: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd34c) {
            ctx->pc = 0x2CD4D8u;
            goto label_2cd4d8;
        }
    }
    ctx->pc = 0x2CD354u;
label_2cd354:
    // 0x2cd354: 0xc0a367c  jal         func_28D9F0
label_2cd358:
    if (ctx->pc == 0x2CD358u) {
        ctx->pc = 0x2CD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD354u;
        // 0x2cd358: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD35Cu;
        goto label_2cd35c;
    }
    ctx->pc = 0x2CD354u;
    SET_GPR_U32(ctx, 31, 0x2CD35Cu);
    ctx->pc = 0x2CD358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD354u;
    // 0x2cd358: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CD354u, 0x2CD35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD35Cu;
label_2cd35c:
    // 0x2cd35c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd360:
    // 0x2cd360: 0x5200005b  beql        $s0, $zero, . + 4 + (0x5B << 2)
label_2cd364:
    if (ctx->pc == 0x2CD364u) {
        ctx->pc = 0x2CD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD360u;
        // 0x2cd364: 0xa6350024  sh          $s5, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD368u;
        goto label_2cd368;
    }
    ctx->pc = 0x2CD360u;
    {
        const bool branch_taken_0x2cd360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd360) {
            ctx->pc = 0x2CD364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD360u;
            // 0x2cd364: 0xa6350024  sh          $s5, 0x24($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD4D0u;
            goto label_2cd4d0;
        }
    }
    ctx->pc = 0x2CD368u;
label_2cd368:
    // 0x2cd368: 0xc10587a  jal         func_4161E8
label_2cd36c:
    if (ctx->pc == 0x2CD36Cu) {
        ctx->pc = 0x2CD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD368u;
        // 0x2cd36c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD370u;
        goto label_2cd370;
    }
    ctx->pc = 0x2CD368u;
    SET_GPR_U32(ctx, 31, 0x2CD370u);
    ctx->pc = 0x2CD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD368u;
    // 0x2cd36c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CD368u, 0x2CD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD370u;
label_2cd370:
    // 0x2cd370: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cd370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2cd374:
    // 0x2cd374: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cd374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd378:
    // 0x2cd378: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2cd378u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2cd37c:
    // 0x2cd37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd380:
    // 0x2cd380: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2cd380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2cd384:
    // 0x2cd384: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cd384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cd388:
    // 0x2cd388: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cd388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd38c:
    // 0x2cd38c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2cd38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cd390:
    // 0x2cd390: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cd390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd394:
    // 0x2cd394: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cd394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cd398:
    // 0x2cd398: 0xc0bee7a  jal         func_2FB9E8
label_2cd39c:
    if (ctx->pc == 0x2CD39Cu) {
        ctx->pc = 0x2CD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD398u;
        // 0x2cd39c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD3A0u;
        goto label_2cd3a0;
    }
    ctx->pc = 0x2CD398u;
    SET_GPR_U32(ctx, 31, 0x2CD3A0u);
    ctx->pc = 0x2CD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD398u;
    // 0x2cd39c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2CD398u, 0x2CD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3A0u;
label_2cd3a0:
    // 0x2cd3a0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2cd3a4:
    if (ctx->pc == 0x2CD3A4u) {
        ctx->pc = 0x2CD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3A0u;
        // 0x2cd3a4: 0xa6350024  sh          $s5, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD3A8u;
        goto label_2cd3a8;
    }
    ctx->pc = 0x2CD3A0u;
    {
        const bool branch_taken_0x2cd3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3A0u;
        // 0x2cd3a4: 0xa6350024  sh          $s5, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3a0) {
            ctx->pc = 0x2CD4D0u;
            goto label_2cd4d0;
        }
    }
    ctx->pc = 0x2CD3A8u;
label_2cd3a8:
    // 0x2cd3a8: 0x96220026  lhu         $v0, 0x26($s1)
    ctx->pc = 0x2cd3a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
label_2cd3ac:
    // 0x2cd3ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cd3b0:
    // 0x2cd3b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2cd3b4:
    // 0x2cd3b4: 0xc10587a  jal         func_4161E8
label_2cd3b8:
    if (ctx->pc == 0x2CD3B8u) {
        ctx->pc = 0x2CD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3B4u;
        // 0x2cd3b8: 0xa6220026  sh          $v0, 0x26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD3BCu;
        goto label_2cd3bc;
    }
    ctx->pc = 0x2CD3B4u;
    SET_GPR_U32(ctx, 31, 0x2CD3BCu);
    ctx->pc = 0x2CD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3B4u;
    // 0x2cd3b8: 0xa6220026  sh          $v0, 0x26($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CD3B4u, 0x2CD3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3BCu;
label_2cd3bc:
    // 0x2cd3bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cd3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd3c0:
    // 0x2cd3c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd3c4:
    // 0x2cd3c4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2cd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2cd3c8:
    // 0x2cd3c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd3cc:
    // 0x2cd3cc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2cd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2cd3d0:
    // 0x2cd3d0: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2cd3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2cd3d4:
    // 0x2cd3d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cd3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cd3d8:
    // 0x2cd3d8: 0xc0cdb38  jal         func_336CE0
label_2cd3dc:
    if (ctx->pc == 0x2CD3DCu) {
        ctx->pc = 0x2CD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3D8u;
        // 0x2cd3dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD3E0u;
        goto label_2cd3e0;
    }
    ctx->pc = 0x2CD3D8u;
    SET_GPR_U32(ctx, 31, 0x2CD3E0u);
    ctx->pc = 0x2CD3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3D8u;
    // 0x2cd3dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CD3D8u, 0x2CD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3E0u;
label_2cd3e0:
    // 0x2cd3e0: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2cd3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2cd3e4:
    // 0x2cd3e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cd3e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cd3e8:
    // 0x2cd3e8: 0x0  nop
    ctx->pc = 0x2cd3e8u;
    // NOP
label_2cd3ec:
    // 0x2cd3ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cd3f0:
    // 0x2cd3f0: 0x0  nop
    ctx->pc = 0x2cd3f0u;
    // NOP
label_2cd3f4:
    // 0x2cd3f4: 0x45010037  bc1t        . + 4 + (0x37 << 2)
label_2cd3f8:
    if (ctx->pc == 0x2CD3F8u) {
        ctx->pc = 0x2CD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3F4u;
        // 0x2cd3f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD3FCu;
        goto label_2cd3fc;
    }
    ctx->pc = 0x2CD3F4u;
    {
        const bool branch_taken_0x2cd3f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3F4u;
        // 0x2cd3f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3f4) {
            ctx->pc = 0x2CD4D4u;
            goto label_2cd4d4;
        }
    }
    ctx->pc = 0x2CD3FCu;
label_2cd3fc:
    // 0x2cd3fc: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2cd3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2cd400:
    // 0x2cd400: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_2cd404:
    if (ctx->pc == 0x2CD404u) {
        ctx->pc = 0x2CD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD400u;
        // 0x2cd404: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD408u;
        goto label_2cd408;
    }
    ctx->pc = 0x2CD400u;
    {
        const bool branch_taken_0x2cd400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD400u;
        // 0x2cd404: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd400) {
            ctx->pc = 0x2CD470u;
            goto label_2cd470;
        }
    }
    ctx->pc = 0x2CD408u;
label_2cd408:
    // 0x2cd408: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2cd408u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_2cd40c:
    // 0x2cd40c: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x2cd40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2cd410:
    // 0x2cd410: 0xc0e4060  jal         func_390180
label_2cd414:
    if (ctx->pc == 0x2CD414u) {
        ctx->pc = 0x2CD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD410u;
        // 0x2cd414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD418u;
        goto label_2cd418;
    }
    ctx->pc = 0x2CD410u;
    SET_GPR_U32(ctx, 31, 0x2CD418u);
    ctx->pc = 0x2CD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD410u;
    // 0x2cd414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CD410u, 0x2CD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD418u;
label_2cd418:
    // 0x2cd418: 0xc0e6ee8  jal         func_39BBA0
label_2cd41c:
    if (ctx->pc == 0x2CD41Cu) {
        ctx->pc = 0x2CD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD418u;
        // 0x2cd41c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD420u;
        goto label_2cd420;
    }
    ctx->pc = 0x2CD418u;
    SET_GPR_U32(ctx, 31, 0x2CD420u);
    ctx->pc = 0x2CD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD418u;
    // 0x2cd41c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x2CD418u, 0x2CD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD420u;
label_2cd420:
    // 0x2cd420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd424:
    // 0x2cd424: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_2cd428:
    if (ctx->pc == 0x2CD428u) {
        ctx->pc = 0x2CD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD424u;
        // 0x2cd428: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD42Cu;
        goto label_2cd42c;
    }
    ctx->pc = 0x2CD424u;
    {
        const bool branch_taken_0x2cd424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd424) {
            ctx->pc = 0x2CD428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD424u;
            // 0x2cd428: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD45Cu;
            goto label_2cd45c;
        }
    }
    ctx->pc = 0x2CD42Cu;
label_2cd42c:
    // 0x2cd42c: 0xc0e8b48  jal         func_3A2D20
label_2cd430:
    if (ctx->pc == 0x2CD430u) {
        ctx->pc = 0x2CD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD42Cu;
        // 0x2cd430: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD434u;
        goto label_2cd434;
    }
    ctx->pc = 0x2CD42Cu;
    SET_GPR_U32(ctx, 31, 0x2CD434u);
    ctx->pc = 0x2CD430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD42Cu;
    // 0x2cd430: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2CD42Cu, 0x2CD434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD434u;
label_2cd434:
    // 0x2cd434: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x2cd434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_2cd438:
    // 0x2cd438: 0xc0e8b68  jal         func_3A2DA0
label_2cd43c:
    if (ctx->pc == 0x2CD43Cu) {
        ctx->pc = 0x2CD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD438u;
        // 0x2cd43c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD440u;
        goto label_2cd440;
    }
    ctx->pc = 0x2CD438u;
    SET_GPR_U32(ctx, 31, 0x2CD440u);
    ctx->pc = 0x2CD43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD438u;
    // 0x2cd43c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2CD438u, 0x2CD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD440u;
label_2cd440:
    // 0x2cd440: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x2cd440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_2cd444:
    // 0x2cd444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cd444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd448:
    // 0x2cd448: 0xc0e8b80  jal         func_3A2E00
label_2cd44c:
    if (ctx->pc == 0x2CD44Cu) {
        ctx->pc = 0x2CD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD448u;
        // 0x2cd44c: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD450u;
        goto label_2cd450;
    }
    ctx->pc = 0x2CD448u;
    SET_GPR_U32(ctx, 31, 0x2CD450u);
    ctx->pc = 0x2CD44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD448u;
    // 0x2cd44c: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2CD448u, 0x2CD450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD450u;
label_2cd450:
    // 0x2cd450: 0xc0e8b50  jal         func_3A2D40
label_2cd454:
    if (ctx->pc == 0x2CD454u) {
        ctx->pc = 0x2CD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD450u;
        // 0x2cd454: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD458u;
        goto label_2cd458;
    }
    ctx->pc = 0x2CD450u;
    SET_GPR_U32(ctx, 31, 0x2CD458u);
    ctx->pc = 0x2CD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD450u;
    // 0x2cd454: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2CD450u, 0x2CD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD458u;
label_2cd458:
    // 0x2cd458: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2cd458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2cd45c:
    // 0x2cd45c: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x2cd45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2cd460:
    // 0x2cd460: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2cd464:
    if (ctx->pc == 0x2CD464u) {
        ctx->pc = 0x2CD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD460u;
        // 0x2cd464: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD468u;
        goto label_2cd468;
    }
    ctx->pc = 0x2CD460u;
    {
        const bool branch_taken_0x2cd460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD460u;
        // 0x2cd464: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd460) {
            ctx->pc = 0x2CD410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd410;
        }
    }
    ctx->pc = 0x2CD468u;
label_2cd468:
    // 0x2cd468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd46c:
    // 0x2cd46c: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x2cd46cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_2cd470:
    // 0x2cd470: 0xc0a367c  jal         func_28D9F0
label_2cd474:
    if (ctx->pc == 0x2CD474u) {
        ctx->pc = 0x2CD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD470u;
        // 0x2cd474: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD478u;
        goto label_2cd478;
    }
    ctx->pc = 0x2CD470u;
    SET_GPR_U32(ctx, 31, 0x2CD478u);
    ctx->pc = 0x2CD474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD470u;
    // 0x2cd474: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CD470u, 0x2CD478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD478u;
label_2cd478:
    // 0x2cd478: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cd47c:
    if (ctx->pc == 0x2CD47Cu) {
        ctx->pc = 0x2CD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD478u;
        // 0x2cd47c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD480u;
        goto label_2cd480;
    }
    ctx->pc = 0x2CD478u;
    {
        const bool branch_taken_0x2cd478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD478u;
        // 0x2cd47c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd478) {
            ctx->pc = 0x2CD494u;
            goto label_2cd494;
        }
    }
    ctx->pc = 0x2CD480u;
label_2cd480:
    // 0x2cd480: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cd480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd484:
    // 0x2cd484: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2cd484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2cd488:
    // 0x2cd488: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cd488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd48c:
    // 0x2cd48c: 0xc0bed3c  jal         func_2FB4F0
label_2cd490:
    if (ctx->pc == 0x2CD490u) {
        ctx->pc = 0x2CD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD48Cu;
        // 0x2cd490: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD494u;
        goto label_2cd494;
    }
    ctx->pc = 0x2CD48Cu;
    SET_GPR_U32(ctx, 31, 0x2CD494u);
    ctx->pc = 0x2CD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD48Cu;
    // 0x2cd490: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB4F0u, 0x2CD48Cu, 0x2CD494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD494u;
label_2cd494:
    // 0x2cd494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cd498:
    // 0x2cd498: 0x1000000d  b           . + 4 + (0xD << 2)
label_2cd49c:
    if (ctx->pc == 0x2CD49Cu) {
        ctx->pc = 0x2CD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD498u;
        // 0x2cd49c: 0xa6220024  sh          $v0, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD4A0u;
        goto label_2cd4a0;
    }
    ctx->pc = 0x2CD498u;
    {
        const bool branch_taken_0x2cd498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD498u;
        // 0x2cd49c: 0xa6220024  sh          $v0, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd498) {
            ctx->pc = 0x2CD4D0u;
            goto label_2cd4d0;
        }
    }
    ctx->pc = 0x2CD4A0u;
label_2cd4a0:
    // 0x2cd4a0: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2cd4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2cd4a4:
    // 0x2cd4a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2cd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2cd4a8:
    // 0x2cd4a8: 0x38420017  xori        $v0, $v0, 0x17
    ctx->pc = 0x2cd4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)23);
label_2cd4ac:
    // 0x2cd4ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cd4b0:
    if (ctx->pc == 0x2CD4B0u) {
        ctx->pc = 0x2CD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4ACu;
        // 0x2cd4b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD4B4u;
        goto label_2cd4b4;
    }
    ctx->pc = 0x2CD4ACu;
    {
        const bool branch_taken_0x2cd4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4ACu;
        // 0x2cd4b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4ac) {
            ctx->pc = 0x2CD4C8u;
            goto label_2cd4c8;
        }
    }
    ctx->pc = 0x2CD4B4u;
label_2cd4b4:
    // 0x2cd4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4b8:
    // 0x2cd4b8: 0xc08997c  jal         func_2265F0
label_2cd4bc:
    if (ctx->pc == 0x2CD4BCu) {
        ctx->pc = 0x2CD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4B8u;
        // 0x2cd4bc: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD4C0u;
        goto label_2cd4c0;
    }
    ctx->pc = 0x2CD4B8u;
    SET_GPR_U32(ctx, 31, 0x2CD4C0u);
    ctx->pc = 0x2CD4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4B8u;
    // 0x2cd4bc: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2CD4B8u, 0x2CD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4C0u;
label_2cd4c0:
    // 0x2cd4c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cd4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4c4:
    // 0x2cd4c4: 0x2a2200a  movz        $a0, $s5, $v0
    ctx->pc = 0x2cd4c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
label_2cd4c8:
    // 0x2cd4c8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_2cd4cc:
    if (ctx->pc == 0x2CD4CCu) {
        ctx->pc = 0x2CD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4C8u;
        // 0x2cd4cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD4D0u;
        goto label_2cd4d0;
    }
    ctx->pc = 0x2CD4C8u;
    {
        const bool branch_taken_0x2cd4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4C8u;
        // 0x2cd4cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4c8) {
            ctx->pc = 0x2CD4D4u;
            goto label_2cd4d4;
        }
    }
    ctx->pc = 0x2CD4D0u;
label_2cd4d0:
    // 0x2cd4d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4d4:
    // 0x2cd4d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cd4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd4d8:
    // 0x2cd4d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cd4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cd4dc:
    // 0x2cd4dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cd4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cd4e0:
    // 0x2cd4e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cd4e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cd4e4:
    // 0x2cd4e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cd4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cd4e8:
    // 0x2cd4e8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2cd4e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd4ec:
    // 0x2cd4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd4f0:
    // 0x2cd4f0: 0x3e00008  jr          $ra
label_2cd4f4:
    if (ctx->pc == 0x2CD4F4u) {
        ctx->pc = 0x2CD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4F0u;
        // 0x2cd4f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD4F8u;
        goto label_fallthrough_0x2cd4f0;
    }
    ctx->pc = 0x2CD4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4F0u;
        // 0x2cd4f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd4f0:
    ctx->pc = 0x2CD4F8u;
}
