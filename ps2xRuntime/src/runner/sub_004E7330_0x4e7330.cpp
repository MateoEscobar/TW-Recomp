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

// Function: sub_004E7330
// Address: 0x4e7330 - 0x4e73d0
void sub_004E7330_0x4e7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7330_0x4e7330");
#endif

    switch (ctx->pc) {
        case 0x4e7330u: goto label_4e7330;
        case 0x4e7334u: goto label_4e7334;
        case 0x4e7338u: goto label_4e7338;
        case 0x4e733cu: goto label_4e733c;
        case 0x4e7340u: goto label_4e7340;
        case 0x4e7344u: goto label_4e7344;
        case 0x4e7348u: goto label_4e7348;
        case 0x4e734cu: goto label_4e734c;
        case 0x4e7350u: goto label_4e7350;
        case 0x4e7354u: goto label_4e7354;
        case 0x4e7358u: goto label_4e7358;
        case 0x4e735cu: goto label_4e735c;
        case 0x4e7360u: goto label_4e7360;
        case 0x4e7364u: goto label_4e7364;
        case 0x4e7368u: goto label_4e7368;
        case 0x4e736cu: goto label_4e736c;
        case 0x4e7370u: goto label_4e7370;
        case 0x4e7374u: goto label_4e7374;
        case 0x4e7378u: goto label_4e7378;
        case 0x4e737cu: goto label_4e737c;
        case 0x4e7380u: goto label_4e7380;
        case 0x4e7384u: goto label_4e7384;
        case 0x4e7388u: goto label_4e7388;
        case 0x4e738cu: goto label_4e738c;
        case 0x4e7390u: goto label_4e7390;
        case 0x4e7394u: goto label_4e7394;
        case 0x4e7398u: goto label_4e7398;
        case 0x4e739cu: goto label_4e739c;
        case 0x4e73a0u: goto label_4e73a0;
        case 0x4e73a4u: goto label_4e73a4;
        case 0x4e73a8u: goto label_4e73a8;
        case 0x4e73acu: goto label_4e73ac;
        case 0x4e73b0u: goto label_4e73b0;
        case 0x4e73b4u: goto label_4e73b4;
        case 0x4e73b8u: goto label_4e73b8;
        case 0x4e73bcu: goto label_4e73bc;
        case 0x4e73c0u: goto label_4e73c0;
        case 0x4e73c4u: goto label_4e73c4;
        case 0x4e73c8u: goto label_4e73c8;
        case 0x4e73ccu: goto label_4e73cc;
        default: break;
    }

    ctx->pc = 0x4e7330u;

label_4e7330:
    // 0x4e7330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e7330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e7334:
    // 0x4e7334: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e7334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e7338:
    // 0x4e7338: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e7338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e733c:
    // 0x4e733c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e733cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7340:
    // 0x4e7340: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e7340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e7344:
    // 0x4e7344: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e7344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e7348:
    // 0x4e7348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e734c:
    // 0x4e734c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_4e7350:
    if (ctx->pc == 0x4E7350u) {
        ctx->pc = 0x4E7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E734Cu;
        // 0x4e7350: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7354u;
        goto label_4e7354;
    }
    ctx->pc = 0x4E734Cu;
    {
        const bool branch_taken_0x4e734c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E734Cu;
        // 0x4e7350: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e734c) {
            ctx->pc = 0x4E73B4u;
            goto label_4e73b4;
        }
    }
    ctx->pc = 0x4E7354u;
label_4e7354:
    // 0x4e7354: 0xc139a6c  jal         func_4E69B0
label_4e7358:
    if (ctx->pc == 0x4E7358u) {
        ctx->pc = 0x4E735Cu;
        goto label_4e735c;
    }
    ctx->pc = 0x4E7354u;
    SET_GPR_U32(ctx, 31, 0x4E735Cu);
    ctx->pc = 0x4E69B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E69B0u, 0x4E7354u, 0x4E735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E735Cu;
label_4e735c:
    // 0x4e735c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e735cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e7360:
    // 0x4e7360: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e7364:
    if (ctx->pc == 0x4E7364u) {
        ctx->pc = 0x4E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7360u;
        // 0x4e7364: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7368u;
        goto label_4e7368;
    }
    ctx->pc = 0x4E7360u;
    {
        const bool branch_taken_0x4e7360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7360u;
        // 0x4e7364: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7360) {
            ctx->pc = 0x4E738Cu;
            goto label_4e738c;
        }
    }
    ctx->pc = 0x4E7368u;
label_4e7368:
    // 0x4e7368: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e7368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e736c:
    // 0x4e736c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e736cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e7370:
    // 0x4e7370: 0x24c653e8  addiu       $a2, $a2, 0x53E8
    ctx->pc = 0x4e7370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21480));
label_4e7374:
    // 0x4e7374: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e7374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e7378:
    // 0x4e7378: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e737c:
    // 0x4e737c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e737cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7380:
    // 0x4e7380: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7384:
    // 0x4e7384: 0x60f809  jalr        $v1
label_4e7388:
    if (ctx->pc == 0x4E7388u) {
        ctx->pc = 0x4E7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7384u;
        // 0x4e7388: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E738Cu;
        goto label_4e738c;
    }
    ctx->pc = 0x4E7384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E738Cu);
        ctx->pc = 0x4E7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7384u;
        // 0x4e7388: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7384u, 0x4E738Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E738Cu;
label_4e738c:
    // 0x4e738c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e738cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e7390:
    // 0x4e7390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e7390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7394:
    // 0x4e7394: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e7394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e7398:
    // 0x4e7398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e7398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e739c:
    // 0x4e739c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e739cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e73a0:
    // 0x4e73a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e73a4:
    // 0x4e73a4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e73a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e73a8:
    // 0x4e73a8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e73ac:
    // 0x4e73ac: 0x60f809  jalr        $v1
label_4e73b0:
    if (ctx->pc == 0x4E73B0u) {
        ctx->pc = 0x4E73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E73ACu;
        // 0x4e73b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E73B4u;
        goto label_4e73b4;
    }
    ctx->pc = 0x4E73ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E73B4u);
        ctx->pc = 0x4E73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E73ACu;
        // 0x4e73b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E73ACu, 0x4E73B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E73B4u;
label_4e73b4:
    // 0x4e73b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e73b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e73b8:
    // 0x4e73b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e73b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e73bc:
    // 0x4e73bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e73bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e73c0:
    // 0x4e73c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e73c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e73c4:
    // 0x4e73c4: 0x3e00008  jr          $ra
label_4e73c8:
    if (ctx->pc == 0x4E73C8u) {
        ctx->pc = 0x4E73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E73C4u;
        // 0x4e73c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E73CCu;
        goto label_4e73cc;
    }
    ctx->pc = 0x4E73C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E73C4u;
        // 0x4e73c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E73C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E73CCu;
label_4e73cc:
    // 0x4e73cc: 0x0  nop
    ctx->pc = 0x4e73ccu;
    // NOP
    ctx->pc = 0x4e73d0u;
}
