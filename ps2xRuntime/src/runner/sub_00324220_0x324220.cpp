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

// Function: sub_00324220
// Address: 0x324220 - 0x3242e0
void sub_00324220_0x324220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324220_0x324220");
#endif

    switch (ctx->pc) {
        case 0x324238u: goto label_324238;
        case 0x324248u: goto label_324248;
        case 0x324258u: goto label_324258;
        case 0x3242acu: goto label_3242ac;
        default: break;
    }

    ctx->pc = 0x324220u;

    // 0x324220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x324224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x324228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32422c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32422cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324230: 0xc0c8ca6  jal         func_323298
    ctx->pc = 0x324230u;
    SET_GPR_U32(ctx, 31, 0x324238u);
    ctx->pc = 0x324234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324230u;
    // 0x324234: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323298u, 0x324230u, 0x324238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324238u;
label_324238:
    // 0x324238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32423c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324240: 0xc0c8ca6  jal         func_323298
    ctx->pc = 0x324240u;
    SET_GPR_U32(ctx, 31, 0x324248u);
    ctx->pc = 0x324244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324240u;
    // 0x324244: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323298u, 0x324240u, 0x324248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324248u;
label_324248:
    // 0x324248: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x324248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32424c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32424cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324250: 0xc0cc742  jal         func_331D08
    ctx->pc = 0x324250u;
    SET_GPR_U32(ctx, 31, 0x324258u);
    ctx->pc = 0x324254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324250u;
    // 0x324254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D08u, 0x324250u, 0x324258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324258u;
label_324258:
    // 0x324258: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x324258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32425c: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x32425Cu;
    {
        const bool branch_taken_0x32425c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32425c) {
            ctx->pc = 0x324260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32425Cu;
            // 0x324260: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3242BCu;
            goto label_3242bc;
        }
    }
    ctx->pc = 0x324264u;
    // 0x324264: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x324264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x324268: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x324268u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32426c: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x32426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x324270: 0xfc447ff0  sd          $a0, 0x7FF0($v0)
    ctx->pc = 0x324270u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32752), GPR_U64(ctx, 4));
    // 0x324274: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x324274u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x324278: 0xfc437ff8  sd          $v1, 0x7FF8($v0)
    ctx->pc = 0x324278u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32760), GPR_U64(ctx, 3));
    // 0x32427c: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x32427cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x324280: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x324280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x324284: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x324284u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x324288: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x324288u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32428c: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x32428cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x324290: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x324290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x324294: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x324294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x324298: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324298u;
    {
        const bool branch_taken_0x324298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x324298) {
            ctx->pc = 0x32429Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324298u;
            // 0x32429c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3242B0u;
            goto label_3242b0;
        }
    }
    ctx->pc = 0x3242A0u;
    // 0x3242a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3242a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242a4: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x3242A4u;
    SET_GPR_U32(ctx, 31, 0x3242ACu);
    ctx->pc = 0x3242A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3242A4u;
    // 0x3242a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x3242A4u, 0x3242ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3242ACu;
label_3242ac:
    // 0x3242ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3242acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3242b0:
    // 0x3242b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3242b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3242b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3242B4u;
    {
        const bool branch_taken_0x3242b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3242B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242B4u;
        // 0x3242b8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242b4) {
            ctx->pc = 0x3242C4u;
            goto label_3242c4;
        }
    }
    ctx->pc = 0x3242BCu;
label_3242bc:
    // 0x3242bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3242bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242c0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3242c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_3242c4:
    // 0x3242c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3242c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3242c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3242c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3242cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3242ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3242d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3242d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3242d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3242D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3242D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242D4u;
        // 0x3242d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3242D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3242DCu;
    // 0x3242dc: 0x0  nop
    ctx->pc = 0x3242dcu;
    // NOP
    ctx->pc = 0x3242e0u;
}
