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

// Function: sub_004BEDE8
// Address: 0x4bede8 - 0x4beec0
void sub_004BEDE8_0x4bede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEDE8_0x4bede8");
#endif

    switch (ctx->pc) {
        case 0x4bee20u: goto label_4bee20;
        case 0x4bee48u: goto label_4bee48;
        case 0x4bee6cu: goto label_4bee6c;
        case 0x4bee94u: goto label_4bee94;
        default: break;
    }

    ctx->pc = 0x4bede8u;

    // 0x4bede8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bede8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bedec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bedecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4bedf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4bedf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4bedf4: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4bedf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x4bedf8: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x4bedf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x4bedfc: 0x245041f0  addiu       $s0, $v0, 0x41F0
    ctx->pc = 0x4bedfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
    // 0x4bee00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bee04: 0x24c6ece0  addiu       $a2, $a2, -0x1320
    ctx->pc = 0x4bee04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962400));
    // 0x4bee08: 0xac4041f0  sw          $zero, 0x41F0($v0)
    ctx->pc = 0x4bee08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7141F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7141F0u, _value); } while (0);
    // 0x4bee0c: 0x24e7f218  addiu       $a3, $a3, -0xDE8
    ctx->pc = 0x4bee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963736));
    // 0x4bee10: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x4bee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x4bee14: 0x2405012a  addiu       $a1, $zero, 0x12A
    ctx->pc = 0x4bee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x4bee18: 0xc11c7a4  jal         func_471E90
    ctx->pc = 0x4BEE18u;
    SET_GPR_U32(ctx, 31, 0x4BEE20u);
    ctx->pc = 0x4BEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE18u;
    // 0x4bee1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471E90u, 0x4BEE18u, 0x4BEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE20u;
label_4bee20:
    // 0x4bee20: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4BEE20u;
    {
        const bool branch_taken_0x4bee20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEE20u;
        // 0x4bee24: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bee20) {
            ctx->pc = 0x4BEEA0u;
            goto label_4beea0;
        }
    }
    ctx->pc = 0x4BEE28u;
    // 0x4bee28: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bee28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bee2c: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4bee2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x4bee30: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x4bee30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x4bee34: 0x24a5f518  addiu       $a1, $a1, -0xAE8
    ctx->pc = 0x4bee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964504));
    // 0x4bee38: 0x24c6f4b8  addiu       $a2, $a2, -0xB48
    ctx->pc = 0x4bee38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964408));
    // 0x4bee3c: 0x24e7f498  addiu       $a3, $a3, -0xB68
    ctx->pc = 0x4bee3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964376));
    // 0x4bee40: 0xc11c7b6  jal         func_471ED8
    ctx->pc = 0x4BEE40u;
    SET_GPR_U32(ctx, 31, 0x4BEE48u);
    ctx->pc = 0x4BEE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE40u;
    // 0x4bee44: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471ED8u, 0x4BEE40u, 0x4BEE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE48u;
label_4bee48:
    // 0x4bee48: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4BEE48u;
    {
        const bool branch_taken_0x4bee48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEE48u;
        // 0x4bee4c: 0x3c06004c  lui         $a2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bee48) {
            ctx->pc = 0x4BEEA0u;
            goto label_4beea0;
        }
    }
    ctx->pc = 0x4BEE50u;
    // 0x4bee50: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x4bee50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x4bee54: 0x24c6f2b0  addiu       $a2, $a2, -0xD50
    ctx->pc = 0x4bee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963888));
    // 0x4bee58: 0x24e7f2e8  addiu       $a3, $a3, -0xD18
    ctx->pc = 0x4bee58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963944));
    // 0x4bee5c: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x4bee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x4bee60: 0x2405012a  addiu       $a1, $zero, 0x12A
    ctx->pc = 0x4bee60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x4bee64: 0xc11c222  jal         func_470888
    ctx->pc = 0x4BEE64u;
    SET_GPR_U32(ctx, 31, 0x4BEE6Cu);
    ctx->pc = 0x4BEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE64u;
    // 0x4bee68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x4BEE64u, 0x4BEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE6Cu;
label_4bee6c:
    // 0x4bee6c: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BEE6Cu;
    {
        const bool branch_taken_0x4bee6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEE6Cu;
        // 0x4bee70: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bee6c) {
            ctx->pc = 0x4BEEA0u;
            goto label_4beea0;
        }
    }
    ctx->pc = 0x4BEE74u;
    // 0x4bee74: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bee74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bee78: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4bee78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x4bee7c: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x4bee7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x4bee80: 0x24a5f400  addiu       $a1, $a1, -0xC00
    ctx->pc = 0x4bee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x4bee84: 0x24c6f380  addiu       $a2, $a2, -0xC80
    ctx->pc = 0x4bee84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964096));
    // 0x4bee88: 0x24e7f350  addiu       $a3, $a3, -0xCB0
    ctx->pc = 0x4bee88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964048));
    // 0x4bee8c: 0xc11c234  jal         func_4708D0
    ctx->pc = 0x4BEE8Cu;
    SET_GPR_U32(ctx, 31, 0x4BEE94u);
    ctx->pc = 0x4BEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE8Cu;
    // 0x4bee90: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4708D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4708D0u, 0x4BEE8Cu, 0x4BEE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE94u;
label_4bee94:
    // 0x4bee94: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x4bee94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4bee98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BEE98u;
    {
        const bool branch_taken_0x4bee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEE98u;
        // 0x4bee9c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bee98) {
            ctx->pc = 0x4BEEA4u;
            goto label_4beea4;
        }
    }
    ctx->pc = 0x4BEEA0u;
label_4beea0:
    // 0x4beea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4beea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4beea4:
    // 0x4beea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4beea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4beea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4beea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4beeac: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEEACu;
        // 0x4beeb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEEB4u;
    // 0x4beeb4: 0x0  nop
    ctx->pc = 0x4beeb4u;
    // NOP
    // 0x4beeb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4beeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4beebc: 0x0  nop
    ctx->pc = 0x4beebcu;
    // NOP
    ctx->pc = 0x4beec0u;
}
