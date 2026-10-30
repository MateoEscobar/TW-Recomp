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

// Function: sub_00411010
// Address: 0x411010 - 0x4110c0
void sub_00411010_0x411010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411010_0x411010");
#endif

    switch (ctx->pc) {
        case 0x411094u: goto label_411094;
        default: break;
    }

    ctx->pc = 0x411010u;

    // 0x411010: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x411010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x411014: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x411014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x411018: 0x8cc3ced0  lw          $v1, -0x3130($a2)
    ctx->pc = 0x411018u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CED0u));
    // 0x41101c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41101cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x411020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x411024: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x411024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x411028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x411028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41102c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x41102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x411030: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x411030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x411034: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x411034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411038: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x411038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41103c: 0x8c463790  lw          $a2, 0x3790($v0)
    ctx->pc = 0x41103cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x553790u));
    // 0x411040: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x411040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x411044: 0x12060018  beq         $s0, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x411044u;
    {
        const bool branch_taken_0x411044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x411048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411044u;
        // 0x411048: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411044) {
            ctx->pc = 0x4110A8u;
            goto label_4110a8;
        }
    }
    ctx->pc = 0x41104Cu;
    // 0x41104c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x41104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x411050: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x411050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x411054: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x411054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x411058: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x411058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x41105c: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x41105cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 7));
    // 0x411060: 0x24840940  addiu       $a0, $a0, 0x940
    ctx->pc = 0x411060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
    // 0x411064: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x411064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x411068: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x411068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x41106c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41106Cu;
    {
        const bool branch_taken_0x41106c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x41106c) {
            ctx->pc = 0x41108Cu;
            goto label_41108c;
        }
    }
    ctx->pc = 0x411074u;
    // 0x411074: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x411074u;
    {
        const bool branch_taken_0x411074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x411074) {
            ctx->pc = 0x411078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411074u;
            // 0x411078: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41107Cu;
            goto label_41107c;
        }
    }
    ctx->pc = 0x41107Cu;
label_41107c:
    // 0x41107c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x41107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x411080: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x411080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x411084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x411084u;
    {
        const bool branch_taken_0x411084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411084u;
        // 0x411088: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411084) {
            ctx->pc = 0x411094u;
            goto label_411094;
        }
    }
    ctx->pc = 0x41108Cu;
label_41108c:
    // 0x41108c: 0xc13d640  jal         func_4F5900
    ctx->pc = 0x41108Cu;
    SET_GPR_U32(ctx, 31, 0x411094u);
    ctx->pc = 0x411090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41108Cu;
    // 0x411090: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5900u, 0x41108Cu, 0x411094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411094u;
label_411094:
    // 0x411094: 0x8e222168  lw          $v0, 0x2168($s1)
    ctx->pc = 0x411094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8552)));
    // 0x411098: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x411098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x41109c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x41109cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4110a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4110A0u;
    {
        const bool branch_taken_0x4110a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4110a0) {
            ctx->pc = 0x4110A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4110A0u;
            // 0x4110a4: 0xae232168  sw          $v1, 0x2168($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8552), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4110A8u;
            goto label_4110a8;
        }
    }
    ctx->pc = 0x4110A8u;
label_4110a8:
    // 0x4110a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4110a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4110ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4110acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4110b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4110b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4110b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4110b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4110b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4110B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4110BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4110B8u;
        // 0x4110bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4110B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4110C0u;
}
