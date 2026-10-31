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

// Function: sub_004A5988
// Address: 0x4a5988 - 0x4a5b00
void sub_004A5988_0x4a5988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5988_0x4a5988");
#endif

    switch (ctx->pc) {
        case 0x4a5988u: goto label_4a5988;
        case 0x4a598cu: goto label_4a598c;
        case 0x4a5990u: goto label_4a5990;
        case 0x4a5994u: goto label_4a5994;
        case 0x4a5998u: goto label_4a5998;
        case 0x4a599cu: goto label_4a599c;
        case 0x4a59a0u: goto label_4a59a0;
        case 0x4a59a4u: goto label_4a59a4;
        case 0x4a59a8u: goto label_4a59a8;
        case 0x4a59acu: goto label_4a59ac;
        case 0x4a59b0u: goto label_4a59b0;
        case 0x4a59b4u: goto label_4a59b4;
        case 0x4a59b8u: goto label_4a59b8;
        case 0x4a59bcu: goto label_4a59bc;
        case 0x4a59c0u: goto label_4a59c0;
        case 0x4a59c4u: goto label_4a59c4;
        case 0x4a59c8u: goto label_4a59c8;
        case 0x4a59ccu: goto label_4a59cc;
        case 0x4a59d0u: goto label_4a59d0;
        case 0x4a59d4u: goto label_4a59d4;
        case 0x4a59d8u: goto label_4a59d8;
        case 0x4a59dcu: goto label_4a59dc;
        case 0x4a59e0u: goto label_4a59e0;
        case 0x4a59e4u: goto label_4a59e4;
        case 0x4a59e8u: goto label_4a59e8;
        case 0x4a59ecu: goto label_4a59ec;
        case 0x4a59f0u: goto label_4a59f0;
        case 0x4a59f4u: goto label_4a59f4;
        case 0x4a59f8u: goto label_4a59f8;
        case 0x4a59fcu: goto label_4a59fc;
        case 0x4a5a00u: goto label_4a5a00;
        case 0x4a5a04u: goto label_4a5a04;
        case 0x4a5a08u: goto label_4a5a08;
        case 0x4a5a0cu: goto label_4a5a0c;
        case 0x4a5a10u: goto label_4a5a10;
        case 0x4a5a14u: goto label_4a5a14;
        case 0x4a5a18u: goto label_4a5a18;
        case 0x4a5a1cu: goto label_4a5a1c;
        case 0x4a5a20u: goto label_4a5a20;
        case 0x4a5a24u: goto label_4a5a24;
        case 0x4a5a28u: goto label_4a5a28;
        case 0x4a5a2cu: goto label_4a5a2c;
        case 0x4a5a30u: goto label_4a5a30;
        case 0x4a5a34u: goto label_4a5a34;
        case 0x4a5a38u: goto label_4a5a38;
        case 0x4a5a3cu: goto label_4a5a3c;
        case 0x4a5a40u: goto label_4a5a40;
        case 0x4a5a44u: goto label_4a5a44;
        case 0x4a5a48u: goto label_4a5a48;
        case 0x4a5a4cu: goto label_4a5a4c;
        case 0x4a5a50u: goto label_4a5a50;
        case 0x4a5a54u: goto label_4a5a54;
        case 0x4a5a58u: goto label_4a5a58;
        case 0x4a5a5cu: goto label_4a5a5c;
        case 0x4a5a60u: goto label_4a5a60;
        case 0x4a5a64u: goto label_4a5a64;
        case 0x4a5a68u: goto label_4a5a68;
        case 0x4a5a6cu: goto label_4a5a6c;
        case 0x4a5a70u: goto label_4a5a70;
        case 0x4a5a74u: goto label_4a5a74;
        case 0x4a5a78u: goto label_4a5a78;
        case 0x4a5a7cu: goto label_4a5a7c;
        case 0x4a5a80u: goto label_4a5a80;
        case 0x4a5a84u: goto label_4a5a84;
        case 0x4a5a88u: goto label_4a5a88;
        case 0x4a5a8cu: goto label_4a5a8c;
        case 0x4a5a90u: goto label_4a5a90;
        case 0x4a5a94u: goto label_4a5a94;
        case 0x4a5a98u: goto label_4a5a98;
        case 0x4a5a9cu: goto label_4a5a9c;
        case 0x4a5aa0u: goto label_4a5aa0;
        case 0x4a5aa4u: goto label_4a5aa4;
        case 0x4a5aa8u: goto label_4a5aa8;
        case 0x4a5aacu: goto label_4a5aac;
        case 0x4a5ab0u: goto label_4a5ab0;
        case 0x4a5ab4u: goto label_4a5ab4;
        case 0x4a5ab8u: goto label_4a5ab8;
        case 0x4a5abcu: goto label_4a5abc;
        case 0x4a5ac0u: goto label_4a5ac0;
        case 0x4a5ac4u: goto label_4a5ac4;
        case 0x4a5ac8u: goto label_4a5ac8;
        case 0x4a5accu: goto label_4a5acc;
        case 0x4a5ad0u: goto label_4a5ad0;
        case 0x4a5ad4u: goto label_4a5ad4;
        case 0x4a5ad8u: goto label_4a5ad8;
        case 0x4a5adcu: goto label_4a5adc;
        case 0x4a5ae0u: goto label_4a5ae0;
        case 0x4a5ae4u: goto label_4a5ae4;
        case 0x4a5ae8u: goto label_4a5ae8;
        case 0x4a5aecu: goto label_4a5aec;
        case 0x4a5af0u: goto label_4a5af0;
        case 0x4a5af4u: goto label_4a5af4;
        case 0x4a5af8u: goto label_4a5af8;
        case 0x4a5afcu: goto label_4a5afc;
        default: break;
    }

    ctx->pc = 0x4a5988u;

label_4a5988:
    // 0x4a5988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a5988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a598c:
    // 0x4a598c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a598cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a5990:
    // 0x4a5990: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a5990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a5994:
    // 0x4a5994: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x4a5994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_4a5998:
    // 0x4a5998: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a5998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a599c:
    // 0x4a599c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a599cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a59a0:
    // 0x4a59a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a59a4:
    // 0x4a59a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a59a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a59a8:
    // 0x4a59a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a59ac:
    // 0x4a59ac: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x4a59acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4a59b0:
    // 0x4a59b0: 0x34c60409  ori         $a2, $a2, 0x409
    ctx->pc = 0x4a59b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
label_4a59b4:
    // 0x4a59b4: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x4a59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_4a59b8:
    // 0x4a59b8: 0x40f809  jalr        $v0
label_4a59bc:
    if (ctx->pc == 0x4A59BCu) {
        ctx->pc = 0x4A59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59B8u;
        // 0x4a59bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A59C0u;
        goto label_4a59c0;
    }
    ctx->pc = 0x4A59B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A59C0u);
        ctx->pc = 0x4A59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59B8u;
        // 0x4a59bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A59B8u, 0x4A59C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A59C0u;
label_4a59c0:
    // 0x4a59c0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_4a59c4:
    if (ctx->pc == 0x4A59C4u) {
        ctx->pc = 0x4A59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59C0u;
        // 0x4a59c4: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A59C8u;
        goto label_4a59c8;
    }
    ctx->pc = 0x4A59C0u;
    {
        const bool branch_taken_0x4a59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59C0u;
        // 0x4a59c4: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59c0) {
            ctx->pc = 0x4A5AB0u;
            goto label_4a5ab0;
        }
    }
    ctx->pc = 0x4A59C8u;
label_4a59c8:
    // 0x4a59c8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4a59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4a59cc:
    // 0x4a59cc: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x4a59ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_4a59d0:
    // 0x4a59d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4a59d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4a59d4:
    // 0x4a59d4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4a59d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a59d8:
    // 0x4a59d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4a59dc:
    if (ctx->pc == 0x4A59DCu) {
        ctx->pc = 0x4A59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59D8u;
        // 0x4a59dc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A59E0u;
        goto label_4a59e0;
    }
    ctx->pc = 0x4A59D8u;
    {
        const bool branch_taken_0x4a59d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59D8u;
        // 0x4a59dc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59d8) {
            ctx->pc = 0x4A59E8u;
            goto label_4a59e8;
        }
    }
    ctx->pc = 0x4A59E0u;
label_4a59e0:
    // 0x4a59e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4a59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a59e4:
    // 0x4a59e4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4a59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4a59e8:
    // 0x4a59e8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4a59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4a59ec:
    // 0x4a59ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a59f0:
    if (ctx->pc == 0x4A59F0u) {
        ctx->pc = 0x4A59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59ECu;
        // 0x4a59f0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A59F4u;
        goto label_4a59f4;
    }
    ctx->pc = 0x4A59ECu;
    {
        const bool branch_taken_0x4a59ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59ECu;
        // 0x4a59f0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59ec) {
            ctx->pc = 0x4A59F8u;
            goto label_4a59f8;
        }
    }
    ctx->pc = 0x4A59F4u;
label_4a59f4:
    // 0x4a59f4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4a59f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_4a59f8:
    // 0x4a59f8: 0x10e00039  beqz        $a3, . + 4 + (0x39 << 2)
label_4a59fc:
    if (ctx->pc == 0x4A59FCu) {
        ctx->pc = 0x4A59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59F8u;
        // 0x4a59fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5A00u;
        goto label_4a5a00;
    }
    ctx->pc = 0x4A59F8u;
    {
        const bool branch_taken_0x4a59f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59F8u;
        // 0x4a59fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59f8) {
            ctx->pc = 0x4A5AE0u;
            goto label_4a5ae0;
        }
    }
    ctx->pc = 0x4A5A00u;
label_4a5a00:
    // 0x4a5a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5a04:
    // 0x4a5a04: 0x0  nop
    ctx->pc = 0x4a5a04u;
    // NOP
label_4a5a08:
    // 0x4a5a08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5a0c:
    // 0x4a5a0c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4a5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a5a10:
    // 0x4a5a10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a5a14:
    // 0x4a5a14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a5a18:
    if (ctx->pc == 0x4A5A18u) {
        ctx->pc = 0x4A5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A14u;
        // 0x4a5a18: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5A1Cu;
        goto label_4a5a1c;
    }
    ctx->pc = 0x4A5A14u;
    {
        const bool branch_taken_0x4a5a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A14u;
        // 0x4a5a18: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a14) {
            ctx->pc = 0x4A5A20u;
            goto label_4a5a20;
        }
    }
    ctx->pc = 0x4A5A1Cu;
label_4a5a1c:
    // 0x4a5a1c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4a5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_4a5a20:
    // 0x4a5a20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5a24:
    // 0x4a5a24: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4a5a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a5a28:
    // 0x4a5a28: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4a5a2c:
    // 0x4a5a2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a5a30:
    if (ctx->pc == 0x4A5A30u) {
        ctx->pc = 0x4A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A2Cu;
        // 0x4a5a30: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5A34u;
        goto label_4a5a34;
    }
    ctx->pc = 0x4A5A2Cu;
    {
        const bool branch_taken_0x4a5a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A2Cu;
        // 0x4a5a30: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a2c) {
            ctx->pc = 0x4A5A38u;
            goto label_4a5a38;
        }
    }
    ctx->pc = 0x4A5A34u;
label_4a5a34:
    // 0x4a5a34: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x4a5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_4a5a38:
    // 0x4a5a38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5a3c:
    // 0x4a5a3c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4a5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a5a40:
    // 0x4a5a40: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4a5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4a5a44:
    // 0x4a5a44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a5a48:
    if (ctx->pc == 0x4A5A48u) {
        ctx->pc = 0x4A5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A44u;
        // 0x4a5a48: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5A4Cu;
        goto label_4a5a4c;
    }
    ctx->pc = 0x4A5A44u;
    {
        const bool branch_taken_0x4a5a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A44u;
        // 0x4a5a48: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a44) {
            ctx->pc = 0x4A5A50u;
            goto label_4a5a50;
        }
    }
    ctx->pc = 0x4A5A4Cu;
label_4a5a4c:
    // 0x4a5a4c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x4a5a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_4a5a50:
    // 0x4a5a50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5a54:
    // 0x4a5a54: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4a5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a5a58:
    // 0x4a5a58: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4a5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4a5a5c:
    // 0x4a5a5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a5a60:
    if (ctx->pc == 0x4A5A60u) {
        ctx->pc = 0x4A5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A5Cu;
        // 0x4a5a60: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5A64u;
        goto label_4a5a64;
    }
    ctx->pc = 0x4A5A5Cu;
    {
        const bool branch_taken_0x4a5a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A5Cu;
        // 0x4a5a60: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a5c) {
            ctx->pc = 0x4A5A68u;
            goto label_4a5a68;
        }
    }
    ctx->pc = 0x4A5A64u;
label_4a5a64:
    // 0x4a5a64: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x4a5a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_4a5a68:
    // 0x4a5a68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5a6c:
    // 0x4a5a6c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4a5a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a5a70:
    // 0x4a5a70: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4a5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4a5a74:
    // 0x4a5a74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a5a78:
    if (ctx->pc == 0x4A5A78u) {
        ctx->pc = 0x4A5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A74u;
        // 0x4a5a78: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5A7Cu;
        goto label_4a5a7c;
    }
    ctx->pc = 0x4A5A74u;
    {
        const bool branch_taken_0x4a5a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A74u;
        // 0x4a5a78: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a74) {
            ctx->pc = 0x4A5A80u;
            goto label_4a5a80;
        }
    }
    ctx->pc = 0x4A5A7Cu;
label_4a5a7c:
    // 0x4a5a7c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x4a5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_4a5a80:
    // 0x4a5a80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5a84:
    // 0x4a5a84: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4a5a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a5a88:
    // 0x4a5a88: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4a5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4a5a8c:
    // 0x4a5a8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a5a90:
    if (ctx->pc == 0x4A5A90u) {
        ctx->pc = 0x4A5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A8Cu;
        // 0x4a5a90: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5A94u;
        goto label_4a5a94;
    }
    ctx->pc = 0x4A5A8Cu;
    {
        const bool branch_taken_0x4a5a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A8Cu;
        // 0x4a5a90: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a8c) {
            ctx->pc = 0x4A5A98u;
            goto label_4a5a98;
        }
    }
    ctx->pc = 0x4A5A94u;
label_4a5a94:
    // 0x4a5a94: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x4a5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_4a5a98:
    // 0x4a5a98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a5a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a5a9c:
    // 0x4a5a9c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4a5a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4a5aa0:
    // 0x4a5aa0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_4a5aa4:
    if (ctx->pc == 0x4A5AA4u) {
        ctx->pc = 0x4A5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AA0u;
        // 0x4a5aa4: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5AA8u;
        goto label_4a5aa8;
    }
    ctx->pc = 0x4A5AA0u;
    {
        const bool branch_taken_0x4a5aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AA0u;
        // 0x4a5aa4: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5aa0) {
            ctx->pc = 0x4A5A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5a08;
        }
    }
    ctx->pc = 0x4A5AA8u;
label_4a5aa8:
    // 0x4a5aa8: 0x1000000e  b           . + 4 + (0xE << 2)
label_4a5aac:
    if (ctx->pc == 0x4A5AACu) {
        ctx->pc = 0x4A5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AA8u;
        // 0x4a5aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5AB0u;
        goto label_4a5ab0;
    }
    ctx->pc = 0x4A5AA8u;
    {
        const bool branch_taken_0x4a5aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AA8u;
        // 0x4a5aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5aa8) {
            ctx->pc = 0x4A5AE4u;
            goto label_4a5ae4;
        }
    }
    ctx->pc = 0x4A5AB0u;
label_4a5ab0:
    // 0x4a5ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5ab4:
    // 0x4a5ab4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a5ab8:
    // 0x4a5ab8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a5ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a5abc:
    // 0x4a5abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5ac0:
    // 0x4a5ac0: 0xc11eff2  jal         func_47BFC8
label_4a5ac4:
    if (ctx->pc == 0x4A5AC4u) {
        ctx->pc = 0x4A5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AC0u;
        // 0x4a5ac4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5AC8u;
        goto label_4a5ac8;
    }
    ctx->pc = 0x4A5AC0u;
    SET_GPR_U32(ctx, 31, 0x4A5AC8u);
    ctx->pc = 0x4A5AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5AC0u;
    // 0x4a5ac4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A5AC0u, 0x4A5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5AC8u;
label_4a5ac8:
    // 0x4a5ac8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a5acc:
    // 0x4a5acc: 0xc11f024  jal         func_47C090
label_4a5ad0:
    if (ctx->pc == 0x4A5AD0u) {
        ctx->pc = 0x4A5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5ACCu;
        // 0x4a5ad0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5AD4u;
        goto label_4a5ad4;
    }
    ctx->pc = 0x4A5ACCu;
    SET_GPR_U32(ctx, 31, 0x4A5AD4u);
    ctx->pc = 0x4A5AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5ACCu;
    // 0x4a5ad0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A5ACCu, 0x4A5AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5AD4u;
label_4a5ad4:
    // 0x4a5ad4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a5ad8:
    if (ctx->pc == 0x4A5AD8u) {
        ctx->pc = 0x4A5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AD4u;
        // 0x4a5ad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5ADCu;
        goto label_4a5adc;
    }
    ctx->pc = 0x4A5AD4u;
    {
        const bool branch_taken_0x4a5ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AD4u;
        // 0x4a5ad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ad4) {
            ctx->pc = 0x4A5AE4u;
            goto label_4a5ae4;
        }
    }
    ctx->pc = 0x4A5ADCu;
label_4a5adc:
    // 0x4a5adc: 0x0  nop
    ctx->pc = 0x4a5adcu;
    // NOP
label_4a5ae0:
    // 0x4a5ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5ae4:
    // 0x4a5ae4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a5ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a5ae8:
    // 0x4a5ae8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a5ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a5aec:
    // 0x4a5aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a5aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5af0:
    // 0x4a5af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a5af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5af4:
    // 0x4a5af4: 0x3e00008  jr          $ra
label_4a5af8:
    if (ctx->pc == 0x4A5AF8u) {
        ctx->pc = 0x4A5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AF4u;
        // 0x4a5af8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5AFCu;
        goto label_4a5afc;
    }
    ctx->pc = 0x4A5AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AF4u;
        // 0x4a5af8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5AFCu;
label_4a5afc:
    // 0x4a5afc: 0x0  nop
    ctx->pc = 0x4a5afcu;
    // NOP
    ctx->pc = 0x4a5b00u;
}
