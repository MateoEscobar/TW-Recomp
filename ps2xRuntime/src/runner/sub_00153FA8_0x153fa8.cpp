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

// Function: sub_00153FA8
// Address: 0x153fa8 - 0x154068
void sub_00153FA8_0x153fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153FA8_0x153fa8");
#endif

    switch (ctx->pc) {
        case 0x153fa8u: goto label_153fa8;
        case 0x153facu: goto label_153fac;
        case 0x153fb0u: goto label_153fb0;
        case 0x153fb4u: goto label_153fb4;
        case 0x153fb8u: goto label_153fb8;
        case 0x153fbcu: goto label_153fbc;
        case 0x153fc0u: goto label_153fc0;
        case 0x153fc4u: goto label_153fc4;
        case 0x153fc8u: goto label_153fc8;
        case 0x153fccu: goto label_153fcc;
        case 0x153fd0u: goto label_153fd0;
        case 0x153fd4u: goto label_153fd4;
        case 0x153fd8u: goto label_153fd8;
        case 0x153fdcu: goto label_153fdc;
        case 0x153fe0u: goto label_153fe0;
        case 0x153fe4u: goto label_153fe4;
        case 0x153fe8u: goto label_153fe8;
        case 0x153fecu: goto label_153fec;
        case 0x153ff0u: goto label_153ff0;
        case 0x153ff4u: goto label_153ff4;
        case 0x153ff8u: goto label_153ff8;
        case 0x153ffcu: goto label_153ffc;
        case 0x154000u: goto label_154000;
        case 0x154004u: goto label_154004;
        case 0x154008u: goto label_154008;
        case 0x15400cu: goto label_15400c;
        case 0x154010u: goto label_154010;
        case 0x154014u: goto label_154014;
        case 0x154018u: goto label_154018;
        case 0x15401cu: goto label_15401c;
        case 0x154020u: goto label_154020;
        case 0x154024u: goto label_154024;
        case 0x154028u: goto label_154028;
        case 0x15402cu: goto label_15402c;
        case 0x154030u: goto label_154030;
        case 0x154034u: goto label_154034;
        case 0x154038u: goto label_154038;
        case 0x15403cu: goto label_15403c;
        case 0x154040u: goto label_154040;
        case 0x154044u: goto label_154044;
        case 0x154048u: goto label_154048;
        case 0x15404cu: goto label_15404c;
        case 0x154050u: goto label_154050;
        case 0x154054u: goto label_154054;
        case 0x154058u: goto label_154058;
        case 0x15405cu: goto label_15405c;
        case 0x154060u: goto label_154060;
        case 0x154064u: goto label_154064;
        default: break;
    }

    ctx->pc = 0x153fa8u;

label_153fa8:
    // 0x153fa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_153fac:
    // 0x153fac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x153facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_153fb0:
    // 0x153fb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x153fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_153fb4:
    // 0x153fb4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x153fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_153fb8:
    // 0x153fb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_153fbc:
    // 0x153fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_153fc0:
    // 0x153fc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x153fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_153fc4:
    // 0x153fc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x153fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_153fc8:
    // 0x153fc8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x153fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153fcc:
    // 0x153fcc: 0x8e290048  lw          $t1, 0x48($s1)
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_153fd0:
    // 0x153fd0: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x153fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_153fd4:
    // 0x153fd4: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x153fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_153fd8:
    // 0x153fd8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_153fdc:
    // 0x153fdc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_153fe0:
    // 0x153fe0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x153fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_153fe4:
    // 0x153fe4: 0x40f809  jalr        $v0
label_153fe8:
    if (ctx->pc == 0x153FE8u) {
        ctx->pc = 0x153FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE4u;
        // 0x153fe8: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FECu;
        goto label_153fec;
    }
    ctx->pc = 0x153FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153FECu);
        ctx->pc = 0x153FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE4u;
        // 0x153fe8: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153FE4u, 0x153FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153FECu;
label_153fec:
    // 0x153fec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x153fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_153ff0:
    // 0x153ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153ff4:
    // 0x153ff4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x153ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_153ff8:
    // 0x153ff8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x153ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_153ffc:
    // 0x153ffc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x153ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_154000:
    // 0x154000: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_154004:
    // 0x154004: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x154004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_154008:
    // 0x154008: 0x60f809  jalr        $v1
label_15400c:
    if (ctx->pc == 0x15400Cu) {
        ctx->pc = 0x15400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154008u;
        // 0x15400c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154010u;
        goto label_154010;
    }
    ctx->pc = 0x154008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154010u);
        ctx->pc = 0x15400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154008u;
        // 0x15400c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154008u, 0x154010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154010u;
label_154010:
    // 0x154010: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x154010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_154014:
    // 0x154014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154018:
    // 0x154018: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15401c:
    // 0x15401c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x15401cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_154020:
    // 0x154020: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_154024:
    // 0x154024: 0x60f809  jalr        $v1
label_154028:
    if (ctx->pc == 0x154028u) {
        ctx->pc = 0x154028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154024u;
        // 0x154028: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15402Cu;
        goto label_15402c;
    }
    ctx->pc = 0x154024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15402Cu);
        ctx->pc = 0x154028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154024u;
        // 0x154028: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154024u, 0x15402Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15402Cu;
label_15402c:
    // 0x15402c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15402cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_154030:
    // 0x154030: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154034:
    // 0x154034: 0x24845560  addiu       $a0, $a0, 0x5560
    ctx->pc = 0x154034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
label_154038:
    // 0x154038: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x154038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_15403c:
    // 0x15403c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_154040:
    if (ctx->pc == 0x154040u) {
        ctx->pc = 0x154040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15403Cu;
        // 0x154040: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154044u;
        goto label_154044;
    }
    ctx->pc = 0x15403Cu;
    {
        const bool branch_taken_0x15403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x154040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15403Cu;
        // 0x154040: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15403c) {
            ctx->pc = 0x154054u;
            goto label_154054;
        }
    }
    ctx->pc = 0x154044u;
label_154044:
    // 0x154044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154048:
    // 0x154048: 0xc055e4c  jal         func_157930
label_15404c:
    if (ctx->pc == 0x15404Cu) {
        ctx->pc = 0x15404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154048u;
        // 0x15404c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154050u;
        goto label_154050;
    }
    ctx->pc = 0x154048u;
    SET_GPR_U32(ctx, 31, 0x154050u);
    ctx->pc = 0x15404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154048u;
    // 0x15404c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157930u, 0x154048u, 0x154050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154050u;
label_154050:
    // 0x154050: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x154050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_154054:
    // 0x154054: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x154054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_154058:
    // 0x154058: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x154058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15405c:
    // 0x15405c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15405cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154060:
    // 0x154060: 0x3e00008  jr          $ra
label_154064:
    if (ctx->pc == 0x154064u) {
        ctx->pc = 0x154064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154060u;
        // 0x154064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154068u;
        goto label_fallthrough_0x154060;
    }
    ctx->pc = 0x154060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154060u;
        // 0x154064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154060:
    ctx->pc = 0x154068u;
}
