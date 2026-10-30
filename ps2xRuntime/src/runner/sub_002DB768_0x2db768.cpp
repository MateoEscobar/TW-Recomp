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

// Function: sub_002DB768
// Address: 0x2db768 - 0x2db810
void sub_002DB768_0x2db768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB768_0x2db768");
#endif

    switch (ctx->pc) {
        case 0x2db768u: goto label_2db768;
        case 0x2db76cu: goto label_2db76c;
        case 0x2db770u: goto label_2db770;
        case 0x2db774u: goto label_2db774;
        case 0x2db778u: goto label_2db778;
        case 0x2db77cu: goto label_2db77c;
        case 0x2db780u: goto label_2db780;
        case 0x2db784u: goto label_2db784;
        case 0x2db788u: goto label_2db788;
        case 0x2db78cu: goto label_2db78c;
        case 0x2db790u: goto label_2db790;
        case 0x2db794u: goto label_2db794;
        case 0x2db798u: goto label_2db798;
        case 0x2db79cu: goto label_2db79c;
        case 0x2db7a0u: goto label_2db7a0;
        case 0x2db7a4u: goto label_2db7a4;
        case 0x2db7a8u: goto label_2db7a8;
        case 0x2db7acu: goto label_2db7ac;
        case 0x2db7b0u: goto label_2db7b0;
        case 0x2db7b4u: goto label_2db7b4;
        case 0x2db7b8u: goto label_2db7b8;
        case 0x2db7bcu: goto label_2db7bc;
        case 0x2db7c0u: goto label_2db7c0;
        case 0x2db7c4u: goto label_2db7c4;
        case 0x2db7c8u: goto label_2db7c8;
        case 0x2db7ccu: goto label_2db7cc;
        case 0x2db7d0u: goto label_2db7d0;
        case 0x2db7d4u: goto label_2db7d4;
        case 0x2db7d8u: goto label_2db7d8;
        case 0x2db7dcu: goto label_2db7dc;
        case 0x2db7e0u: goto label_2db7e0;
        case 0x2db7e4u: goto label_2db7e4;
        case 0x2db7e8u: goto label_2db7e8;
        case 0x2db7ecu: goto label_2db7ec;
        case 0x2db7f0u: goto label_2db7f0;
        case 0x2db7f4u: goto label_2db7f4;
        case 0x2db7f8u: goto label_2db7f8;
        case 0x2db7fcu: goto label_2db7fc;
        case 0x2db800u: goto label_2db800;
        case 0x2db804u: goto label_2db804;
        case 0x2db808u: goto label_2db808;
        case 0x2db80cu: goto label_2db80c;
        default: break;
    }

    ctx->pc = 0x2db768u;

label_2db768:
    // 0x2db768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2db76c:
    // 0x2db76c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2db76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2db770:
    // 0x2db770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2db770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2db774:
    // 0x2db774: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2db774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2db778:
    // 0x2db778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db77c:
    // 0x2db77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2db780:
    // 0x2db780: 0x24632010  addiu       $v1, $v1, 0x2010
    ctx->pc = 0x2db780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8208));
label_2db784:
    // 0x2db784: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2db784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2db788:
    // 0x2db788: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2db788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2db78c:
    // 0x2db78c: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2db78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_2db790:
    // 0x2db790: 0xe60c0018  swc1        $f12, 0x18($s0)
    ctx->pc = 0x2db790u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2db794:
    // 0x2db794: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x2db794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
label_2db798:
    // 0x2db798: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2db798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2db79c:
    // 0x2db79c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2db79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2db7a0:
    // 0x2db7a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2db7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2db7a4:
    // 0x2db7a4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2db7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2db7a8:
    // 0x2db7a8: 0xa204002f  sb          $a0, 0x2F($s0)
    ctx->pc = 0x2db7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 4));
label_2db7ac:
    // 0x2db7ac: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2db7acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2db7b0:
    // 0x2db7b0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2db7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2db7b4:
    // 0x2db7b4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2db7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2db7b8:
    // 0x2db7b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2db7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2db7bc:
    // 0x2db7bc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2db7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2db7c0:
    // 0x2db7c0: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2db7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
label_2db7c4:
    // 0x2db7c4: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x2db7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
label_2db7c8:
    // 0x2db7c8: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x2db7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
label_2db7cc:
    // 0x2db7cc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2db7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2db7d0:
    // 0x2db7d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2db7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2db7d4:
    // 0x2db7d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2db7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2db7d8:
    // 0x2db7d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2db7dc:
    // 0x2db7dc: 0x40f809  jalr        $v0
label_2db7e0:
    if (ctx->pc == 0x2DB7E0u) {
        ctx->pc = 0x2DB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7DCu;
        // 0x2db7e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB7E4u;
        goto label_2db7e4;
    }
    ctx->pc = 0x2DB7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB7E4u);
        ctx->pc = 0x2DB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7DCu;
        // 0x2db7e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB7DCu, 0x2DB7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DB7E4u;
label_2db7e4:
    // 0x2db7e4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2db7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2db7e8:
    // 0x2db7e8: 0xc10586c  jal         func_4161B0
label_2db7ec:
    if (ctx->pc == 0x2DB7ECu) {
        ctx->pc = 0x2DB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7E8u;
        // 0x2db7ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB7F0u;
        goto label_2db7f0;
    }
    ctx->pc = 0x2DB7E8u;
    SET_GPR_U32(ctx, 31, 0x2DB7F0u);
    ctx->pc = 0x2DB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7E8u;
    // 0x2db7ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B0u, 0x2DB7E8u, 0x2DB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7F0u;
label_2db7f0:
    // 0x2db7f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2db7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db7f4:
    // 0x2db7f4: 0xc089bdc  jal         func_226F70
label_2db7f8:
    if (ctx->pc == 0x2DB7F8u) {
        ctx->pc = 0x2DB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7F4u;
        // 0x2db7f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB7FCu;
        goto label_2db7fc;
    }
    ctx->pc = 0x2DB7F4u;
    SET_GPR_U32(ctx, 31, 0x2DB7FCu);
    ctx->pc = 0x2DB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7F4u;
    // 0x2db7f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DB7F4u, 0x2DB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7FCu;
label_2db7fc:
    // 0x2db7fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db800:
    // 0x2db800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2db804:
    // 0x2db804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2db804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2db808:
    // 0x2db808: 0x3e00008  jr          $ra
label_2db80c:
    if (ctx->pc == 0x2DB80Cu) {
        ctx->pc = 0x2DB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB808u;
        // 0x2db80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB810u;
        goto label_fallthrough_0x2db808;
    }
    ctx->pc = 0x2DB808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB808u;
        // 0x2db80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2db808:
    ctx->pc = 0x2DB810u;
}
