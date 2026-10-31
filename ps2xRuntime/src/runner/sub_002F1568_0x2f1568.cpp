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

// Function: sub_002F1568
// Address: 0x2f1568 - 0x2f1610
void sub_002F1568_0x2f1568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1568_0x2f1568");
#endif

    switch (ctx->pc) {
        case 0x2f1568u: goto label_2f1568;
        case 0x2f156cu: goto label_2f156c;
        case 0x2f1570u: goto label_2f1570;
        case 0x2f1574u: goto label_2f1574;
        case 0x2f1578u: goto label_2f1578;
        case 0x2f157cu: goto label_2f157c;
        case 0x2f1580u: goto label_2f1580;
        case 0x2f1584u: goto label_2f1584;
        case 0x2f1588u: goto label_2f1588;
        case 0x2f158cu: goto label_2f158c;
        case 0x2f1590u: goto label_2f1590;
        case 0x2f1594u: goto label_2f1594;
        case 0x2f1598u: goto label_2f1598;
        case 0x2f159cu: goto label_2f159c;
        case 0x2f15a0u: goto label_2f15a0;
        case 0x2f15a4u: goto label_2f15a4;
        case 0x2f15a8u: goto label_2f15a8;
        case 0x2f15acu: goto label_2f15ac;
        case 0x2f15b0u: goto label_2f15b0;
        case 0x2f15b4u: goto label_2f15b4;
        case 0x2f15b8u: goto label_2f15b8;
        case 0x2f15bcu: goto label_2f15bc;
        case 0x2f15c0u: goto label_2f15c0;
        case 0x2f15c4u: goto label_2f15c4;
        case 0x2f15c8u: goto label_2f15c8;
        case 0x2f15ccu: goto label_2f15cc;
        case 0x2f15d0u: goto label_2f15d0;
        case 0x2f15d4u: goto label_2f15d4;
        case 0x2f15d8u: goto label_2f15d8;
        case 0x2f15dcu: goto label_2f15dc;
        case 0x2f15e0u: goto label_2f15e0;
        case 0x2f15e4u: goto label_2f15e4;
        case 0x2f15e8u: goto label_2f15e8;
        case 0x2f15ecu: goto label_2f15ec;
        case 0x2f15f0u: goto label_2f15f0;
        case 0x2f15f4u: goto label_2f15f4;
        case 0x2f15f8u: goto label_2f15f8;
        case 0x2f15fcu: goto label_2f15fc;
        case 0x2f1600u: goto label_2f1600;
        case 0x2f1604u: goto label_2f1604;
        case 0x2f1608u: goto label_2f1608;
        case 0x2f160cu: goto label_2f160c;
        default: break;
    }

    ctx->pc = 0x2f1568u;

label_2f1568:
    // 0x2f1568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f1568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f156c:
    // 0x2f156c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1570:
    // 0x2f1570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f1574:
    // 0x2f1574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1578:
    // 0x2f1578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f157c:
    // 0x2f157c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f157cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1580:
    // 0x2f1580: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f1580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2f1584:
    // 0x2f1584: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2f1584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2f1588:
    // 0x2f1588: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2f1588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2f158c:
    // 0x2f158c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f158cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1590:
    // 0x2f1590: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1594:
    // 0x2f1594: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2f1594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2f1598:
    // 0x2f1598: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f1598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f159c:
    // 0x2f159c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f15a0:
    // 0x2f15a0: 0xa0510265  sb          $s1, 0x265($v0)
    ctx->pc = 0x2f15a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 17));
label_2f15a4:
    // 0x2f15a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f15a8:
    // 0x2f15a8: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f15a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2f15ac:
    // 0x2f15ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f15acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f15b0:
    // 0x2f15b0: 0xa051011e  sb          $s1, 0x11E($v0)
    ctx->pc = 0x2f15b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 17));
label_2f15b4:
    // 0x2f15b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f15b8:
    // 0x2f15b8: 0xc0a22c6  jal         func_288B18
label_2f15bc:
    if (ctx->pc == 0x2F15BCu) {
        ctx->pc = 0x2F15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15B8u;
        // 0x2f15bc: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F15C0u;
        goto label_2f15c0;
    }
    ctx->pc = 0x2F15B8u;
    SET_GPR_U32(ctx, 31, 0x2F15C0u);
    ctx->pc = 0x2F15BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15B8u;
    // 0x2f15bc: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2F15B8u, 0x2F15C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15C0u;
label_2f15c0:
    // 0x2f15c0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f15c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2f15c4:
    // 0x2f15c4: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_2f15c8:
    // 0x2f15c8: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x2f15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2f15cc:
    // 0x2f15cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2f15ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f15d0:
    // 0x2f15d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f15d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f15d4:
    // 0x2f15d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f15d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f15d8:
    // 0x2f15d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f15d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f15dc:
    // 0x2f15dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2f15dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2f15e0:
    // 0x2f15e0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f15e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f15e4:
    // 0x2f15e4: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2f15e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2f15e8:
    // 0x2f15e8: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x2f15e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2f15ec:
    // 0x2f15ec: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x2f15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2f15f0:
    // 0x2f15f0: 0x40f809  jalr        $v0
label_2f15f4:
    if (ctx->pc == 0x2F15F4u) {
        ctx->pc = 0x2F15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15F0u;
        // 0x2f15f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F15F8u;
        goto label_2f15f8;
    }
    ctx->pc = 0x2F15F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F15F8u);
        ctx->pc = 0x2F15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15F0u;
        // 0x2f15f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F15F0u, 0x2F15F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F15F8u;
label_2f15f8:
    // 0x2f15f8: 0xa2110284  sb          $s1, 0x284($s0)
    ctx->pc = 0x2f15f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 17));
label_2f15fc:
    // 0x2f15fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f15fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f1600:
    // 0x2f1600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1604:
    // 0x2f1604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1608:
    // 0x2f1608: 0x3e00008  jr          $ra
label_2f160c:
    if (ctx->pc == 0x2F160Cu) {
        ctx->pc = 0x2F160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1608u;
        // 0x2f160c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1610u;
        goto label_fallthrough_0x2f1608;
    }
    ctx->pc = 0x2F1608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1608u;
        // 0x2f160c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f1608:
    ctx->pc = 0x2F1610u;
}
