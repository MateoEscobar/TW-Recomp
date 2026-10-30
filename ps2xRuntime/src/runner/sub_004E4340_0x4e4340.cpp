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

// Function: sub_004E4340
// Address: 0x4e4340 - 0x4e44e0
void sub_004E4340_0x4e4340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4340_0x4e4340");
#endif

    switch (ctx->pc) {
        case 0x4e4340u: goto label_4e4340;
        case 0x4e4344u: goto label_4e4344;
        case 0x4e4348u: goto label_4e4348;
        case 0x4e434cu: goto label_4e434c;
        case 0x4e4350u: goto label_4e4350;
        case 0x4e4354u: goto label_4e4354;
        case 0x4e4358u: goto label_4e4358;
        case 0x4e435cu: goto label_4e435c;
        case 0x4e4360u: goto label_4e4360;
        case 0x4e4364u: goto label_4e4364;
        case 0x4e4368u: goto label_4e4368;
        case 0x4e436cu: goto label_4e436c;
        case 0x4e4370u: goto label_4e4370;
        case 0x4e4374u: goto label_4e4374;
        case 0x4e4378u: goto label_4e4378;
        case 0x4e437cu: goto label_4e437c;
        case 0x4e4380u: goto label_4e4380;
        case 0x4e4384u: goto label_4e4384;
        case 0x4e4388u: goto label_4e4388;
        case 0x4e438cu: goto label_4e438c;
        case 0x4e4390u: goto label_4e4390;
        case 0x4e4394u: goto label_4e4394;
        case 0x4e4398u: goto label_4e4398;
        case 0x4e439cu: goto label_4e439c;
        case 0x4e43a0u: goto label_4e43a0;
        case 0x4e43a4u: goto label_4e43a4;
        case 0x4e43a8u: goto label_4e43a8;
        case 0x4e43acu: goto label_4e43ac;
        case 0x4e43b0u: goto label_4e43b0;
        case 0x4e43b4u: goto label_4e43b4;
        case 0x4e43b8u: goto label_4e43b8;
        case 0x4e43bcu: goto label_4e43bc;
        case 0x4e43c0u: goto label_4e43c0;
        case 0x4e43c4u: goto label_4e43c4;
        case 0x4e43c8u: goto label_4e43c8;
        case 0x4e43ccu: goto label_4e43cc;
        case 0x4e43d0u: goto label_4e43d0;
        case 0x4e43d4u: goto label_4e43d4;
        case 0x4e43d8u: goto label_4e43d8;
        case 0x4e43dcu: goto label_4e43dc;
        case 0x4e43e0u: goto label_4e43e0;
        case 0x4e43e4u: goto label_4e43e4;
        case 0x4e43e8u: goto label_4e43e8;
        case 0x4e43ecu: goto label_4e43ec;
        case 0x4e43f0u: goto label_4e43f0;
        case 0x4e43f4u: goto label_4e43f4;
        case 0x4e43f8u: goto label_4e43f8;
        case 0x4e43fcu: goto label_4e43fc;
        case 0x4e4400u: goto label_4e4400;
        case 0x4e4404u: goto label_4e4404;
        case 0x4e4408u: goto label_4e4408;
        case 0x4e440cu: goto label_4e440c;
        case 0x4e4410u: goto label_4e4410;
        case 0x4e4414u: goto label_4e4414;
        case 0x4e4418u: goto label_4e4418;
        case 0x4e441cu: goto label_4e441c;
        case 0x4e4420u: goto label_4e4420;
        case 0x4e4424u: goto label_4e4424;
        case 0x4e4428u: goto label_4e4428;
        case 0x4e442cu: goto label_4e442c;
        case 0x4e4430u: goto label_4e4430;
        case 0x4e4434u: goto label_4e4434;
        case 0x4e4438u: goto label_4e4438;
        case 0x4e443cu: goto label_4e443c;
        case 0x4e4440u: goto label_4e4440;
        case 0x4e4444u: goto label_4e4444;
        case 0x4e4448u: goto label_4e4448;
        case 0x4e444cu: goto label_4e444c;
        case 0x4e4450u: goto label_4e4450;
        case 0x4e4454u: goto label_4e4454;
        case 0x4e4458u: goto label_4e4458;
        case 0x4e445cu: goto label_4e445c;
        case 0x4e4460u: goto label_4e4460;
        case 0x4e4464u: goto label_4e4464;
        case 0x4e4468u: goto label_4e4468;
        case 0x4e446cu: goto label_4e446c;
        case 0x4e4470u: goto label_4e4470;
        case 0x4e4474u: goto label_4e4474;
        case 0x4e4478u: goto label_4e4478;
        case 0x4e447cu: goto label_4e447c;
        case 0x4e4480u: goto label_4e4480;
        case 0x4e4484u: goto label_4e4484;
        case 0x4e4488u: goto label_4e4488;
        case 0x4e448cu: goto label_4e448c;
        case 0x4e4490u: goto label_4e4490;
        case 0x4e4494u: goto label_4e4494;
        case 0x4e4498u: goto label_4e4498;
        case 0x4e449cu: goto label_4e449c;
        case 0x4e44a0u: goto label_4e44a0;
        case 0x4e44a4u: goto label_4e44a4;
        case 0x4e44a8u: goto label_4e44a8;
        case 0x4e44acu: goto label_4e44ac;
        case 0x4e44b0u: goto label_4e44b0;
        case 0x4e44b4u: goto label_4e44b4;
        case 0x4e44b8u: goto label_4e44b8;
        case 0x4e44bcu: goto label_4e44bc;
        case 0x4e44c0u: goto label_4e44c0;
        case 0x4e44c4u: goto label_4e44c4;
        case 0x4e44c8u: goto label_4e44c8;
        case 0x4e44ccu: goto label_4e44cc;
        case 0x4e44d0u: goto label_4e44d0;
        case 0x4e44d4u: goto label_4e44d4;
        case 0x4e44d8u: goto label_4e44d8;
        case 0x4e44dcu: goto label_4e44dc;
        default: break;
    }

    ctx->pc = 0x4e4340u;

label_4e4340:
    // 0x4e4340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e4340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e4344:
    // 0x4e4344: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e4344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e4348:
    // 0x4e4348: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e4348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e434c:
    // 0x4e434c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e434cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4350:
    // 0x4e4350: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e4350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e4354:
    // 0x4e4354: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e4354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4358:
    // 0x4e4358: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e4358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e435c:
    // 0x4e435c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e4360:
    // 0x4e4360: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e4360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e4364:
    // 0x4e4364: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e4364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e4368:
    // 0x4e4368: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e4368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e436c:
    // 0x4e436c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4370:
    // 0x4e4370: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e4370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4374:
    // 0x4e4374: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e4374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e4378:
    // 0x4e4378: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e437c:
    if (ctx->pc == 0x4E437Cu) {
        ctx->pc = 0x4E437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4378u;
        // 0x4e437c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4380u;
        goto label_4e4380;
    }
    ctx->pc = 0x4E4378u;
    {
        const bool branch_taken_0x4e4378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4378u;
        // 0x4e437c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4378) {
            ctx->pc = 0x4E43C4u;
            goto label_4e43c4;
        }
    }
    ctx->pc = 0x4E4380u;
label_4e4380:
    // 0x4e4380: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e4384:
    if (ctx->pc == 0x4E4384u) {
        ctx->pc = 0x4E4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4380u;
        // 0x4e4384: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4388u;
        goto label_4e4388;
    }
    ctx->pc = 0x4E4380u;
    {
        const bool branch_taken_0x4e4380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4380) {
            ctx->pc = 0x4E4384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4380u;
            // 0x4e4384: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4394u;
            goto label_4e4394;
        }
    }
    ctx->pc = 0x4E4388u;
label_4e4388:
    // 0x4e4388: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e438c:
    // 0x4e438c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e438cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e4390:
    // 0x4e4390: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e4390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4394:
    // 0x4e4394: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e4394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e4398:
    // 0x4e4398: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e4398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e439c:
    // 0x4e439c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e43a0:
    // 0x4e43a0: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e43a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e43a4:
    // 0x4e43a4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e43a8:
    // 0x4e43a8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e43a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e43ac:
    // 0x4e43ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e43acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e43b0:
    // 0x4e43b0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e43b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e43b4:
    // 0x4e43b4: 0xc10c1bb  jal         func_4306EC
label_4e43b8:
    if (ctx->pc == 0x4E43B8u) {
        ctx->pc = 0x4E43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E43B4u;
        // 0x4e43b8: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E43BCu;
        goto label_4e43bc;
    }
    ctx->pc = 0x4E43B4u;
    SET_GPR_U32(ctx, 31, 0x4E43BCu);
    ctx->pc = 0x4E43B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E43B4u;
    // 0x4e43b8: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E43B4u, 0x4E43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E43BCu;
label_4e43bc:
    // 0x4e43bc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e43c0:
    if (ctx->pc == 0x4E43C0u) {
        ctx->pc = 0x4E43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E43BCu;
        // 0x4e43c0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E43C4u;
        goto label_4e43c4;
    }
    ctx->pc = 0x4E43BCu;
    {
        const bool branch_taken_0x4e43bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E43BCu;
        // 0x4e43c0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e43bc) {
            ctx->pc = 0x4E44B4u;
            goto label_4e44b4;
        }
    }
    ctx->pc = 0x4E43C4u;
label_4e43c4:
    // 0x4e43c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e43c8:
    // 0x4e43c8: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e43c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e43cc:
    // 0x4e43cc: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e43ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e43d0:
    // 0x4e43d0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e43d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e43d4:
    // 0x4e43d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e43d8:
    // 0x4e43d8: 0x249640e0  addiu       $s6, $a0, 0x40E0
    ctx->pc = 0x4e43d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
label_4e43dc:
    // 0x4e43dc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e43dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e43e0:
    // 0x4e43e0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e43e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e43e4:
    // 0x4e43e4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e43e8:
    // 0x4e43e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e43e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e43ec:
    // 0x4e43ec: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e43ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e43f0:
    // 0x4e43f0: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e43f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e43f4:
    // 0x4e43f4: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e43f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e43f8:
    // 0x4e43f8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e43fc:
    // 0x4e43fc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e4400:
    // 0x4e4400: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e4400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e4404:
    // 0x4e4404: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e4404u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e4408:
    // 0x4e4408: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e4408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e440c:
    // 0x4e440c: 0x24a54168  addiu       $a1, $a1, 0x4168
    ctx->pc = 0x4e440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16744));
label_4e4410:
    // 0x4e4410: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e4410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e4414:
    // 0x4e4414: 0x254a4170  addiu       $t2, $t2, 0x4170
    ctx->pc = 0x4e4414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16752));
label_4e4418:
    // 0x4e4418: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e4418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e441c:
    // 0x4e441c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e441cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e4420:
    // 0x4e4420: 0x40f809  jalr        $v0
label_4e4424:
    if (ctx->pc == 0x4E4424u) {
        ctx->pc = 0x4E4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4420u;
        // 0x4e4424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4428u;
        goto label_4e4428;
    }
    ctx->pc = 0x4E4420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E4428u);
        ctx->pc = 0x4E4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4420u;
        // 0x4e4424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4420u, 0x4E4428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4428u;
label_4e4428:
    // 0x4e4428: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e4428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e442c:
    // 0x4e442c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e442cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e4430:
    // 0x4e4430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4434:
    // 0x4e4434: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e4434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e4438:
    // 0x4e4438: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e4438u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e443c:
    // 0x4e443c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e443cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e4440:
    // 0x4e4440: 0xc10c1bb  jal         func_4306EC
label_4e4444:
    if (ctx->pc == 0x4E4444u) {
        ctx->pc = 0x4E4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4440u;
        // 0x4e4444: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4448u;
        goto label_4e4448;
    }
    ctx->pc = 0x4E4440u;
    SET_GPR_U32(ctx, 31, 0x4E4448u);
    ctx->pc = 0x4E4444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4440u;
    // 0x4e4444: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4440u, 0x4E4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4448u;
label_4e4448:
    // 0x4e4448: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e444c:
    if (ctx->pc == 0x4E444Cu) {
        ctx->pc = 0x4E444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4448u;
        // 0x4e444c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4450u;
        goto label_4e4450;
    }
    ctx->pc = 0x4E4448u;
    {
        const bool branch_taken_0x4e4448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4448) {
            ctx->pc = 0x4E444Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4448u;
            // 0x4e444c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E445Cu;
            goto label_4e445c;
        }
    }
    ctx->pc = 0x4E4450u;
label_4e4450:
    // 0x4e4450: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e4454:
    // 0x4e4454: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e4454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e4458:
    // 0x4e4458: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e4458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e445c:
    // 0x4e445c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e445cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e4460:
    // 0x4e4460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4464:
    // 0x4e4464: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e4464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e4468:
    // 0x4e4468: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e4468u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e446c:
    // 0x4e446c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e446cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e4470:
    // 0x4e4470: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e4470u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e4474:
    // 0x4e4474: 0xc10c1bb  jal         func_4306EC
label_4e4478:
    if (ctx->pc == 0x4E4478u) {
        ctx->pc = 0x4E4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4474u;
        // 0x4e4478: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E447Cu;
        goto label_4e447c;
    }
    ctx->pc = 0x4E4474u;
    SET_GPR_U32(ctx, 31, 0x4E447Cu);
    ctx->pc = 0x4E4478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4474u;
    // 0x4e4478: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4474u, 0x4E447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E447Cu;
label_4e447c:
    // 0x4e447c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e447cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4480:
    // 0x4e4480: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e4484:
    if (ctx->pc == 0x4E4484u) {
        ctx->pc = 0x4E4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4480u;
        // 0x4e4484: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4488u;
        goto label_4e4488;
    }
    ctx->pc = 0x4E4480u;
    {
        const bool branch_taken_0x4e4480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4480u;
        // 0x4e4484: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4480) {
            ctx->pc = 0x4E44A4u;
            goto label_4e44a4;
        }
    }
    ctx->pc = 0x4E4488u;
label_4e4488:
    // 0x4e4488: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e4488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e448c:
    // 0x4e448c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e448cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e4490:
    // 0x4e4490: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e4494:
    // 0x4e4494: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e4494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4498:
    // 0x4e4498: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e449c:
    // 0x4e449c: 0x60f809  jalr        $v1
label_4e44a0:
    if (ctx->pc == 0x4E44A0u) {
        ctx->pc = 0x4E44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E449Cu;
        // 0x4e44a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E44A4u;
        goto label_4e44a4;
    }
    ctx->pc = 0x4E449Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E44A4u);
        ctx->pc = 0x4E44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E449Cu;
        // 0x4e44a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E449Cu, 0x4E44A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E44A4u;
label_4e44a4:
    // 0x4e44a4: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e44a8:
    // 0x4e44a8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e44ac:
    // 0x4e44ac: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e44acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e44b0:
    // 0x4e44b0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e44b4:
    // 0x4e44b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e44b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e44b8:
    // 0x4e44b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e44b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e44bc:
    // 0x4e44bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e44bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e44c0:
    // 0x4e44c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e44c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e44c4:
    // 0x4e44c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e44c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e44c8:
    // 0x4e44c8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e44c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e44cc:
    // 0x4e44cc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e44ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e44d0:
    // 0x4e44d0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e44d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e44d4:
    // 0x4e44d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e44d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e44d8:
    // 0x4e44d8: 0x3e00008  jr          $ra
label_4e44dc:
    if (ctx->pc == 0x4E44DCu) {
        ctx->pc = 0x4E44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E44D8u;
        // 0x4e44dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E44E0u;
        goto label_fallthrough_0x4e44d8;
    }
    ctx->pc = 0x4E44D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E44D8u;
        // 0x4e44dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E44D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e44d8:
    ctx->pc = 0x4E44E0u;
}
