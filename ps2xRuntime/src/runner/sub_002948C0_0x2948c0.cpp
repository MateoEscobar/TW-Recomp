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

// Function: sub_002948C0
// Address: 0x2948c0 - 0x294a20
void sub_002948C0_0x2948c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002948C0_0x2948c0");
#endif

    switch (ctx->pc) {
        case 0x2948f0u: goto label_2948f0;
        case 0x2948fcu: goto label_2948fc;
        case 0x294928u: goto label_294928;
        case 0x294950u: goto label_294950;
        case 0x294978u: goto label_294978;
        case 0x2949a0u: goto label_2949a0;
        case 0x2949c8u: goto label_2949c8;
        case 0x2949d4u: goto label_2949d4;
        case 0x2949f0u: goto label_2949f0;
        case 0x2949fcu: goto label_2949fc;
        default: break;
    }

    ctx->pc = 0x2948c0u;

    // 0x2948c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2948c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2948c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2948c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2948c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2948c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2948cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2948ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2948d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2948d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2948d4: 0x14a2004c  bne         $a1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2948D4u;
    {
        const bool branch_taken_0x2948d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2948D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948D4u;
        // 0x2948d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948d4) {
            ctx->pc = 0x294A08u;
            goto label_294a08;
        }
    }
    ctx->pc = 0x2948DCu;
    // 0x2948dc: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2948DCu;
    {
        const bool branch_taken_0x2948dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2948E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948DCu;
        // 0x2948e0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948dc) {
            ctx->pc = 0x294A08u;
            goto label_294a08;
        }
    }
    ctx->pc = 0x2948E4u;
    // 0x2948e4: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x2948e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2948e8: 0x2450de30  addiu       $s0, $v0, -0x21D0
    ctx->pc = 0x2948e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x2948ec: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2948ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2948f0:
    // 0x2948f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2948f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2948f4: 0xc0a654c  jal         func_299530
    ctx->pc = 0x2948F4u;
    SET_GPR_U32(ctx, 31, 0x2948FCu);
    ctx->pc = 0x2948F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948F4u;
    // 0x2948f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299530u, 0x2948F4u, 0x2948FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948FCu;
label_2948fc:
    // 0x2948fc: 0x0  nop
    ctx->pc = 0x2948fcu;
    // NOP
    // 0x294900: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294900u;
    {
        const bool branch_taken_0x294900 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x294904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294900u;
        // 0x294904: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294900) {
            ctx->pc = 0x2948F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2948f0;
        }
    }
    ctx->pc = 0x294908u;
    // 0x294908: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x29490c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x29490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x294910: 0xac40e970  sw          $zero, -0x1690($v0)
    ctx->pc = 0x294910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6CE970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CE970u, _value); } while (0);
    // 0x294914: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x294914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x294918: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x29491c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x29491cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x294920: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x294920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
    // 0x294924: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_294928:
    // 0x294928: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x294928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x29492c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x294930: 0x0  nop
    ctx->pc = 0x294930u;
    // NOP
    // 0x294934: 0x0  nop
    ctx->pc = 0x294934u;
    // NOP
    // 0x294938: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294938u;
    {
        const bool branch_taken_0x294938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x29493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294938u;
        // 0x29493c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294938) {
            ctx->pc = 0x294928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294928;
        }
    }
    ctx->pc = 0x294940u;
    // 0x294940: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x294944: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x294944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294948: 0x2444eab8  addiu       $a0, $v0, -0x1548
    ctx->pc = 0x294948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
    // 0x29494c: 0x0  nop
    ctx->pc = 0x29494cu;
    // NOP
label_294950:
    // 0x294950: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x294950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x294954: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x294954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x294958: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x294958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29495c: 0x0  nop
    ctx->pc = 0x29495cu;
    // NOP
    // 0x294960: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294960u;
    {
        const bool branch_taken_0x294960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294960u;
        // 0x294964: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294960) {
            ctx->pc = 0x294950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294950;
        }
    }
    ctx->pc = 0x294968u;
    // 0x294968: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x29496c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29496cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294970: 0x2444eac0  addiu       $a0, $v0, -0x1540
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x294974: 0x0  nop
    ctx->pc = 0x294974u;
    // NOP
label_294978:
    // 0x294978: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x294978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29497c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x294980: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x294980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x294984: 0x0  nop
    ctx->pc = 0x294984u;
    // NOP
    // 0x294988: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294988u;
    {
        const bool branch_taken_0x294988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294988u;
        // 0x29498c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294988) {
            ctx->pc = 0x294978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294978;
        }
    }
    ctx->pc = 0x294990u;
    // 0x294990: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x294994: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x294994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294998: 0x2444ead8  addiu       $a0, $v0, -0x1528
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x29499c: 0x0  nop
    ctx->pc = 0x29499cu;
    // NOP
label_2949a0:
    // 0x2949a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2949a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2949a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2949a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2949a8: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2949a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2949ac: 0x0  nop
    ctx->pc = 0x2949acu;
    // NOP
    // 0x2949b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2949B0u;
    {
        const bool branch_taken_0x2949b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2949B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949B0u;
        // 0x2949b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949b0) {
            ctx->pc = 0x2949A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2949a0;
        }
    }
    ctx->pc = 0x2949B8u;
    // 0x2949b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2949b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2949bc: 0x24100029  addiu       $s0, $zero, 0x29
    ctx->pc = 0x2949bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2949c0: 0x2451eaf0  addiu       $s1, $v0, -0x1510
    ctx->pc = 0x2949c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x2949c4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2949c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2949c8:
    // 0x2949c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2949c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949cc: 0xc0a5290  jal         func_294A40
    ctx->pc = 0x2949CCu;
    SET_GPR_U32(ctx, 31, 0x2949D4u);
    ctx->pc = 0x2949D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2949CCu;
    // 0x2949d0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A40u, 0x2949CCu, 0x2949D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949D4u;
label_2949d4:
    // 0x2949d4: 0x0  nop
    ctx->pc = 0x2949d4u;
    // NOP
    // 0x2949d8: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2949D8u;
    {
        const bool branch_taken_0x2949d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949D8u;
        // 0x2949dc: 0x26310280  addiu       $s1, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949d8) {
            ctx->pc = 0x2949C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2949c8;
        }
    }
    ctx->pc = 0x2949E0u;
    // 0x2949e0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2949e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2949e4: 0x2410003b  addiu       $s0, $zero, 0x3B
    ctx->pc = 0x2949e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2949e8: 0x245153f0  addiu       $s1, $v0, 0x53F0
    ctx->pc = 0x2949e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21488));
    // 0x2949ec: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2949ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2949f0:
    // 0x2949f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2949f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949f4: 0xc13b754  jal         func_4EDD50
    ctx->pc = 0x2949F4u;
    SET_GPR_U32(ctx, 31, 0x2949FCu);
    ctx->pc = 0x2949F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2949F4u;
    // 0x2949f8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD50u, 0x2949F4u, 0x2949FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949FCu;
label_2949fc:
    // 0x2949fc: 0x0  nop
    ctx->pc = 0x2949fcu;
    // NOP
    // 0x294a00: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294A00u;
    {
        const bool branch_taken_0x294a00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x294A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A00u;
        // 0x294a04: 0x263102f0  addiu       $s1, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a00) {
            ctx->pc = 0x2949F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2949f0;
        }
    }
    ctx->pc = 0x294A08u;
label_294a08:
    // 0x294a08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x294a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294a0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x294a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294a10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x294a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294a18: 0x3e00008  jr          $ra
    ctx->pc = 0x294A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A18u;
        // 0x294a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A20u;
}
