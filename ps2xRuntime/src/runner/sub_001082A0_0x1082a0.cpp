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

// Function: sub_001082A0
// Address: 0x1082a0 - 0x108370
void sub_001082A0_0x1082a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001082A0_0x1082a0");
#endif

    switch (ctx->pc) {
        case 0x1082ccu: goto label_1082cc;
        case 0x1082d4u: goto label_1082d4;
        case 0x1082dcu: goto label_1082dc;
        case 0x1082e4u: goto label_1082e4;
        case 0x1082f8u: goto label_1082f8;
        case 0x108300u: goto label_108300;
        case 0x108308u: goto label_108308;
        case 0x108310u: goto label_108310;
        default: break;
    }

    ctx->pc = 0x1082a0u;

    // 0x1082a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1082a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1082a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1082a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1082a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1082a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1082ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1082acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1082b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1082b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1082b8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1082b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1082bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1082BCu;
    {
        const bool branch_taken_0x1082bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082BCu;
        // 0x1082c0: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082bc) {
            ctx->pc = 0x1082E4u;
            goto label_1082e4;
        }
    }
    ctx->pc = 0x1082C4u;
    // 0x1082c4: 0xc041120  jal         func_104480
    ctx->pc = 0x1082C4u;
    SET_GPR_U32(ctx, 31, 0x1082CCu);
    ctx->pc = 0x1082C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082C4u;
    // 0x1082c8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x1082C4u, 0x1082CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082CCu;
label_1082cc:
    // 0x1082cc: 0xc041120  jal         func_104480
    ctx->pc = 0x1082CCu;
    SET_GPR_U32(ctx, 31, 0x1082D4u);
    ctx->pc = 0x1082D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082CCu;
    // 0x1082d0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x1082CCu, 0x1082D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082D4u;
label_1082d4:
    // 0x1082d4: 0xc041120  jal         func_104480
    ctx->pc = 0x1082D4u;
    SET_GPR_U32(ctx, 31, 0x1082DCu);
    ctx->pc = 0x1082D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082D4u;
    // 0x1082d8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x1082D4u, 0x1082DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082DCu;
label_1082dc:
    // 0x1082dc: 0xc041120  jal         func_104480
    ctx->pc = 0x1082DCu;
    SET_GPR_U32(ctx, 31, 0x1082E4u);
    ctx->pc = 0x1082E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082DCu;
    // 0x1082e0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x1082DCu, 0x1082E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082E4u;
label_1082e4:
    // 0x1082e4: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1082e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1082e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1082E8u;
    {
        const bool branch_taken_0x1082e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082E8u;
        // 0x1082ec: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082e8) {
            ctx->pc = 0x108314u;
            goto label_108314;
        }
    }
    ctx->pc = 0x1082F0u;
    // 0x1082f0: 0xc041124  jal         func_104490
    ctx->pc = 0x1082F0u;
    SET_GPR_U32(ctx, 31, 0x1082F8u);
    ctx->pc = 0x1082F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082F0u;
    // 0x1082f4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x1082F0u, 0x1082F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082F8u;
label_1082f8:
    // 0x1082f8: 0xc041124  jal         func_104490
    ctx->pc = 0x1082F8u;
    SET_GPR_U32(ctx, 31, 0x108300u);
    ctx->pc = 0x1082FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082F8u;
    // 0x1082fc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x1082F8u, 0x108300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108300u;
label_108300:
    // 0x108300: 0xc041124  jal         func_104490
    ctx->pc = 0x108300u;
    SET_GPR_U32(ctx, 31, 0x108308u);
    ctx->pc = 0x108304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108300u;
    // 0x108304: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x108300u, 0x108308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108308u;
label_108308:
    // 0x108308: 0xc041124  jal         func_104490
    ctx->pc = 0x108308u;
    SET_GPR_U32(ctx, 31, 0x108310u);
    ctx->pc = 0x10830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108308u;
    // 0x10830c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x108308u, 0x108310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108310u;
label_108310:
    // 0x108310: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x108310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_108314:
    // 0x108314: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x108314u;
    {
        const bool branch_taken_0x108314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108314) {
            ctx->pc = 0x108318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108314u;
            // 0x108318: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108360u;
            goto label_108360;
        }
    }
    ctx->pc = 0x10831Cu;
    // 0x10831c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x108320: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x108320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x108324: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x108324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x108328: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x108328u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10832c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x108330: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x108330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x108334: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x108334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x108338: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x108338u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10833c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x10833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x108340: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x108340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x108344: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x108344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x108348: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x108348u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10834c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x10834cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x108350: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x108350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x108354: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x108354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x108358: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x108358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10835c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10835cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108360:
    // 0x108360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108368: 0x3e00008  jr          $ra
    ctx->pc = 0x108368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108368u;
        // 0x10836c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108370u;
}
