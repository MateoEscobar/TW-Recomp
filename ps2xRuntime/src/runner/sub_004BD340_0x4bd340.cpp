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

// Function: sub_004BD340
// Address: 0x4bd340 - 0x4bd478
void sub_004BD340_0x4bd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD340_0x4bd340");
#endif

    switch (ctx->pc) {
        case 0x4bd3c0u: goto label_4bd3c0;
        case 0x4bd428u: goto label_4bd428;
        default: break;
    }

    ctx->pc = 0x4bd340u;

    // 0x4bd340: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4bd340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bd344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bd344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd348: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x4bd348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x4bd34c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x4bd34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4bd350: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BD350u;
    {
        const bool branch_taken_0x4bd350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bd350) {
            ctx->pc = 0x4BD368u;
            goto label_4bd368;
        }
    }
    ctx->pc = 0x4BD358u;
    // 0x4bd358: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x4bd358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x4bd35c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD35Cu;
        // 0x4bd360: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD364u;
    // 0x4bd364: 0x0  nop
    ctx->pc = 0x4bd364u;
    // NOP
label_4bd368:
    // 0x4bd368: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4BD368u;
    {
        const bool branch_taken_0x4bd368 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4BD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD368u;
        // 0x4bd36c: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd368) {
            ctx->pc = 0x4BD3A4u;
            goto label_4bd3a4;
        }
    }
    ctx->pc = 0x4BD370u;
    // 0x4bd370: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4bd370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4bd374: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd378: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4bd378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bd37c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BD37Cu;
    {
        const bool branch_taken_0x4bd37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD37Cu;
        // 0x4bd380: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd37c) {
            ctx->pc = 0x4BD39Cu;
            goto label_4bd39c;
        }
    }
    ctx->pc = 0x4BD384u;
    // 0x4bd384: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BD384u;
    {
        const bool branch_taken_0x4bd384 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x4bd384) {
            ctx->pc = 0x4BD3A4u;
            goto label_4bd3a4;
        }
    }
    ctx->pc = 0x4BD38Cu;
    // 0x4bd38c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x4bd38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x4bd390: 0x0  nop
    ctx->pc = 0x4bd390u;
    // NOP
    // 0x4bd394: 0x0  nop
    ctx->pc = 0x4bd394u;
    // NOP
    // 0x4bd398: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x4bd398u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_4bd39c:
    // 0x4bd39c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD3A4u;
label_4bd3a4:
    // 0x4bd3a4: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x4BD3A4u;
    {
        const bool branch_taken_0x4bd3a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD3A4u;
        // 0x4bd3a8: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd3a4) {
            ctx->pc = 0x4BD3F0u;
            goto label_4bd3f0;
        }
    }
    ctx->pc = 0x4BD3ACu;
    // 0x4bd3ac: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4bd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4bd3b0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4bd3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bd3b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BD3B4u;
    {
        const bool branch_taken_0x4bd3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD3B4u;
        // 0x4bd3b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd3b4) {
            ctx->pc = 0x4BD3E4u;
            goto label_4bd3e4;
        }
    }
    ctx->pc = 0x4BD3BCu;
    // 0x4bd3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bd3c0:
    // 0x4bd3c0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4bd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4bd3c4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4bd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4bd3c8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4bd3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bd3cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4bd3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4bd3d0: 0x0  nop
    ctx->pc = 0x4bd3d0u;
    // NOP
    // 0x4bd3d4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BD3D4u;
    {
        const bool branch_taken_0x4bd3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd3d4) {
            ctx->pc = 0x4BD3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd3c0;
        }
    }
    ctx->pc = 0x4BD3DCu;
    // 0x4bd3dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BD3DCu;
    {
        const bool branch_taken_0x4bd3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD3DCu;
        // 0x4bd3e0: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd3dc) {
            ctx->pc = 0x4BD3ECu;
            goto label_4bd3ec;
        }
    }
    ctx->pc = 0x4BD3E4u;
label_4bd3e4:
    // 0x4bd3e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bd3e8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x4bd3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4bd3ec:
    // 0x4bd3ec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4bd3f0:
    // 0x4bd3f0: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x4bd3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x4bd3f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd3f8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x4bd3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4bd3fc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x4bd3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x4bd400: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4bd400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bd404: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4bd404u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x4bd408: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x4bd408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4bd40c: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x4bd40cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x4bd410: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x4bd410u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x4bd414: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4bd414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4bd418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4bd418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd41c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4bd41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd420: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x4bd420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x4bd424: 0x0  nop
    ctx->pc = 0x4bd424u;
    // NOP
label_4bd428:
    // 0x4bd428: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x4bd428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4bd42c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x4bd42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4bd430: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BD430u;
    {
        const bool branch_taken_0x4bd430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bd430) {
            ctx->pc = 0x4BD434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD430u;
            // 0x4bd434: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD448u;
            goto label_4bd448;
        }
    }
    ctx->pc = 0x4BD438u;
    // 0x4bd438: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x4bd438u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4bd43c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x4bd43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4bd440: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4bd440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4bd444: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x4bd444u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_4bd448:
    // 0x4bd448: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4BD448u;
    {
        const bool branch_taken_0x4bd448 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD448u;
        // 0x4bd44c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd448) {
            ctx->pc = 0x4BD428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd428;
        }
    }
    ctx->pc = 0x4BD450u;
    // 0x4bd450: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4BD450u;
    {
        const bool branch_taken_0x4bd450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD450u;
        // 0x4bd454: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd450) {
            ctx->pc = 0x4BD45Cu;
            goto label_4bd45c;
        }
    }
    ctx->pc = 0x4BD458u;
    // 0x4bd458: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4bd458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4bd45c:
    // 0x4bd45c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x4bd45cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4bd460: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4bd460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x4bd464: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x4bd464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4bd468: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x4bd468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x4bd46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bd46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd470: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD478u;
}
