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

// Function: sub_00333FE8
// Address: 0x333fe8 - 0x3340f8
void sub_00333FE8_0x333fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333FE8_0x333fe8");
#endif

    switch (ctx->pc) {
        case 0x334034u: goto label_334034;
        case 0x334068u: goto label_334068;
        case 0x334078u: goto label_334078;
        case 0x3340b0u: goto label_3340b0;
        case 0x3340c4u: goto label_3340c4;
        default: break;
    }

    ctx->pc = 0x333fe8u;

    // 0x333fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x333fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x333fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333ff0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x333ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x333ff4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x333ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x333ff8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x333ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x334000: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334004: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x334004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x334008: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x334008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33400c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334010: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x334010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334014: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x334014u;
    {
        const bool branch_taken_0x334014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x334018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334014u;
        // 0x334018: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334014) {
            ctx->pc = 0x334044u;
            goto label_334044;
        }
    }
    ctx->pc = 0x33401Cu;
    // 0x33401c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334020: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x334020u;
    {
        const bool branch_taken_0x334020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x334020) {
            ctx->pc = 0x334024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334020u;
            // 0x334024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334048u;
            goto label_334048;
        }
    }
    ctx->pc = 0x334028u;
    // 0x334028: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x334028u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33402c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x33402Cu;
    SET_GPR_U32(ctx, 31, 0x334034u);
    ctx->pc = 0x334030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33402Cu;
    // 0x334030: 0xde450008  ld          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x33402Cu, 0x334034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334034u;
label_334034:
    // 0x334034: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x334034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x334038: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x334038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33403c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x33403Cu;
    {
        const bool branch_taken_0x33403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33403Cu;
        // 0x334040: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33403c) {
            ctx->pc = 0x3340DCu;
            goto label_3340dc;
        }
    }
    ctx->pc = 0x334044u;
label_334044:
    // 0x334044: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_334048:
    // 0x334048: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334048u;
    {
        const bool branch_taken_0x334048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334048u;
        // 0x33404c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334048) {
            ctx->pc = 0x334070u;
            goto label_334070;
        }
    }
    ctx->pc = 0x334050u;
    // 0x334050: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334054: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x334054u;
    {
        const bool branch_taken_0x334054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x334054) {
            ctx->pc = 0x334070u;
            goto label_334070;
        }
    }
    ctx->pc = 0x33405Cu;
    // 0x33405c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x33405cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334060: 0xc0ccfd2  jal         func_333F48
    ctx->pc = 0x334060u;
    SET_GPR_U32(ctx, 31, 0x334068u);
    ctx->pc = 0x334064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334060u;
    // 0x334064: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F48u, 0x334060u, 0x334068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334068u;
label_334068:
    // 0x334068: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x334068u;
    {
        const bool branch_taken_0x334068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334068u;
        // 0x33406c: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334068) {
            ctx->pc = 0x3340DCu;
            goto label_3340dc;
        }
    }
    ctx->pc = 0x334070u;
label_334070:
    // 0x334070: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x334070u;
    SET_GPR_U32(ctx, 31, 0x334078u);
    ctx->pc = 0x334074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334070u;
    // 0x334074: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x334070u, 0x334078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334078u;
label_334078:
    // 0x334078: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x334078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33407c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334080: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x334080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x334084: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x334084u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x334088: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x334088u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33408c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x33408cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x334090: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x334090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x334094: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x334094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334098: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x334098u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x33409c: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x33409cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3340a0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3340a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3340a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3340a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3340a8: 0xc0ccf88  jal         func_333E20
    ctx->pc = 0x3340A8u;
    SET_GPR_U32(ctx, 31, 0x3340B0u);
    ctx->pc = 0x3340ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340A8u;
    // 0x3340ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E20u, 0x3340A8u, 0x3340B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340B0u;
label_3340b0:
    // 0x3340b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3340B0u;
    {
        const bool branch_taken_0x3340b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3340b0) {
            ctx->pc = 0x3340B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3340B0u;
            // 0x3340b4: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3340C8u;
            goto label_3340c8;
        }
    }
    ctx->pc = 0x3340B8u;
    // 0x3340b8: 0x2605ffe0  addiu       $a1, $s0, -0x20
    ctx->pc = 0x3340b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x3340bc: 0xc0ca1a6  jal         func_328698
    ctx->pc = 0x3340BCu;
    SET_GPR_U32(ctx, 31, 0x3340C4u);
    ctx->pc = 0x3340C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340BCu;
    // 0x3340c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328698u, 0x3340BCu, 0x3340C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340C4u;
label_3340c4:
    // 0x3340c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3340c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3340c8:
    // 0x3340c8: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x3340c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3340cc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3340ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3340d0: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3340d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3340d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3340d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3340d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3340d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3340dc:
    // 0x3340dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3340dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3340e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3340e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3340e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3340e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3340e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3340e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3340ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3340ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3340f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3340F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3340F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3340F0u;
        // 0x3340f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3340F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3340F8u;
}
