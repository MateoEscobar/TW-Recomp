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

// Function: sub_00498938
// Address: 0x498938 - 0x4989f0
void sub_00498938_0x498938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498938_0x498938");
#endif

    switch (ctx->pc) {
        case 0x498994u: goto label_498994;
        default: break;
    }

    ctx->pc = 0x498938u;

    // 0x498938: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x498938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49893c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49893cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x498940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x498940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x498944: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x498944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498948: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x498948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49894c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x49894cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498950: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x498950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x498954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x498958: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x498958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x49895c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x498960: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x498960u;
    {
        const bool branch_taken_0x498960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498960u;
        // 0x498964: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498960) {
            ctx->pc = 0x4989CCu;
            goto label_4989cc;
        }
    }
    ctx->pc = 0x498968u;
    // 0x498968: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x498968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x49896c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x49896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x498970: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x498970u;
    {
        const bool branch_taken_0x498970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498970u;
        // 0x498974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498970) {
            ctx->pc = 0x4989D0u;
            goto label_4989d0;
        }
    }
    ctx->pc = 0x498978u;
    // 0x498978: 0x32510001  andi        $s1, $s2, 0x1
    ctx->pc = 0x498978u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x49897c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x49897Cu;
    {
        const bool branch_taken_0x49897c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x498980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49897Cu;
        // 0x498980: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49897c) {
            ctx->pc = 0x498994u;
            goto label_498994;
        }
    }
    ctx->pc = 0x498984u;
    // 0x498984: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x498984u;
    {
        const bool branch_taken_0x498984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x498984) {
            ctx->pc = 0x498988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498984u;
            // 0x498988: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498998u;
            goto label_498998;
        }
    }
    ctx->pc = 0x49898Cu;
    // 0x49898c: 0xc128fd6  jal         func_4A3F58
    ctx->pc = 0x49898Cu;
    SET_GPR_U32(ctx, 31, 0x498994u);
    ctx->pc = 0x498990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49898Cu;
    // 0x498990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3F58u, 0x49898Cu, 0x498994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498994u;
label_498994:
    // 0x498994: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x498994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_498998:
    // 0x498998: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x498998u;
    {
        const bool branch_taken_0x498998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498998u;
        // 0x49899c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498998) {
            ctx->pc = 0x4989ACu;
            goto label_4989ac;
        }
    }
    ctx->pc = 0x4989A0u;
    // 0x4989a0: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4989a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4989a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4989a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4989a8: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x4989a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_4989ac:
    // 0x4989ac: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x4989acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x4989b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4989B0u;
    {
        const bool branch_taken_0x4989b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4989b0) {
            ctx->pc = 0x4989B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4989B0u;
            // 0x4989b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4989D0u;
            goto label_4989d0;
        }
    }
    ctx->pc = 0x4989B8u;
    // 0x4989b8: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4989b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4989bc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4989bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4989c0: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x4989c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x4989c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4989C4u;
    {
        const bool branch_taken_0x4989c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4989C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989C4u;
        // 0x4989c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4989c4) {
            ctx->pc = 0x4989D0u;
            goto label_4989d0;
        }
    }
    ctx->pc = 0x4989CCu;
label_4989cc:
    // 0x4989cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4989ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4989d0:
    // 0x4989d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4989d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4989d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4989d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4989d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4989d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4989dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4989dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4989e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4989e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4989e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4989E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4989E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4989E4u;
        // 0x4989e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4989E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4989ECu;
    // 0x4989ec: 0x0  nop
    ctx->pc = 0x4989ecu;
    // NOP
    ctx->pc = 0x4989f0u;
}
