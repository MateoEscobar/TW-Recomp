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

// Function: sub_004DFB50
// Address: 0x4dfb50 - 0x4dfc10
void sub_004DFB50_0x4dfb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DFB50_0x4dfb50");
#endif

    switch (ctx->pc) {
        case 0x4dfb50u: goto label_4dfb50;
        case 0x4dfb54u: goto label_4dfb54;
        case 0x4dfb58u: goto label_4dfb58;
        case 0x4dfb5cu: goto label_4dfb5c;
        case 0x4dfb60u: goto label_4dfb60;
        case 0x4dfb64u: goto label_4dfb64;
        case 0x4dfb68u: goto label_4dfb68;
        case 0x4dfb6cu: goto label_4dfb6c;
        case 0x4dfb70u: goto label_4dfb70;
        case 0x4dfb74u: goto label_4dfb74;
        case 0x4dfb78u: goto label_4dfb78;
        case 0x4dfb7cu: goto label_4dfb7c;
        case 0x4dfb80u: goto label_4dfb80;
        case 0x4dfb84u: goto label_4dfb84;
        case 0x4dfb88u: goto label_4dfb88;
        case 0x4dfb8cu: goto label_4dfb8c;
        case 0x4dfb90u: goto label_4dfb90;
        case 0x4dfb94u: goto label_4dfb94;
        case 0x4dfb98u: goto label_4dfb98;
        case 0x4dfb9cu: goto label_4dfb9c;
        case 0x4dfba0u: goto label_4dfba0;
        case 0x4dfba4u: goto label_4dfba4;
        case 0x4dfba8u: goto label_4dfba8;
        case 0x4dfbacu: goto label_4dfbac;
        case 0x4dfbb0u: goto label_4dfbb0;
        case 0x4dfbb4u: goto label_4dfbb4;
        case 0x4dfbb8u: goto label_4dfbb8;
        case 0x4dfbbcu: goto label_4dfbbc;
        case 0x4dfbc0u: goto label_4dfbc0;
        case 0x4dfbc4u: goto label_4dfbc4;
        case 0x4dfbc8u: goto label_4dfbc8;
        case 0x4dfbccu: goto label_4dfbcc;
        case 0x4dfbd0u: goto label_4dfbd0;
        case 0x4dfbd4u: goto label_4dfbd4;
        case 0x4dfbd8u: goto label_4dfbd8;
        case 0x4dfbdcu: goto label_4dfbdc;
        case 0x4dfbe0u: goto label_4dfbe0;
        case 0x4dfbe4u: goto label_4dfbe4;
        case 0x4dfbe8u: goto label_4dfbe8;
        case 0x4dfbecu: goto label_4dfbec;
        case 0x4dfbf0u: goto label_4dfbf0;
        case 0x4dfbf4u: goto label_4dfbf4;
        case 0x4dfbf8u: goto label_4dfbf8;
        case 0x4dfbfcu: goto label_4dfbfc;
        case 0x4dfc00u: goto label_4dfc00;
        case 0x4dfc04u: goto label_4dfc04;
        case 0x4dfc08u: goto label_4dfc08;
        case 0x4dfc0cu: goto label_4dfc0c;
        default: break;
    }

    ctx->pc = 0x4dfb50u;

label_4dfb50:
    // 0x4dfb50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4dfb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4dfb54:
    // 0x4dfb54: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4dfb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4dfb58:
    // 0x4dfb58: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4dfb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4dfb5c:
    // 0x4dfb5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dfb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dfb60:
    // 0x4dfb60: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4dfb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dfb64:
    // 0x4dfb64: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4dfb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4dfb68:
    // 0x4dfb68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4dfb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4dfb6c:
    // 0x4dfb6c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4dfb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dfb70:
    // 0x4dfb70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4dfb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4dfb74:
    // 0x4dfb74: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4dfb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4dfb78:
    // 0x4dfb78: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4dfb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4dfb7c:
    // 0x4dfb7c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4dfb80:
    if (ctx->pc == 0x4DFB80u) {
        ctx->pc = 0x4DFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFB7Cu;
        // 0x4dfb80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFB84u;
        goto label_4dfb84;
    }
    ctx->pc = 0x4DFB7Cu;
    {
        const bool branch_taken_0x4dfb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFB7Cu;
        // 0x4dfb80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfb7c) {
            ctx->pc = 0x4DFBE8u;
            goto label_4dfbe8;
        }
    }
    ctx->pc = 0x4DFB84u;
label_4dfb84:
    // 0x4dfb84: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x4dfb84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4dfb88:
    // 0x4dfb88: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x4dfb88u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_4dfb8c:
    // 0x4dfb8c: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x4dfb8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_4dfb90:
    // 0x4dfb90: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4dfb90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4dfb94:
    // 0x4dfb94: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4dfb94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4dfb98:
    // 0x4dfb98: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_4dfb9c:
    if (ctx->pc == 0x4DFB9Cu) {
        ctx->pc = 0x4DFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFB98u;
        // 0x4dfb9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFBA0u;
        goto label_4dfba0;
    }
    ctx->pc = 0x4DFB98u;
    {
        const bool branch_taken_0x4dfb98 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfb98) {
            ctx->pc = 0x4DFB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFB98u;
            // 0x4dfb9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFBA0u;
            goto label_4dfba0;
        }
    }
    ctx->pc = 0x4DFBA0u;
label_4dfba0:
    // 0x4dfba0: 0x26852c08  addiu       $a1, $s4, 0x2C08
    ctx->pc = 0x4dfba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11272));
label_4dfba4:
    // 0x4dfba4: 0x8eacb9c0  lw          $t4, -0x4640($s5)
    ctx->pc = 0x4dfba4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
label_4dfba8:
    // 0x4dfba8: 0x240601f8  addiu       $a2, $zero, 0x1F8
    ctx->pc = 0x4dfba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_4dfbac:
    // 0x4dfbac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dfbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dfbb0:
    // 0x4dfbb0: 0x26682c10  addiu       $t0, $s3, 0x2C10
    ctx->pc = 0x4dfbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 11280));
label_4dfbb4:
    // 0x4dfbb4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4dfbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4dfbb8:
    // 0x4dfbb8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dfbb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dfbbc:
    // 0x4dfbbc: 0x264a2c38  addiu       $t2, $s2, 0x2C38
    ctx->pc = 0x4dfbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 11320));
label_4dfbc0:
    // 0x4dfbc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4dfbc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dfbc4:
    // 0x4dfbc4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4dfbc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4dfbc8:
    // 0x4dfbc8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4dfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4dfbcc:
    // 0x4dfbcc: 0x40f809  jalr        $v0
label_4dfbd0:
    if (ctx->pc == 0x4DFBD0u) {
        ctx->pc = 0x4DFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFBCCu;
        // 0x4dfbd0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFBD4u;
        goto label_4dfbd4;
    }
    ctx->pc = 0x4DFBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DFBD4u);
        ctx->pc = 0x4DFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFBCCu;
        // 0x4dfbd0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFBCCu, 0x4DFBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DFBD4u;
label_4dfbd4:
    // 0x4dfbd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dfbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4dfbd8:
    // 0x4dfbd8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4dfbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4dfbdc:
    // 0x4dfbdc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4dfbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dfbe0:
    // 0x4dfbe0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_4dfbe4:
    if (ctx->pc == 0x4DFBE4u) {
        ctx->pc = 0x4DFBE8u;
        goto label_4dfbe8;
    }
    ctx->pc = 0x4DFBE0u;
    {
        const bool branch_taken_0x4dfbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfbe0) {
            ctx->pc = 0x4DFB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dfb98;
        }
    }
    ctx->pc = 0x4DFBE8u;
label_4dfbe8:
    // 0x4dfbe8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4dfbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dfbec:
    // 0x4dfbec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4dfbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dfbf0:
    // 0x4dfbf0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4dfbf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dfbf4:
    // 0x4dfbf4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4dfbf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dfbf8:
    // 0x4dfbf8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4dfbf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dfbfc:
    // 0x4dfbfc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4dfbfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dfc00:
    // 0x4dfc00: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4dfc00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfc04:
    // 0x4dfc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dfc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dfc08:
    // 0x4dfc08: 0x3e00008  jr          $ra
label_4dfc0c:
    if (ctx->pc == 0x4DFC0Cu) {
        ctx->pc = 0x4DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFC08u;
        // 0x4dfc0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFC10u;
        goto label_fallthrough_0x4dfc08;
    }
    ctx->pc = 0x4DFC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFC08u;
        // 0x4dfc0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dfc08:
    ctx->pc = 0x4DFC10u;
}
