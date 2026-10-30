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

// Function: sub_004A4448
// Address: 0x4a4448 - 0x4a4690
void sub_004A4448_0x4a4448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4448_0x4a4448");
#endif

    switch (ctx->pc) {
        case 0x4a448cu: goto label_4a448c;
        default: break;
    }

    ctx->pc = 0x4a4448u;

    // 0x4a4448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a4448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a444c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4a4450: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a4450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a4454: 0x2443f940  addiu       $v1, $v0, -0x6C0
    ctx->pc = 0x4a4454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
    // 0x4a4458: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a4458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a445c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a4460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a4464: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a4464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a4468: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x4a4468u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x52F964u));
    // 0x4a446c: 0x12200080  beqz        $s1, . + 4 + (0x80 << 2)
    ctx->pc = 0x4A446Cu;
    {
        const bool branch_taken_0x4a446c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A446Cu;
        // 0x4a4470: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a446c) {
            ctx->pc = 0x4A4670u;
            goto label_4a4670;
        }
    }
    ctx->pc = 0x4A4474u;
    // 0x4a4474: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x4a4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a4478: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a4478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4a447c: 0x8c720028  lw          $s2, 0x28($v1)
    ctx->pc = 0x4a447cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x4a4480: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x4a4480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4a4484: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4A4484u;
    SET_GPR_U32(ctx, 31, 0x4A448Cu);
    ctx->pc = 0x4A4488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4484u;
    // 0x4a4488: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4A4484u, 0x4A448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A448Cu;
label_4a448c:
    // 0x4a448c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x4a448cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x4a4490: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4a4490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4a4494: 0x34c68004  ori         $a2, $a2, 0x8004
    ctx->pc = 0x4a4494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32772);
    // 0x4a4498: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4a4498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a449c: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x4a449cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x4a44a0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4a44a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a44a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x4a44a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4a44ac: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a44acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4a44b0: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x4a44b0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a44b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a44b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a44b8: 0x9e02000c  lwu         $v0, 0xC($s0)
    ctx->pc = 0x4a44b8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a44bc: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x4a44bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4a44c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a44c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a44c4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x4a44c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x4a44c8: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A44C8u;
    {
        const bool branch_taken_0x4a44c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4A44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A44C8u;
        // 0x4a44cc: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a44c8) {
            ctx->pc = 0x4A4510u;
            goto label_4a4510;
        }
    }
    ctx->pc = 0x4A44D0u;
    // 0x4a44d0: 0x8f828744  lw          $v0, -0x78BC($gp)
    ctx->pc = 0x4a44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
    // 0x4a44d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a44d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a44d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A44D8u;
    {
        const bool branch_taken_0x4a44d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A44D8u;
        // 0x4a44dc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a44d8) {
            ctx->pc = 0x4A44E8u;
            goto label_4a44e8;
        }
    }
    ctx->pc = 0x4A44E0u;
    // 0x4a44e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A44E0u;
    {
        const bool branch_taken_0x4a44e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A44E0u;
        // 0x4a44e4: 0xdc44f7e0  ld          $a0, -0x820($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294965216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a44e0) {
            ctx->pc = 0x4A44F0u;
            goto label_4a44f0;
        }
    }
    ctx->pc = 0x4A44E8u;
label_4a44e8:
    // 0x4a44e8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a44ec: 0xdc44f670  ld          $a0, -0x990($v0)
    ctx->pc = 0x4a44ecu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x70F670u));
label_4a44f0:
    // 0x4a44f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a44f4: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x4a44f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x4a44f8: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x4a44f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x4a44fc: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x4a44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x4a4500: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a4500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a4504: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x4a4504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4a4508: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x4a4508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x4a450c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4a450cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a4510:
    // 0x4a4510: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4a4510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a4514: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4a4514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a4518: 0x72200b  movn        $a0, $v1, $s2
    ctx->pc = 0x4a4518u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x4a451c: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x4a451cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x4a4520: 0x8f88898c  lw          $t0, -0x7674($gp)
    ctx->pc = 0x4a4520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4a4524: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x4a4524u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x4a4528: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4a4528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4a452c: 0xaf88898c  sw          $t0, -0x7674($gp)
    ctx->pc = 0x4a452cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 8));
    // 0x4a4530: 0xdf868718  ld          $a2, -0x78E8($gp)
    ctx->pc = 0x4a4530u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x4a4534: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x4a4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x4a4538: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4a4538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4a453c: 0x3442ffe7  ori         $v0, $v0, 0xFFE7
    ctx->pc = 0x4a453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65511);
    // 0x4a4540: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4a4540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4a4544: 0x3442fde3  ori         $v0, $v0, 0xFDE3
    ctx->pc = 0x4a4544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64995);
    // 0x4a4548: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x4a4548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x4a454c: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x4a454cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4a4550: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a4550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a4554: 0xff868718  sd          $a2, -0x78E8($gp)
    ctx->pc = 0x4a4554u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 6));
    // 0x4a4558: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4a4558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4a455c: 0x42b02  srl         $a1, $a0, 12
    ctx->pc = 0x4a455cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x4a4560: 0xf2180b  movn        $v1, $a3, $s2
    ctx->pc = 0x4a4560u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x4a4564: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x4a4564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4a4568: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x4a4568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x4a456c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a456cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4a4570: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x4a4570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x4a4574: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a4574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a4578: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x4a4578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x4a457c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a457cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a4580: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4a4580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4a4584: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x4a4584u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x4a4588: 0xff868718  sd          $a2, -0x78E8($gp)
    ctx->pc = 0x4a4588u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 6));
    // 0x4a458c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x4a458cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x4a4590: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x4a4590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4a4594: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a4594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4a4598: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4a4598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a459c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x4a459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x4a45a0: 0x8e65f940  lw          $a1, -0x6C0($s3)
    ctx->pc = 0x4a45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
    // 0x4a45a4: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x4a45a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x4a45a8: 0x31538  dsll        $v0, $v1, 20
    ctx->pc = 0x4a45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 20);
    // 0x4a45ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a45acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a45b0: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A45B0u;
    {
        const bool branch_taken_0x4a45b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A45B0u;
        // 0x4a45b4: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a45b0) {
            ctx->pc = 0x4A4618u;
            goto label_4a4618;
        }
    }
    ctx->pc = 0x4A45B8u;
    // 0x4a45b8: 0x9e03001c  lwu         $v1, 0x1C($s0)
    ctx->pc = 0x4a45b8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4a45bc: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x4a45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x4a45c0: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x4a45c0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4a45c4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x4a45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x4a45c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a45cc: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x4a45ccu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4a45d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4a45d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4a45d4: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x4a45d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x4a45d8: 0x70451b89  pcpyld      $v1, $v0, $a1
    ctx->pc = 0x4a45d8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x4a45dc: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x4a45dcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x4a45e0: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x4a45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x4a45e4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a45e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4a45e8: 0x9e050020  lwu         $a1, 0x20($s0)
    ctx->pc = 0x4a45e8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4a45ec: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x4a45ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x4a45f0: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x4a45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4a45f4: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x4a45f4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4a45f8: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x4a45f8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4a45fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a45fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a4600: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4a4600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4a4604: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x4a4604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x4a4608: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x4a4608u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x4a460c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4A460Cu;
    {
        const bool branch_taken_0x4a460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A460Cu;
        // 0x4a4610: 0x7d030020  sq          $v1, 0x20($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a460c) {
            ctx->pc = 0x4A4668u;
            goto label_4a4668;
        }
    }
    ctx->pc = 0x4A4614u;
    // 0x4a4614: 0x0  nop
    ctx->pc = 0x4a4614u;
    // NOP
label_4a4618:
    // 0x4a4618: 0x9e03001c  lwu         $v1, 0x1C($s0)
    ctx->pc = 0x4a4618u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4a461c: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x4a461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x4a4620: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x4a4620u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4a4624: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x4a4624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x4a4628: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a4628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a462c: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x4a462cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4a4630: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x4a4630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4a4634: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x4a4634u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x4a4638: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x4a4638u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x4a463c: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x4a463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x4a4640: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a4640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4a4644: 0x9e050020  lwu         $a1, 0x20($s0)
    ctx->pc = 0x4a4644u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4a4648: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x4a4648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x4a464c: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x4a464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4a4650: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x4a4650u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4a4654: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x4a4654u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4a4658: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a4658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a465c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x4a465cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4a4660: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x4a4660u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x4a4664: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x4a4664u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
label_4a4668:
    // 0x4a4668: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x4a4668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x4a466c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a466cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a4670:
    // 0x4a4670: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a4670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a4674: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a4674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a4678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a467c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a467cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4684: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4684u;
        // 0x4a4688: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A468Cu;
    // 0x4a468c: 0x0  nop
    ctx->pc = 0x4a468cu;
    // NOP
    ctx->pc = 0x4a4690u;
}
