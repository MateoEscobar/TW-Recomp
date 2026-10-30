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

// Function: sub_00485F90
// Address: 0x485f90 - 0x486038
void sub_00485F90_0x485f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485F90_0x485f90");
#endif

    switch (ctx->pc) {
        case 0x485f90u: goto label_485f90;
        case 0x485f94u: goto label_485f94;
        case 0x485f98u: goto label_485f98;
        case 0x485f9cu: goto label_485f9c;
        case 0x485fa0u: goto label_485fa0;
        case 0x485fa4u: goto label_485fa4;
        case 0x485fa8u: goto label_485fa8;
        case 0x485facu: goto label_485fac;
        case 0x485fb0u: goto label_485fb0;
        case 0x485fb4u: goto label_485fb4;
        case 0x485fb8u: goto label_485fb8;
        case 0x485fbcu: goto label_485fbc;
        case 0x485fc0u: goto label_485fc0;
        case 0x485fc4u: goto label_485fc4;
        case 0x485fc8u: goto label_485fc8;
        case 0x485fccu: goto label_485fcc;
        case 0x485fd0u: goto label_485fd0;
        case 0x485fd4u: goto label_485fd4;
        case 0x485fd8u: goto label_485fd8;
        case 0x485fdcu: goto label_485fdc;
        case 0x485fe0u: goto label_485fe0;
        case 0x485fe4u: goto label_485fe4;
        case 0x485fe8u: goto label_485fe8;
        case 0x485fecu: goto label_485fec;
        case 0x485ff0u: goto label_485ff0;
        case 0x485ff4u: goto label_485ff4;
        case 0x485ff8u: goto label_485ff8;
        case 0x485ffcu: goto label_485ffc;
        case 0x486000u: goto label_486000;
        case 0x486004u: goto label_486004;
        case 0x486008u: goto label_486008;
        case 0x48600cu: goto label_48600c;
        case 0x486010u: goto label_486010;
        case 0x486014u: goto label_486014;
        case 0x486018u: goto label_486018;
        case 0x48601cu: goto label_48601c;
        case 0x486020u: goto label_486020;
        case 0x486024u: goto label_486024;
        case 0x486028u: goto label_486028;
        case 0x48602cu: goto label_48602c;
        case 0x486030u: goto label_486030;
        case 0x486034u: goto label_486034;
        default: break;
    }

    ctx->pc = 0x485f90u;

label_485f90:
    // 0x485f90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x485f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_485f94:
    // 0x485f94: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x485f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_485f98:
    // 0x485f98: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x485f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_485f9c:
    // 0x485f9c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x485f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_485fa0:
    // 0x485fa0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x485fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_485fa4:
    // 0x485fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485fa8:
    // 0x485fa8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x485fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_485fac:
    // 0x485fac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x485facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_485fb0:
    // 0x485fb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x485fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_485fb4:
    // 0x485fb4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x485fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_485fb8:
    // 0x485fb8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x485fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_485fbc:
    // 0x485fbc: 0x8c62ad84  lw          $v0, -0x527C($v1)
    ctx->pc = 0x485fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946180)));
label_485fc0:
    // 0x485fc0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x485fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_485fc4:
    // 0x485fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x485fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_485fc8:
    // 0x485fc8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x485fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_485fcc:
    // 0x485fcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x485fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_485fd0:
    // 0x485fd0: 0x40f809  jalr        $v0
label_485fd4:
    if (ctx->pc == 0x485FD4u) {
        ctx->pc = 0x485FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485FD0u;
        // 0x485fd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485FD8u;
        goto label_485fd8;
    }
    ctx->pc = 0x485FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485FD8u);
        ctx->pc = 0x485FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485FD0u;
        // 0x485fd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485FD0u, 0x485FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485FD8u;
label_485fd8:
    // 0x485fd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_485fdc:
    if (ctx->pc == 0x485FDCu) {
        ctx->pc = 0x485FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485FD8u;
        // 0x485fdc: 0x93a30023  lbu         $v1, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485FE0u;
        goto label_485fe0;
    }
    ctx->pc = 0x485FD8u;
    {
        const bool branch_taken_0x485fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485FD8u;
        // 0x485fdc: 0x93a30023  lbu         $v1, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485fd8) {
            ctx->pc = 0x486010u;
            goto label_486010;
        }
    }
    ctx->pc = 0x485FE0u;
label_485fe0:
    // 0x485fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485fe4:
    // 0x485fe4: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x485fe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_485fe8:
    // 0x485fe8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x485fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_485fec:
    // 0x485fec: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x485fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_485ff0:
    // 0x485ff0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x485ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_485ff4:
    // 0x485ff4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x485ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_485ff8:
    // 0x485ff8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x485ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_485ffc:
    // 0x485ffc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x485ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_486000:
    // 0x486000: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x486000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_486004:
    // 0x486004: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x486004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_486008:
    // 0x486008: 0x10000002  b           . + 4 + (0x2 << 2)
label_48600c:
    if (ctx->pc == 0x48600Cu) {
        ctx->pc = 0x48600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486008u;
        // 0x48600c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486010u;
        goto label_486010;
    }
    ctx->pc = 0x486008u;
    {
        const bool branch_taken_0x486008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486008u;
        // 0x48600c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486008) {
            ctx->pc = 0x486014u;
            goto label_486014;
        }
    }
    ctx->pc = 0x486010u;
label_486010:
    // 0x486010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x486010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486014:
    // 0x486014: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x486014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_486018:
    // 0x486018: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x486018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_48601c:
    // 0x48601c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x48601cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_486020:
    // 0x486020: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x486020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_486024:
    // 0x486024: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x486024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_486028:
    // 0x486028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x486028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48602c:
    // 0x48602c: 0x3e00008  jr          $ra
label_486030:
    if (ctx->pc == 0x486030u) {
        ctx->pc = 0x486030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48602Cu;
        // 0x486030: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486034u;
        goto label_486034;
    }
    ctx->pc = 0x48602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48602Cu;
        // 0x486030: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48602Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486034u;
label_486034:
    // 0x486034: 0x0  nop
    ctx->pc = 0x486034u;
    // NOP
    ctx->pc = 0x486038u;
}
