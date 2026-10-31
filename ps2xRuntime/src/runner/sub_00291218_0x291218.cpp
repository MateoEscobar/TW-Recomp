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

// Function: sub_00291218
// Address: 0x291218 - 0x2912b0
void sub_00291218_0x291218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291218_0x291218");
#endif

    switch (ctx->pc) {
        case 0x291250u: goto label_291250;
        case 0x29125cu: goto label_29125c;
        case 0x291264u: goto label_291264;
        case 0x291278u: goto label_291278;
        case 0x291290u: goto label_291290;
        default: break;
    }

    ctx->pc = 0x291218u;

    // 0x291218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29121c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x291220: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x291220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x291224: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x291224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x291228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29122c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x291230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291234: 0x26300164  addiu       $s0, $s1, 0x164
    ctx->pc = 0x291234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    // 0x291238: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x291238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29123c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29123cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291240: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x291240u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x291244: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x291244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x291248: 0xc13b748  jal         func_4EDD20
    ctx->pc = 0x291248u;
    SET_GPR_U32(ctx, 31, 0x291250u);
    ctx->pc = 0x29124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291248u;
    // 0x29124c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x291248u, 0x291250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291250u;
label_291250:
    // 0x291250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291254: 0xc137826  jal         func_4DE098
    ctx->pc = 0x291254u;
    SET_GPR_U32(ctx, 31, 0x29125Cu);
    ctx->pc = 0x291258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291254u;
    // 0x291258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x291254u, 0x29125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29125Cu;
label_29125c:
    // 0x29125c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29125Cu;
    SET_GPR_U32(ctx, 31, 0x291264u);
    ctx->pc = 0x291260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29125Cu;
    // 0x291260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29125Cu, 0x291264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291264u;
label_291264:
    // 0x291264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291268: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x291268u;
    {
        const bool branch_taken_0x291268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291268u;
        // 0x29126c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291268) {
            ctx->pc = 0x29129Cu;
            goto label_29129c;
        }
    }
    ctx->pc = 0x291270u;
    // 0x291270: 0xc087502  jal         func_21D408
    ctx->pc = 0x291270u;
    SET_GPR_U32(ctx, 31, 0x291278u);
    ctx->pc = 0x291274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291270u;
    // 0x291274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x291270u, 0x291278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291278u;
label_291278:
    // 0x291278: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x291278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x29127c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29127Cu;
    {
        const bool branch_taken_0x29127c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29127Cu;
        // 0x291280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29127c) {
            ctx->pc = 0x29129Cu;
            goto label_29129c;
        }
    }
    ctx->pc = 0x291284u;
    // 0x291284: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x291284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x291288: 0xc088976  jal         func_2225D8
    ctx->pc = 0x291288u;
    SET_GPR_U32(ctx, 31, 0x291290u);
    ctx->pc = 0x29128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291288u;
    // 0x29128c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225D8u, 0x291288u, 0x291290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291290u;
label_291290:
    // 0x291290: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x291290u;
    {
        const bool branch_taken_0x291290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291290u;
        // 0x291294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291290) {
            ctx->pc = 0x29129Cu;
            goto label_29129c;
        }
    }
    ctx->pc = 0x291298u;
    // 0x291298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29129c:
    // 0x29129c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29129cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2912a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2912a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2912a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2912a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2912a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2912A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912A8u;
        // 0x2912ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2912A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2912B0u;
}
