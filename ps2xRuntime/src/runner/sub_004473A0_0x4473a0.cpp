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

// Function: sub_004473A0
// Address: 0x4473a0 - 0x447560
void sub_004473A0_0x4473a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004473A0_0x4473a0");
#endif

    switch (ctx->pc) {
        case 0x447410u: goto label_447410;
        case 0x447440u: goto label_447440;
        case 0x44745cu: goto label_44745c;
        case 0x447464u: goto label_447464;
        case 0x4474acu: goto label_4474ac;
        case 0x4474d4u: goto label_4474d4;
        case 0x4474e0u: goto label_4474e0;
        case 0x447510u: goto label_447510;
        case 0x447518u: goto label_447518;
        case 0x44753cu: goto label_44753c;
        case 0x447548u: goto label_447548;
        default: break;
    }

    ctx->pc = 0x4473a0u;

    // 0x4473a0: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x4473a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x4473a4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4473a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4473a8: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x4473a8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4473ac: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4473acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4473b0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4473b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4473b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4473b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4473b8: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x4473b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x4473bc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x4473bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x4473c0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x4473c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x4473c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4473c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4473c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4473c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4473cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4473ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4473d0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x4473d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x4473d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4473d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4473d8: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4473D8u;
    {
        const bool branch_taken_0x4473d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4473d8) {
            ctx->pc = 0x4473DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4473D8u;
            // 0x4473dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4473E0u;
            goto label_4473e0;
        }
    }
    ctx->pc = 0x4473E0u;
label_4473e0:
    // 0x4473e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4473e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4473e4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x4473e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x4473e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4473e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4473ec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4473ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x4473f0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x4473f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4473f4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x4473f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x4473f8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x4473f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x4473fc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4473fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x447400: 0x4012  mflo        $t0
    ctx->pc = 0x447400u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x447404: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x447404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x447408: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x447408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x44740c: 0x0  nop
    ctx->pc = 0x44740cu;
    // NOP
label_447410:
    // 0x447410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x447410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x447414: 0x0  nop
    ctx->pc = 0x447414u;
    // NOP
    // 0x447418: 0x0  nop
    ctx->pc = 0x447418u;
    // NOP
    // 0x44741c: 0x0  nop
    ctx->pc = 0x44741cu;
    // NOP
    // 0x447420: 0x0  nop
    ctx->pc = 0x447420u;
    // NOP
    // 0x447424: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x447424u;
    {
        const bool branch_taken_0x447424 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x447424) {
            ctx->pc = 0x447410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447410;
        }
    }
    ctx->pc = 0x44742Cu;
    // 0x44742c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x44742cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x447430: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x447430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x447434: 0x24a57a38  addiu       $a1, $a1, 0x7A38
    ctx->pc = 0x447434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31288));
    // 0x447438: 0xc10f370  jal         func_43CDC0
    ctx->pc = 0x447438u;
    SET_GPR_U32(ctx, 31, 0x447440u);
    ctx->pc = 0x44743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447438u;
    // 0x44743c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDC0u, 0x447438u, 0x447440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447440u;
label_447440:
    // 0x447440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x447440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447444: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x447444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x447448: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44744c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x44744cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x447450: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x447450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x447454: 0xc10f704  jal         func_43DC10
    ctx->pc = 0x447454u;
    SET_GPR_U32(ctx, 31, 0x44745Cu);
    ctx->pc = 0x447458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447454u;
    // 0x447458: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DC10u, 0x447454u, 0x44745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44745Cu;
label_44745c:
    // 0x44745c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x44745Cu;
    SET_GPR_U32(ctx, 31, 0x447464u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x44745Cu, 0x447464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447464u;
label_447464:
    // 0x447464: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x447464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x447468: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x44746c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x44746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x447470: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x447470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x447474: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x447474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x447478: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x447478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x44747c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44747cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447480: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x447480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x447484: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x447484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x447488: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x44748c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44748cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447490: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x447490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x447494: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x447494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x447498: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x447498u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44749c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44749Cu;
    {
        const bool branch_taken_0x44749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4474A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44749Cu;
        // 0x4474a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44749c) {
            ctx->pc = 0x4474B0u;
            goto label_4474b0;
        }
    }
    ctx->pc = 0x4474A4u;
    // 0x4474a4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4474A4u;
    SET_GPR_U32(ctx, 31, 0x4474ACu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4474A4u, 0x4474ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4474ACu;
label_4474ac:
    // 0x4474ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4474acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_4474b0:
    // 0x4474b0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x4474b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x4474b4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4474b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4474b8: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x4474b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x4474bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4474bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4474c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4474c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4474c4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x4474c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x4474c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4474c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4474cc: 0xc111982  jal         func_446608
    ctx->pc = 0x4474CCu;
    SET_GPR_U32(ctx, 31, 0x4474D4u);
    ctx->pc = 0x4474D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4474CCu;
    // 0x4474d0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x4474CCu, 0x4474D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4474D4u;
label_4474d4:
    // 0x4474d4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x4474d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4474d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4474d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4474dc: 0x0  nop
    ctx->pc = 0x4474dcu;
    // NOP
label_4474e0:
    // 0x4474e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4474e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4474e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4474e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4474e8: 0x0  nop
    ctx->pc = 0x4474e8u;
    // NOP
    // 0x4474ec: 0x0  nop
    ctx->pc = 0x4474ecu;
    // NOP
    // 0x4474f0: 0x0  nop
    ctx->pc = 0x4474f0u;
    // NOP
    // 0x4474f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4474F4u;
    {
        const bool branch_taken_0x4474f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4474f4) {
            ctx->pc = 0x4474E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4474e0;
        }
    }
    ctx->pc = 0x4474FCu;
    // 0x4474fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4474FCu;
    {
        const bool branch_taken_0x4474fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x447500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4474FCu;
        // 0x447500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4474fc) {
            ctx->pc = 0x447510u;
            goto label_447510;
        }
    }
    ctx->pc = 0x447504u;
    // 0x447504: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x447504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x447508: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x447508u;
    SET_GPR_U32(ctx, 31, 0x447510u);
    ctx->pc = 0x44750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447508u;
    // 0x44750c: 0x24a5e128  addiu       $a1, $a1, -0x1ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x447508u, 0x447510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447510u;
label_447510:
    // 0x447510: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x447514: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x447514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_447518:
    // 0x447518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x447518u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x44751c: 0x0  nop
    ctx->pc = 0x44751cu;
    // NOP
    // 0x447520: 0x0  nop
    ctx->pc = 0x447520u;
    // NOP
    // 0x447524: 0x0  nop
    ctx->pc = 0x447524u;
    // NOP
    // 0x447528: 0x0  nop
    ctx->pc = 0x447528u;
    // NOP
    // 0x44752c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44752Cu;
    {
        const bool branch_taken_0x44752c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x44752c) {
            ctx->pc = 0x447518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447518;
        }
    }
    ctx->pc = 0x447534u;
    // 0x447534: 0xc10f6ea  jal         func_43DBA8
    ctx->pc = 0x447534u;
    SET_GPR_U32(ctx, 31, 0x44753Cu);
    ctx->pc = 0x447538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447534u;
    // 0x447538: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DBA8u, 0x447534u, 0x44753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44753Cu;
label_44753c:
    // 0x44753c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x44753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447540: 0xc10f374  jal         func_43CDD0
    ctx->pc = 0x447540u;
    SET_GPR_U32(ctx, 31, 0x447548u);
    ctx->pc = 0x447544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447540u;
    // 0x447544: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDD0u, 0x447540u, 0x447548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447548u;
label_447548:
    // 0x447548: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x447548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44754c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x44754cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x447550: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x447550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x447554: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x447554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x447558: 0x3e00008  jr          $ra
    ctx->pc = 0x447558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447558u;
        // 0x44755c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447560u;
}
