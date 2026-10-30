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

// Function: sub_001058F0
// Address: 0x1058f0 - 0x105990
void sub_001058F0_0x1058f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001058F0_0x1058f0");
#endif

    switch (ctx->pc) {
        case 0x10591cu: goto label_10591c;
        case 0x105930u: goto label_105930;
        default: break;
    }

    ctx->pc = 0x1058f0u;

    // 0x1058f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1058f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1058f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1058f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1058f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1058f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1058fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1058fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105908: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x105908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10590c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10590Cu;
    {
        const bool branch_taken_0x10590c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10590Cu;
        // 0x105910: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10590c) {
            ctx->pc = 0x10591Cu;
            goto label_10591c;
        }
    }
    ctx->pc = 0x105914u;
    // 0x105914: 0xc041120  jal         func_104480
    ctx->pc = 0x105914u;
    SET_GPR_U32(ctx, 31, 0x10591Cu);
    ctx->pc = 0x105918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105914u;
    // 0x105918: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x105914u, 0x10591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10591Cu;
label_10591c:
    // 0x10591c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x10591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x105920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105920u;
    {
        const bool branch_taken_0x105920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105920u;
        // 0x105924: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105920) {
            ctx->pc = 0x105934u;
            goto label_105934;
        }
    }
    ctx->pc = 0x105928u;
    // 0x105928: 0xc041124  jal         func_104490
    ctx->pc = 0x105928u;
    SET_GPR_U32(ctx, 31, 0x105930u);
    ctx->pc = 0x10592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105928u;
    // 0x10592c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x105928u, 0x105930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105930u;
label_105930:
    // 0x105930: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x105930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_105934:
    // 0x105934: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105934u;
    {
        const bool branch_taken_0x105934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105934u;
        // 0x105938: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105934) {
            ctx->pc = 0x10594Cu;
            goto label_10594c;
        }
    }
    ctx->pc = 0x10593Cu;
    // 0x10593c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x10593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x105940: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x105940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x105944: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x105944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x105948: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x105948u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_10594c:
    // 0x10594c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10594cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105954: 0x3e00008  jr          $ra
    ctx->pc = 0x105954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105954u;
        // 0x105958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10595Cu;
    // 0x10595c: 0x0  nop
    ctx->pc = 0x10595cu;
    // NOP
    // 0x105960: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x105960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x105964: 0x0  nop
    ctx->pc = 0x105964u;
    // NOP
    // 0x105968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x105968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10596c: 0x0  nop
    ctx->pc = 0x10596cu;
    // NOP
    // 0x105970: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x105970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x105974: 0x0  nop
    ctx->pc = 0x105974u;
    // NOP
    // 0x105978: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x105978u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x10597c: 0x0  nop
    ctx->pc = 0x10597cu;
    // NOP
    // 0x105980: 0x24420148  addiu       $v0, $v0, 0x148
    ctx->pc = 0x105980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x105984: 0x0  nop
    ctx->pc = 0x105984u;
    // NOP
    // 0x105988: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x105988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10598c: 0x0  nop
    ctx->pc = 0x10598cu;
    // NOP
    ctx->pc = 0x105990u;
}
