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

// Function: sub_003D9698
// Address: 0x3d9698 - 0x3d9710
void sub_003D9698_0x3d9698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9698_0x3d9698");
#endif

    switch (ctx->pc) {
        case 0x3d9698u: goto label_3d9698;
        case 0x3d969cu: goto label_3d969c;
        case 0x3d96a0u: goto label_3d96a0;
        case 0x3d96a4u: goto label_3d96a4;
        case 0x3d96a8u: goto label_3d96a8;
        case 0x3d96acu: goto label_3d96ac;
        case 0x3d96b0u: goto label_3d96b0;
        case 0x3d96b4u: goto label_3d96b4;
        case 0x3d96b8u: goto label_3d96b8;
        case 0x3d96bcu: goto label_3d96bc;
        case 0x3d96c0u: goto label_3d96c0;
        case 0x3d96c4u: goto label_3d96c4;
        case 0x3d96c8u: goto label_3d96c8;
        case 0x3d96ccu: goto label_3d96cc;
        case 0x3d96d0u: goto label_3d96d0;
        case 0x3d96d4u: goto label_3d96d4;
        case 0x3d96d8u: goto label_3d96d8;
        case 0x3d96dcu: goto label_3d96dc;
        case 0x3d96e0u: goto label_3d96e0;
        case 0x3d96e4u: goto label_3d96e4;
        case 0x3d96e8u: goto label_3d96e8;
        case 0x3d96ecu: goto label_3d96ec;
        case 0x3d96f0u: goto label_3d96f0;
        case 0x3d96f4u: goto label_3d96f4;
        case 0x3d96f8u: goto label_3d96f8;
        case 0x3d96fcu: goto label_3d96fc;
        case 0x3d9700u: goto label_3d9700;
        case 0x3d9704u: goto label_3d9704;
        case 0x3d9708u: goto label_3d9708;
        case 0x3d970cu: goto label_3d970c;
        default: break;
    }

    ctx->pc = 0x3d9698u;

label_3d9698:
    // 0x3d9698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d9698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d969c:
    // 0x3d969c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3d96a0:
    // 0x3d96a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d96a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d96a4:
    // 0x3d96a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d96a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3d96a8:
    // 0x3d96a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d96a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d96ac:
    // 0x3d96ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d96acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d96b0:
    // 0x3d96b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d96b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d96b4:
    // 0x3d96b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d96b8:
    // 0x3d96b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d96b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d96bc:
    // 0x3d96bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d96c0:
    // 0x3d96c0: 0x40f809  jalr        $v0
label_3d96c4:
    if (ctx->pc == 0x3D96C4u) {
        ctx->pc = 0x3D96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96C0u;
        // 0x3d96c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D96C8u;
        goto label_3d96c8;
    }
    ctx->pc = 0x3D96C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D96C8u);
        ctx->pc = 0x3D96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96C0u;
        // 0x3d96c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D96C0u, 0x3D96C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D96C8u;
label_3d96c8:
    // 0x3d96c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d96c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d96cc:
    // 0x3d96cc: 0xc0ea14c  jal         func_3A8530
label_3d96d0:
    if (ctx->pc == 0x3D96D0u) {
        ctx->pc = 0x3D96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96CCu;
        // 0x3d96d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D96D4u;
        goto label_3d96d4;
    }
    ctx->pc = 0x3D96CCu;
    SET_GPR_U32(ctx, 31, 0x3D96D4u);
    ctx->pc = 0x3D96D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D96CCu;
    // 0x3d96d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D96CCu, 0x3D96D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D96D4u;
label_3d96d4:
    // 0x3d96d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3d96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3d96d8:
    // 0x3d96d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d96d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d96dc:
    // 0x3d96dc: 0xc0e858c  jal         func_3A1630
label_3d96e0:
    if (ctx->pc == 0x3D96E0u) {
        ctx->pc = 0x3D96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96DCu;
        // 0x3d96e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D96E4u;
        goto label_3d96e4;
    }
    ctx->pc = 0x3D96DCu;
    SET_GPR_U32(ctx, 31, 0x3D96E4u);
    ctx->pc = 0x3D96E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D96DCu;
    // 0x3d96e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D96DCu, 0x3D96E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D96E4u;
label_3d96e4:
    // 0x3d96e4: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3d96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_3d96e8:
    // 0x3d96e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d96e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d96ec:
    // 0x3d96ec: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x3d96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_3d96f0:
    // 0x3d96f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3d96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3d96f4:
    // 0x3d96f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d96f8:
    // 0x3d96f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d96f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3d96fc:
    // 0x3d96fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d96fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9700:
    // 0x3d9700: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d9700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9704:
    // 0x3d9704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9708:
    // 0x3d9708: 0x3e00008  jr          $ra
label_3d970c:
    if (ctx->pc == 0x3D970Cu) {
        ctx->pc = 0x3D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9708u;
        // 0x3d970c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9710u;
        goto label_fallthrough_0x3d9708;
    }
    ctx->pc = 0x3D9708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9708u;
        // 0x3d970c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9708:
    ctx->pc = 0x3D9710u;
}
