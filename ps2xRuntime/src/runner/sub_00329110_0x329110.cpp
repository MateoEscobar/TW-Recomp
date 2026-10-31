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

// Function: sub_00329110
// Address: 0x329110 - 0x3291b8
void sub_00329110_0x329110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329110_0x329110");
#endif

    switch (ctx->pc) {
        case 0x329134u: goto label_329134;
        case 0x329178u: goto label_329178;
        case 0x329190u: goto label_329190;
        case 0x3291a4u: goto label_3291a4;
        default: break;
    }

    ctx->pc = 0x329110u;

    // 0x329110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329118: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x329118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32911c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32911cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329124: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x329124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x329128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32912c: 0xc0cc8ea  jal         func_3323A8
    ctx->pc = 0x32912Cu;
    SET_GPR_U32(ctx, 31, 0x329134u);
    ctx->pc = 0x329130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32912Cu;
    // 0x329130: 0x24a553c0  addiu       $a1, $a1, 0x53C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3323A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3323A8u, 0x32912Cu, 0x329134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329134u;
label_329134:
    // 0x329134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329138: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x329138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32913c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329140: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x329140u;
    {
        const bool branch_taken_0x329140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x329140) {
            ctx->pc = 0x329144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329140u;
            // 0x329144: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3291A8u;
            goto label_3291a8;
        }
    }
    ctx->pc = 0x329148u;
    // 0x329148: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x329148u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32914c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x32914cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329150: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x329150u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x329154: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x329154u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x329158: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x329158u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x32915c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32915cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329160: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x329160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x329164: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329164u;
    {
        const bool branch_taken_0x329164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x329164) {
            ctx->pc = 0x329168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329164u;
            // 0x329168: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32917Cu;
            goto label_32917c;
        }
    }
    ctx->pc = 0x32916Cu;
    // 0x32916c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329170: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x329170u;
    SET_GPR_U32(ctx, 31, 0x329178u);
    ctx->pc = 0x329174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329170u;
    // 0x329174: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x329170u, 0x329178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329178u;
label_329178:
    // 0x329178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x329178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32917c:
    // 0x32917c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329184: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x329184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x329188: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x329188u;
    SET_GPR_U32(ctx, 31, 0x329190u);
    ctx->pc = 0x32918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329188u;
    // 0x32918c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x329188u, 0x329190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329190u;
label_329190:
    // 0x329190: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x329190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32919c: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x32919Cu;
    SET_GPR_U32(ctx, 31, 0x3291A4u);
    ctx->pc = 0x3291A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32919Cu;
    // 0x3291a0: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x32919Cu, 0x3291A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291A4u;
label_3291a4:
    // 0x3291a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3291a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3291a8:
    // 0x3291a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3291a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3291ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3291acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3291b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3291B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3291B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291B0u;
        // 0x3291b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3291B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3291B8u;
}
