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

// Function: sub_0049F520
// Address: 0x49f520 - 0x49f608
void sub_0049F520_0x49f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F520_0x49f520");
#endif

    ctx->pc = 0x49f520u;

    // 0x49f520: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x49f520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f524: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x49f524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x49f528: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x49f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x49f52c: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49F52Cu;
    {
        const bool branch_taken_0x49f52c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F52Cu;
        // 0x49f530: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f52c) {
            ctx->pc = 0x49F568u;
            goto label_49f568;
        }
    }
    ctx->pc = 0x49F534u;
    // 0x49f534: 0x28c20101  slti        $v0, $a2, 0x101
    ctx->pc = 0x49f534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x49f538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F538u;
    {
        const bool branch_taken_0x49f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F538u;
        // 0x49f53c: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f538) {
            ctx->pc = 0x49F550u;
            goto label_49f550;
        }
    }
    ctx->pc = 0x49F540u;
    // 0x49f540: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x49F540u;
    {
        const bool branch_taken_0x49f540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F540u;
        // 0x49f544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f540) {
            ctx->pc = 0x49F568u;
            goto label_49f568;
        }
    }
    ctx->pc = 0x49F548u;
    // 0x49f548: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x49F548u;
    {
        const bool branch_taken_0x49f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f548) {
            ctx->pc = 0x49F600u;
            goto label_49f600;
        }
    }
    ctx->pc = 0x49F550u;
label_49f550:
    // 0x49f550: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x49F550u;
    {
        const bool branch_taken_0x49f550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F550u;
        // 0x49f554: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f550) {
            ctx->pc = 0x49F5A4u;
            goto label_49f5a4;
        }
    }
    ctx->pc = 0x49F558u;
    // 0x49f558: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x49F558u;
    {
        const bool branch_taken_0x49f558 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F558u;
        // 0x49f55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f558) {
            ctx->pc = 0x49F5E0u;
            goto label_49f5e0;
        }
    }
    ctx->pc = 0x49F560u;
    // 0x49f560: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x49F560u;
    {
        const bool branch_taken_0x49f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f560) {
            ctx->pc = 0x49F600u;
            goto label_49f600;
        }
    }
    ctx->pc = 0x49F568u;
label_49f568:
    // 0x49f568: 0x711c2  srl         $v0, $a3, 7
    ctx->pc = 0x49f568u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x49f56c: 0x71882  srl         $v1, $a3, 2
    ctx->pc = 0x49f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x49f570: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x49f570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x49f574: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x49f574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49f578: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x49f578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x49f57c: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x49f57cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x49f580: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x49f580u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x49f584: 0x30e28000  andi        $v0, $a3, 0x8000
    ctx->pc = 0x49f584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x49f588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F588u;
    {
        const bool branch_taken_0x49f588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F588u;
        // 0x49f58c: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f588) {
            ctx->pc = 0x49F59Cu;
            goto label_49f59c;
        }
    }
    ctx->pc = 0x49F590u;
    // 0x49f590: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x49f590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x49f594: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x49F594u;
    {
        const bool branch_taken_0x49f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F594u;
        // 0x49f598: 0xa1020003  sb          $v0, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f594) {
            ctx->pc = 0x49F5FCu;
            goto label_49f5fc;
        }
    }
    ctx->pc = 0x49F59Cu;
label_49f59c:
    // 0x49f59c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x49F59Cu;
    {
        const bool branch_taken_0x49f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F59Cu;
        // 0x49f5a0: 0xa1000003  sb          $zero, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f59c) {
            ctx->pc = 0x49F5FCu;
            goto label_49f5fc;
        }
    }
    ctx->pc = 0x49F5A4u;
label_49f5a4:
    // 0x49f5a4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x49f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x49f5a8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x49f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x49f5ac: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x49f5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x49f5b0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x49f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x49f5b4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x49f5b4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x49f5b8: 0x72402  srl         $a0, $a3, 16
    ctx->pc = 0x49f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x49f5bc: 0x72a02  srl         $a1, $a3, 8
    ctx->pc = 0x49f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x49f5c0: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x49f5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x49f5c4: 0xa1050001  sb          $a1, 0x1($t0)
    ctx->pc = 0x49f5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x49f5c8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x49f5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x49f5cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49F5CCu;
    {
        const bool branch_taken_0x49f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f5cc) {
            ctx->pc = 0x49F5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F5CCu;
            // 0x49f5d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F5D4u;
            goto label_49f5d4;
        }
    }
    ctx->pc = 0x49F5D4u;
label_49f5d4:
    // 0x49f5d4: 0x1812  mflo        $v1
    ctx->pc = 0x49f5d4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x49f5d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49F5D8u;
    {
        const bool branch_taken_0x49f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5D8u;
        // 0x49f5dc: 0xa1030003  sb          $v1, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f5d8) {
            ctx->pc = 0x49F5FCu;
            goto label_49f5fc;
        }
    }
    ctx->pc = 0x49F5E0u;
label_49f5e0:
    // 0x49f5e0: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x49f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x49f5e4: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x49f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x49f5e8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x49f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x49f5ec: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x49f5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x49f5f0: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x49f5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x49f5f4: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x49f5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x49f5f8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x49f5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_49f5fc:
    // 0x49f5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f600:
    // 0x49f600: 0x3e00008  jr          $ra
    ctx->pc = 0x49F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F608u;
}
