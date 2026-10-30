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

// Function: sub_002548F0
// Address: 0x2548f0 - 0x254d4c
void sub_002548F0_0x2548f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548F0_0x2548f0");
#endif

    switch (ctx->pc) {
        case 0x25493cu: goto label_25493c;
        case 0x254954u: goto label_254954;
        case 0x25496cu: goto label_25496c;
        case 0x25497cu: goto label_25497c;
        case 0x25498cu: goto label_25498c;
        case 0x25499cu: goto label_25499c;
        case 0x2549acu: goto label_2549ac;
        case 0x2549bcu: goto label_2549bc;
        case 0x2549d4u: goto label_2549d4;
        case 0x2549ecu: goto label_2549ec;
        case 0x254a04u: goto label_254a04;
        case 0x254a1cu: goto label_254a1c;
        case 0x254a34u: goto label_254a34;
        case 0x254a4cu: goto label_254a4c;
        case 0x254a64u: goto label_254a64;
        case 0x254a7cu: goto label_254a7c;
        case 0x254a94u: goto label_254a94;
        case 0x254aacu: goto label_254aac;
        case 0x254ac4u: goto label_254ac4;
        case 0x254adcu: goto label_254adc;
        case 0x254aecu: goto label_254aec;
        case 0x254afcu: goto label_254afc;
        case 0x254b14u: goto label_254b14;
        case 0x254b24u: goto label_254b24;
        case 0x254b34u: goto label_254b34;
        case 0x254b44u: goto label_254b44;
        case 0x254b5cu: goto label_254b5c;
        case 0x254b6cu: goto label_254b6c;
        case 0x254b7cu: goto label_254b7c;
        case 0x254b8cu: goto label_254b8c;
        case 0x254ba4u: goto label_254ba4;
        case 0x254bbcu: goto label_254bbc;
        case 0x254bd4u: goto label_254bd4;
        case 0x254becu: goto label_254bec;
        case 0x254bfcu: goto label_254bfc;
        case 0x254c0cu: goto label_254c0c;
        case 0x254c1cu: goto label_254c1c;
        case 0x254c34u: goto label_254c34;
        case 0x254c44u: goto label_254c44;
        case 0x254c54u: goto label_254c54;
        case 0x254c6cu: goto label_254c6c;
        case 0x254c84u: goto label_254c84;
        case 0x254c9cu: goto label_254c9c;
        case 0x254cb4u: goto label_254cb4;
        case 0x254cccu: goto label_254ccc;
        case 0x254ce4u: goto label_254ce4;
        case 0x254cfcu: goto label_254cfc;
        case 0x254d14u: goto label_254d14;
        case 0x254d24u: goto label_254d24;
        case 0x254d3cu: goto label_254d3c;
        default: break;
    }

    ctx->pc = 0x2548f0u;

    // 0x2548f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2548f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2548f4: 0x2ca2002c  sltiu       $v0, $a1, 0x2C
    ctx->pc = 0x2548f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x2548f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2548f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2548fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2548fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254908: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x254908u;
    {
        const bool branch_taken_0x254908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254908u;
        // 0x25490c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254908) {
            ctx->pc = 0x254D4Cu;
            return;
        }
    }
    ctx->pc = 0x254910u;
    // 0x254910: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x254910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x254914: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x254914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x254918: 0x2442d6f0  addiu       $v0, $v0, -0x2910
    ctx->pc = 0x254918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956784));
    // 0x25491c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254920: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254924: 0x800008  jr          $a0
    ctx->pc = 0x254924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25492Cu: goto label_25492c;
            case 0x254944u: goto label_254944;
            case 0x25495Cu: goto label_25495c;
            case 0x2549C4u: goto label_2549c4;
            case 0x2549DCu: goto label_2549dc;
            case 0x2549F4u: goto label_2549f4;
            case 0x254A0Cu: goto label_254a0c;
            case 0x254A24u: goto label_254a24;
            case 0x254A3Cu: goto label_254a3c;
            case 0x254A54u: goto label_254a54;
            case 0x254A6Cu: goto label_254a6c;
            case 0x254A84u: goto label_254a84;
            case 0x254A9Cu: goto label_254a9c;
            case 0x254AB4u: goto label_254ab4;
            case 0x254ACCu: goto label_254acc;
            case 0x254B04u: goto label_254b04;
            case 0x254B4Cu: goto label_254b4c;
            case 0x254B94u: goto label_254b94;
            case 0x254BACu: goto label_254bac;
            case 0x254BC4u: goto label_254bc4;
            case 0x254BDCu: goto label_254bdc;
            case 0x254C24u: goto label_254c24;
            case 0x254C5Cu: goto label_254c5c;
            case 0x254C74u: goto label_254c74;
            case 0x254C8Cu: goto label_254c8c;
            case 0x254CA4u: goto label_254ca4;
            case 0x254CBCu: goto label_254cbc;
            case 0x254CD4u: goto label_254cd4;
            case 0x254CECu: goto label_254cec;
            case 0x254D04u: goto label_254d04;
            case 0x254D2Cu: goto label_254d2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25492Cu;
label_25492c:
    // 0x25492c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254934: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254934u;
    SET_GPR_U32(ctx, 31, 0x25493Cu);
    ctx->pc = 0x254938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254934u;
    // 0x254938: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254934u, 0x25493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25493Cu;
label_25493c:
    // 0x25493c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x25493Cu;
    {
        const bool branch_taken_0x25493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25493Cu;
        // 0x254940: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25493c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254944u;
label_254944:
    // 0x254944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254948: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25494c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x25494Cu;
    SET_GPR_U32(ctx, 31, 0x254954u);
    ctx->pc = 0x254950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25494Cu;
    // 0x254950: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x25494Cu, 0x254954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254954u;
label_254954:
    // 0x254954: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x254954u;
    {
        const bool branch_taken_0x254954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254954u;
        // 0x254958: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254954) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x25495Cu;
label_25495c:
    // 0x25495c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254960: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x254964: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254964u;
    SET_GPR_U32(ctx, 31, 0x25496Cu);
    ctx->pc = 0x254968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254964u;
    // 0x254968: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254964u, 0x25496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25496Cu;
label_25496c:
    // 0x25496c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254970: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x254970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x254974: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254974u;
    SET_GPR_U32(ctx, 31, 0x25497Cu);
    ctx->pc = 0x254978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254974u;
    // 0x254978: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254974u, 0x25497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25497Cu;
label_25497c:
    // 0x25497c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254980: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x254980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x254984: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254984u;
    SET_GPR_U32(ctx, 31, 0x25498Cu);
    ctx->pc = 0x254988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254984u;
    // 0x254988: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254984u, 0x25498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25498Cu;
label_25498c:
    // 0x25498c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254990: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x254990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x254994: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254994u;
    SET_GPR_U32(ctx, 31, 0x25499Cu);
    ctx->pc = 0x254998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254994u;
    // 0x254998: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254994u, 0x25499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25499Cu;
label_25499c:
    // 0x25499c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549a0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2549a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2549a4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x2549A4u;
    SET_GPR_U32(ctx, 31, 0x2549ACu);
    ctx->pc = 0x2549A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549A4u;
    // 0x2549a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x2549A4u, 0x2549ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549ACu;
label_2549ac:
    // 0x2549ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2549acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2549b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549b4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x2549B4u;
    SET_GPR_U32(ctx, 31, 0x2549BCu);
    ctx->pc = 0x2549B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549B4u;
    // 0x2549b8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x2549B4u, 0x2549BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549BCu;
label_2549bc:
    // 0x2549bc: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2549BCu;
    {
        const bool branch_taken_0x2549bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549BCu;
        // 0x2549c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549bc) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x2549C4u;
label_2549c4:
    // 0x2549c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2549c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2549c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549cc: 0xc095232  jal         func_2548C8
    ctx->pc = 0x2549CCu;
    SET_GPR_U32(ctx, 31, 0x2549D4u);
    ctx->pc = 0x2549D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549CCu;
    // 0x2549d0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x2549CCu, 0x2549D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549D4u;
label_2549d4:
    // 0x2549d4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2549D4u;
    {
        const bool branch_taken_0x2549d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549D4u;
        // 0x2549d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549d4) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x2549DCu;
label_2549dc:
    // 0x2549dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2549dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2549e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549e4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x2549E4u;
    SET_GPR_U32(ctx, 31, 0x2549ECu);
    ctx->pc = 0x2549E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549E4u;
    // 0x2549e8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x2549E4u, 0x2549ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549ECu;
label_2549ec:
    // 0x2549ec: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2549ECu;
    {
        const bool branch_taken_0x2549ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549ECu;
        // 0x2549f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549ec) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x2549F4u;
label_2549f4:
    // 0x2549f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2549f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2549f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549fc: 0xc095232  jal         func_2548C8
    ctx->pc = 0x2549FCu;
    SET_GPR_U32(ctx, 31, 0x254A04u);
    ctx->pc = 0x254A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549FCu;
    // 0x254a00: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x2549FCu, 0x254A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A04u;
label_254a04:
    // 0x254a04: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x254A04u;
    {
        const bool branch_taken_0x254a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A04u;
        // 0x254a08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a04) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254A0Cu;
label_254a0c:
    // 0x254a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a14: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254A14u;
    SET_GPR_U32(ctx, 31, 0x254A1Cu);
    ctx->pc = 0x254A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A14u;
    // 0x254a18: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254A14u, 0x254A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A1Cu;
label_254a1c:
    // 0x254a1c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x254A1Cu;
    {
        const bool branch_taken_0x254a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A1Cu;
        // 0x254a20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a1c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254A24u;
label_254a24:
    // 0x254a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a2c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254A2Cu;
    SET_GPR_U32(ctx, 31, 0x254A34u);
    ctx->pc = 0x254A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A2Cu;
    // 0x254a30: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254A2Cu, 0x254A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A34u;
label_254a34:
    // 0x254a34: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x254A34u;
    {
        const bool branch_taken_0x254a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A34u;
        // 0x254a38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a34) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254A3Cu;
label_254a3c:
    // 0x254a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a44: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254A44u;
    SET_GPR_U32(ctx, 31, 0x254A4Cu);
    ctx->pc = 0x254A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A44u;
    // 0x254a48: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254A44u, 0x254A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A4Cu;
label_254a4c:
    // 0x254a4c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x254A4Cu;
    {
        const bool branch_taken_0x254a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A4Cu;
        // 0x254a50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a4c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254A54u;
label_254a54:
    // 0x254a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a5c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254A5Cu;
    SET_GPR_U32(ctx, 31, 0x254A64u);
    ctx->pc = 0x254A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A5Cu;
    // 0x254a60: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254A5Cu, 0x254A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A64u;
label_254a64:
    // 0x254a64: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x254A64u;
    {
        const bool branch_taken_0x254a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A64u;
        // 0x254a68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a64) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254A6Cu;
label_254a6c:
    // 0x254a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a74: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254A74u;
    SET_GPR_U32(ctx, 31, 0x254A7Cu);
    ctx->pc = 0x254A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A74u;
    // 0x254a78: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254A74u, 0x254A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A7Cu;
label_254a7c:
    // 0x254a7c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x254A7Cu;
    {
        const bool branch_taken_0x254a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A7Cu;
        // 0x254a80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a7c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254A84u;
label_254a84:
    // 0x254a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a8c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254A8Cu;
    SET_GPR_U32(ctx, 31, 0x254A94u);
    ctx->pc = 0x254A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A8Cu;
    // 0x254a90: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254A8Cu, 0x254A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A94u;
label_254a94:
    // 0x254a94: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x254A94u;
    {
        const bool branch_taken_0x254a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A94u;
        // 0x254a98: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a94) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254A9Cu;
label_254a9c:
    // 0x254a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254aa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254aa4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254AA4u;
    SET_GPR_U32(ctx, 31, 0x254AACu);
    ctx->pc = 0x254AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AA4u;
    // 0x254aa8: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254AA4u, 0x254AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AACu;
label_254aac:
    // 0x254aac: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x254AACu;
    {
        const bool branch_taken_0x254aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AACu;
        // 0x254ab0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254aac) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254AB4u;
label_254ab4:
    // 0x254ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ab8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254abc: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254ABCu;
    SET_GPR_U32(ctx, 31, 0x254AC4u);
    ctx->pc = 0x254AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254ABCu;
    // 0x254ac0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254ABCu, 0x254AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AC4u;
label_254ac4:
    // 0x254ac4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x254AC4u;
    {
        const bool branch_taken_0x254ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AC4u;
        // 0x254ac8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ac4) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254ACCu;
label_254acc:
    // 0x254acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ad0: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x254ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x254ad4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254AD4u;
    SET_GPR_U32(ctx, 31, 0x254ADCu);
    ctx->pc = 0x254AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AD4u;
    // 0x254ad8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254AD4u, 0x254ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254ADCu;
label_254adc:
    // 0x254adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ae0: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x254ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x254ae4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254AE4u;
    SET_GPR_U32(ctx, 31, 0x254AECu);
    ctx->pc = 0x254AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AE4u;
    // 0x254ae8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254AE4u, 0x254AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AECu;
label_254aec:
    // 0x254aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254af0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254af4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254AF4u;
    SET_GPR_U32(ctx, 31, 0x254AFCu);
    ctx->pc = 0x254AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AF4u;
    // 0x254af8: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254AF4u, 0x254AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AFCu;
label_254afc:
    // 0x254afc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x254AFCu;
    {
        const bool branch_taken_0x254afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AFCu;
        // 0x254b00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254afc) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254B04u;
label_254b04:
    // 0x254b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b08: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x254b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x254b0c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B0Cu;
    SET_GPR_U32(ctx, 31, 0x254B14u);
    ctx->pc = 0x254B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B0Cu;
    // 0x254b10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B0Cu, 0x254B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B14u;
label_254b14:
    // 0x254b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b18: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x254b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x254b1c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B1Cu;
    SET_GPR_U32(ctx, 31, 0x254B24u);
    ctx->pc = 0x254B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B1Cu;
    // 0x254b20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B1Cu, 0x254B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B24u;
label_254b24:
    // 0x254b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b28: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x254b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x254b2c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B2Cu;
    SET_GPR_U32(ctx, 31, 0x254B34u);
    ctx->pc = 0x254B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B2Cu;
    // 0x254b30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B2Cu, 0x254B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B34u;
label_254b34:
    // 0x254b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b3c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B3Cu;
    SET_GPR_U32(ctx, 31, 0x254B44u);
    ctx->pc = 0x254B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B3Cu;
    // 0x254b40: 0x24050099  addiu       $a1, $zero, 0x99 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B3Cu, 0x254B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B44u;
label_254b44:
    // 0x254b44: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x254B44u;
    {
        const bool branch_taken_0x254b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B44u;
        // 0x254b48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b44) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254B4Cu;
label_254b4c:
    // 0x254b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b50: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x254b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x254b54: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B54u;
    SET_GPR_U32(ctx, 31, 0x254B5Cu);
    ctx->pc = 0x254B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B54u;
    // 0x254b58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B54u, 0x254B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B5Cu;
label_254b5c:
    // 0x254b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b60: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x254b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x254b64: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B64u;
    SET_GPR_U32(ctx, 31, 0x254B6Cu);
    ctx->pc = 0x254B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B64u;
    // 0x254b68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B64u, 0x254B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B6Cu;
label_254b6c:
    // 0x254b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b70: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x254b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x254b74: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B74u;
    SET_GPR_U32(ctx, 31, 0x254B7Cu);
    ctx->pc = 0x254B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B74u;
    // 0x254b78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B74u, 0x254B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B7Cu;
label_254b7c:
    // 0x254b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b84: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B84u;
    SET_GPR_U32(ctx, 31, 0x254B8Cu);
    ctx->pc = 0x254B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B84u;
    // 0x254b88: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B84u, 0x254B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B8Cu;
label_254b8c:
    // 0x254b8c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x254B8Cu;
    {
        const bool branch_taken_0x254b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B8Cu;
        // 0x254b90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b8c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254B94u;
label_254b94:
    // 0x254b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b9c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254B9Cu;
    SET_GPR_U32(ctx, 31, 0x254BA4u);
    ctx->pc = 0x254BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B9Cu;
    // 0x254ba0: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254B9Cu, 0x254BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BA4u;
label_254ba4:
    // 0x254ba4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x254BA4u;
    {
        const bool branch_taken_0x254ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BA4u;
        // 0x254ba8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ba4) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254BACu;
label_254bac:
    // 0x254bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bb4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254BB4u;
    SET_GPR_U32(ctx, 31, 0x254BBCu);
    ctx->pc = 0x254BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BB4u;
    // 0x254bb8: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254BB4u, 0x254BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BBCu;
label_254bbc:
    // 0x254bbc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x254BBCu;
    {
        const bool branch_taken_0x254bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BBCu;
        // 0x254bc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bbc) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254BC4u;
label_254bc4:
    // 0x254bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bcc: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254BCCu;
    SET_GPR_U32(ctx, 31, 0x254BD4u);
    ctx->pc = 0x254BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BCCu;
    // 0x254bd0: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254BCCu, 0x254BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BD4u;
label_254bd4:
    // 0x254bd4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x254BD4u;
    {
        const bool branch_taken_0x254bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BD4u;
        // 0x254bd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bd4) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254BDCu;
label_254bdc:
    // 0x254bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254be0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x254be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x254be4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254BE4u;
    SET_GPR_U32(ctx, 31, 0x254BECu);
    ctx->pc = 0x254BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BE4u;
    // 0x254be8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254BE4u, 0x254BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BECu;
label_254bec:
    // 0x254bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bf0: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x254bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x254bf4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254BF4u;
    SET_GPR_U32(ctx, 31, 0x254BFCu);
    ctx->pc = 0x254BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BF4u;
    // 0x254bf8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254BF4u, 0x254BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BFCu;
label_254bfc:
    // 0x254bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c00: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x254c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x254c04: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C04u;
    SET_GPR_U32(ctx, 31, 0x254C0Cu);
    ctx->pc = 0x254C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C04u;
    // 0x254c08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C04u, 0x254C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C0Cu;
label_254c0c:
    // 0x254c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c14: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C14u;
    SET_GPR_U32(ctx, 31, 0x254C1Cu);
    ctx->pc = 0x254C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C14u;
    // 0x254c18: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C14u, 0x254C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C1Cu;
label_254c1c:
    // 0x254c1c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x254C1Cu;
    {
        const bool branch_taken_0x254c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C1Cu;
        // 0x254c20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c1c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254C24u;
label_254c24:
    // 0x254c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c28: 0x240500db  addiu       $a1, $zero, 0xDB
    ctx->pc = 0x254c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x254c2c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C2Cu;
    SET_GPR_U32(ctx, 31, 0x254C34u);
    ctx->pc = 0x254C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C2Cu;
    // 0x254c30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C2Cu, 0x254C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C34u;
label_254c34:
    // 0x254c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c38: 0x240500dd  addiu       $a1, $zero, 0xDD
    ctx->pc = 0x254c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x254c3c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C3Cu;
    SET_GPR_U32(ctx, 31, 0x254C44u);
    ctx->pc = 0x254C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C3Cu;
    // 0x254c40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C3Cu, 0x254C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C44u;
label_254c44:
    // 0x254c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c4c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C4Cu;
    SET_GPR_U32(ctx, 31, 0x254C54u);
    ctx->pc = 0x254C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C4Cu;
    // 0x254c50: 0x240500df  addiu       $a1, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C4Cu, 0x254C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C54u;
label_254c54:
    // 0x254c54: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x254C54u;
    {
        const bool branch_taken_0x254c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C54u;
        // 0x254c58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c54) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254C5Cu;
label_254c5c:
    // 0x254c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c64: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C64u;
    SET_GPR_U32(ctx, 31, 0x254C6Cu);
    ctx->pc = 0x254C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C64u;
    // 0x254c68: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C64u, 0x254C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C6Cu;
label_254c6c:
    // 0x254c6c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x254C6Cu;
    {
        const bool branch_taken_0x254c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C6Cu;
        // 0x254c70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c6c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254C74u;
label_254c74:
    // 0x254c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c7c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C7Cu;
    SET_GPR_U32(ctx, 31, 0x254C84u);
    ctx->pc = 0x254C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C7Cu;
    // 0x254c80: 0x240500e3  addiu       $a1, $zero, 0xE3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C7Cu, 0x254C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C84u;
label_254c84:
    // 0x254c84: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x254C84u;
    {
        const bool branch_taken_0x254c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C84u;
        // 0x254c88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c84) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254C8Cu;
label_254c8c:
    // 0x254c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c94: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254C94u;
    SET_GPR_U32(ctx, 31, 0x254C9Cu);
    ctx->pc = 0x254C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C94u;
    // 0x254c98: 0x240500e5  addiu       $a1, $zero, 0xE5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254C94u, 0x254C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C9Cu;
label_254c9c:
    // 0x254c9c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x254C9Cu;
    {
        const bool branch_taken_0x254c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C9Cu;
        // 0x254ca0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c9c) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254CA4u;
label_254ca4:
    // 0x254ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ca8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cac: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254CACu;
    SET_GPR_U32(ctx, 31, 0x254CB4u);
    ctx->pc = 0x254CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CACu;
    // 0x254cb0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254CACu, 0x254CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CB4u;
label_254cb4:
    // 0x254cb4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x254CB4u;
    {
        const bool branch_taken_0x254cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CB4u;
        // 0x254cb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cb4) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254CBCu;
label_254cbc:
    // 0x254cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cc4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254CC4u;
    SET_GPR_U32(ctx, 31, 0x254CCCu);
    ctx->pc = 0x254CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CC4u;
    // 0x254cc8: 0x240500f6  addiu       $a1, $zero, 0xF6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254CC4u, 0x254CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CCCu;
label_254ccc:
    // 0x254ccc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x254CCCu;
    {
        const bool branch_taken_0x254ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CCCu;
        // 0x254cd0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ccc) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254CD4u;
label_254cd4:
    // 0x254cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cdc: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254CDCu;
    SET_GPR_U32(ctx, 31, 0x254CE4u);
    ctx->pc = 0x254CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CDCu;
    // 0x254ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254CDCu, 0x254CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CE4u;
label_254ce4:
    // 0x254ce4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x254CE4u;
    {
        const bool branch_taken_0x254ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CE4u;
        // 0x254ce8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ce4) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254CECu;
label_254cec:
    // 0x254cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cf4: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254CF4u;
    SET_GPR_U32(ctx, 31, 0x254CFCu);
    ctx->pc = 0x254CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CF4u;
    // 0x254cf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254CF4u, 0x254CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CFCu;
label_254cfc:
    // 0x254cfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x254CFCu;
    {
        const bool branch_taken_0x254cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CFCu;
        // 0x254d00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cfc) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254D04u;
label_254d04:
    // 0x254d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d08: 0x2405028d  addiu       $a1, $zero, 0x28D
    ctx->pc = 0x254d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
    // 0x254d0c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254D0Cu;
    SET_GPR_U32(ctx, 31, 0x254D14u);
    ctx->pc = 0x254D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D0Cu;
    // 0x254d10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254D0Cu, 0x254D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D14u;
label_254d14:
    // 0x254d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d1c: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254D1Cu;
    SET_GPR_U32(ctx, 31, 0x254D24u);
    ctx->pc = 0x254D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D1Cu;
    // 0x254d20: 0x2405028f  addiu       $a1, $zero, 0x28F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254D1Cu, 0x254D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D24u;
label_254d24:
    // 0x254d24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x254D24u;
    {
        const bool branch_taken_0x254d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D24u;
        // 0x254d28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d24) {
            ctx->pc = 0x254D50u;
            return;
        }
    }
    ctx->pc = 0x254D2Cu;
label_254d2c:
    // 0x254d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d30: 0x24050291  addiu       $a1, $zero, 0x291
    ctx->pc = 0x254d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
    // 0x254d34: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254D34u;
    SET_GPR_U32(ctx, 31, 0x254D3Cu);
    ctx->pc = 0x254D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D34u;
    // 0x254d38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254D34u, 0x254D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D3Cu;
label_254d3c:
    // 0x254d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d44: 0xc095232  jal         func_2548C8
    ctx->pc = 0x254D44u;
    SET_GPR_U32(ctx, 31, 0x254D4Cu);
    ctx->pc = 0x254D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D44u;
    // 0x254d48: 0x24050293  addiu       $a1, $zero, 0x293 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x254D44u, 0x254D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D4Cu;
}
