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

// Function: sub_0039C8F8
// Address: 0x39c8f8 - 0x39ca10
void sub_0039C8F8_0x39c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C8F8_0x39c8f8");
#endif

    switch (ctx->pc) {
        case 0x39c8f8u: goto label_39c8f8;
        case 0x39c8fcu: goto label_39c8fc;
        case 0x39c900u: goto label_39c900;
        case 0x39c904u: goto label_39c904;
        case 0x39c908u: goto label_39c908;
        case 0x39c90cu: goto label_39c90c;
        case 0x39c910u: goto label_39c910;
        case 0x39c914u: goto label_39c914;
        case 0x39c918u: goto label_39c918;
        case 0x39c91cu: goto label_39c91c;
        case 0x39c920u: goto label_39c920;
        case 0x39c924u: goto label_39c924;
        case 0x39c928u: goto label_39c928;
        case 0x39c92cu: goto label_39c92c;
        case 0x39c930u: goto label_39c930;
        case 0x39c934u: goto label_39c934;
        case 0x39c938u: goto label_39c938;
        case 0x39c93cu: goto label_39c93c;
        case 0x39c940u: goto label_39c940;
        case 0x39c944u: goto label_39c944;
        case 0x39c948u: goto label_39c948;
        case 0x39c94cu: goto label_39c94c;
        case 0x39c950u: goto label_39c950;
        case 0x39c954u: goto label_39c954;
        case 0x39c958u: goto label_39c958;
        case 0x39c95cu: goto label_39c95c;
        case 0x39c960u: goto label_39c960;
        case 0x39c964u: goto label_39c964;
        case 0x39c968u: goto label_39c968;
        case 0x39c96cu: goto label_39c96c;
        case 0x39c970u: goto label_39c970;
        case 0x39c974u: goto label_39c974;
        case 0x39c978u: goto label_39c978;
        case 0x39c97cu: goto label_39c97c;
        case 0x39c980u: goto label_39c980;
        case 0x39c984u: goto label_39c984;
        case 0x39c988u: goto label_39c988;
        case 0x39c98cu: goto label_39c98c;
        case 0x39c990u: goto label_39c990;
        case 0x39c994u: goto label_39c994;
        case 0x39c998u: goto label_39c998;
        case 0x39c99cu: goto label_39c99c;
        case 0x39c9a0u: goto label_39c9a0;
        case 0x39c9a4u: goto label_39c9a4;
        case 0x39c9a8u: goto label_39c9a8;
        case 0x39c9acu: goto label_39c9ac;
        case 0x39c9b0u: goto label_39c9b0;
        case 0x39c9b4u: goto label_39c9b4;
        case 0x39c9b8u: goto label_39c9b8;
        case 0x39c9bcu: goto label_39c9bc;
        case 0x39c9c0u: goto label_39c9c0;
        case 0x39c9c4u: goto label_39c9c4;
        case 0x39c9c8u: goto label_39c9c8;
        case 0x39c9ccu: goto label_39c9cc;
        case 0x39c9d0u: goto label_39c9d0;
        case 0x39c9d4u: goto label_39c9d4;
        case 0x39c9d8u: goto label_39c9d8;
        case 0x39c9dcu: goto label_39c9dc;
        case 0x39c9e0u: goto label_39c9e0;
        case 0x39c9e4u: goto label_39c9e4;
        case 0x39c9e8u: goto label_39c9e8;
        case 0x39c9ecu: goto label_39c9ec;
        case 0x39c9f0u: goto label_39c9f0;
        case 0x39c9f4u: goto label_39c9f4;
        case 0x39c9f8u: goto label_39c9f8;
        case 0x39c9fcu: goto label_39c9fc;
        case 0x39ca00u: goto label_39ca00;
        case 0x39ca04u: goto label_39ca04;
        case 0x39ca08u: goto label_39ca08;
        case 0x39ca0cu: goto label_39ca0c;
        default: break;
    }

    ctx->pc = 0x39c8f8u;

label_39c8f8:
    // 0x39c8f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39c8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_39c8fc:
    // 0x39c8fc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x39c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_39c900:
    // 0x39c900: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x39c900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_39c904:
    // 0x39c904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39c904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c908:
    // 0x39c908: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x39c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_39c90c:
    // 0x39c90c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39c90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c910:
    // 0x39c910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39c914:
    // 0x39c914: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39c914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c918:
    // 0x39c918: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x39c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_39c91c:
    // 0x39c91c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x39c91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39c920:
    // 0x39c920: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x39c920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_39c924:
    // 0x39c924: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39c924u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c928:
    // 0x39c928: 0x10000027  b           . + 4 + (0x27 << 2)
label_39c92c:
    if (ctx->pc == 0x39C92Cu) {
        ctx->pc = 0x39C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C928u;
        // 0x39c92c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C930u;
        goto label_39c930;
    }
    ctx->pc = 0x39C928u;
    {
        const bool branch_taken_0x39c928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C928u;
        // 0x39c92c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c928) {
            ctx->pc = 0x39C9C8u;
            goto label_39c9c8;
        }
    }
    ctx->pc = 0x39C930u;
label_39c930:
    // 0x39c930: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x39c930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_39c934:
    // 0x39c934: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39c938:
    // 0x39c938: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39c938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39c93c:
    // 0x39c93c: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_39c940:
    if (ctx->pc == 0x39C940u) {
        ctx->pc = 0x39C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C93Cu;
        // 0x39c940: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C944u;
        goto label_39c944;
    }
    ctx->pc = 0x39C93Cu;
    {
        const bool branch_taken_0x39c93c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c93c) {
            ctx->pc = 0x39C940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C93Cu;
            // 0x39c940: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C9CCu;
            goto label_39c9cc;
        }
    }
    ctx->pc = 0x39C944u;
label_39c944:
    // 0x39c944: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c948:
    // 0x39c948: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39c948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39c94c:
    // 0x39c94c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39c950:
    // 0x39c950: 0x40f809  jalr        $v0
label_39c954:
    if (ctx->pc == 0x39C954u) {
        ctx->pc = 0x39C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C950u;
        // 0x39c954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C958u;
        goto label_39c958;
    }
    ctx->pc = 0x39C950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C958u);
        ctx->pc = 0x39C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C950u;
        // 0x39c954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C950u, 0x39C958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C958u;
label_39c958:
    // 0x39c958: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39c958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c95c:
    // 0x39c95c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_39c960:
    if (ctx->pc == 0x39C960u) {
        ctx->pc = 0x39C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C95Cu;
        // 0x39c960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C964u;
        goto label_39c964;
    }
    ctx->pc = 0x39C95Cu;
    {
        const bool branch_taken_0x39c95c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C95Cu;
        // 0x39c960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c95c) {
            ctx->pc = 0x39C974u;
            goto label_39c974;
        }
    }
    ctx->pc = 0x39C964u;
label_39c964:
    // 0x39c964: 0xc10d74c  jal         func_435D30
label_39c968:
    if (ctx->pc == 0x39C968u) {
        ctx->pc = 0x39C96Cu;
        goto label_39c96c;
    }
    ctx->pc = 0x39C964u;
    SET_GPR_U32(ctx, 31, 0x39C96Cu);
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x39C964u, 0x39C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C96Cu;
label_39c96c:
    // 0x39c96c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_39c970:
    if (ctx->pc == 0x39C970u) {
        ctx->pc = 0x39C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C96Cu;
        // 0x39c970: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C974u;
        goto label_39c974;
    }
    ctx->pc = 0x39C96Cu;
    {
        const bool branch_taken_0x39c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c96c) {
            ctx->pc = 0x39C970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C96Cu;
            // 0x39c970: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C9CCu;
            goto label_39c9cc;
        }
    }
    ctx->pc = 0x39C974u;
label_39c974:
    // 0x39c974: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c978:
    // 0x39c978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39c97c:
    // 0x39c97c: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x39c97cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_39c980:
    // 0x39c980: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x39c980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_39c984:
    // 0x39c984: 0x60f809  jalr        $v1
label_39c988:
    if (ctx->pc == 0x39C988u) {
        ctx->pc = 0x39C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C984u;
        // 0x39c988: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C98Cu;
        goto label_39c98c;
    }
    ctx->pc = 0x39C984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39C98Cu);
        ctx->pc = 0x39C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C984u;
        // 0x39c988: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C984u, 0x39C98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C98Cu;
label_39c98c:
    // 0x39c98c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39c98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39c990:
    // 0x39c990: 0xc0cdb38  jal         func_336CE0
label_39c994:
    if (ctx->pc == 0x39C994u) {
        ctx->pc = 0x39C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C990u;
        // 0x39c994: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C998u;
        goto label_39c998;
    }
    ctx->pc = 0x39C990u;
    SET_GPR_U32(ctx, 31, 0x39C998u);
    ctx->pc = 0x39C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C990u;
    // 0x39c994: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x39C990u, 0x39C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C998u;
label_39c998:
    // 0x39c998: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x39c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c99c:
    // 0x39c99c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39c99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39c9a0:
    // 0x39c9a0: 0x0  nop
    ctx->pc = 0x39c9a0u;
    // NOP
label_39c9a4:
    // 0x39c9a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_39c9a8:
    if (ctx->pc == 0x39C9A8u) {
        ctx->pc = 0x39C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9A4u;
        // 0x39c9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C9ACu;
        goto label_39c9ac;
    }
    ctx->pc = 0x39C9A4u;
    {
        const bool branch_taken_0x39c9a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9A4u;
        // 0x39c9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c9a4) {
            ctx->pc = 0x39C9C8u;
            goto label_39c9c8;
        }
    }
    ctx->pc = 0x39C9ACu;
label_39c9ac:
    // 0x39c9ac: 0xc0e8616  jal         func_3A1858
label_39c9b0:
    if (ctx->pc == 0x39C9B0u) {
        ctx->pc = 0x39C9B4u;
        goto label_39c9b4;
    }
    ctx->pc = 0x39C9ACu;
    SET_GPR_U32(ctx, 31, 0x39C9B4u);
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x39C9ACu, 0x39C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C9B4u;
label_39c9b4:
    // 0x39c9b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c9b8:
    // 0x39c9b8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x39c9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_39c9bc:
    // 0x39c9bc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x39c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_39c9c0:
    // 0x39c9c0: 0x60f809  jalr        $v1
label_39c9c4:
    if (ctx->pc == 0x39C9C4u) {
        ctx->pc = 0x39C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9C0u;
        // 0x39c9c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C9C8u;
        goto label_39c9c8;
    }
    ctx->pc = 0x39C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39C9C8u);
        ctx->pc = 0x39C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9C0u;
        // 0x39c9c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C9C0u, 0x39C9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C9C8u;
label_39c9c8:
    // 0x39c9c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39c9cc:
    // 0x39c9cc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x39c9ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_39c9d0:
    // 0x39c9d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x39c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39c9d4:
    // 0x39c9d4: 0x40f809  jalr        $v0
label_39c9d8:
    if (ctx->pc == 0x39C9D8u) {
        ctx->pc = 0x39C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9D4u;
        // 0x39c9d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C9DCu;
        goto label_39c9dc;
    }
    ctx->pc = 0x39C9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C9DCu);
        ctx->pc = 0x39C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9D4u;
        // 0x39c9d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C9D4u, 0x39C9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C9DCu;
label_39c9dc:
    // 0x39c9dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x39c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39c9e0:
    // 0x39c9e0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39c9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39c9e4:
    // 0x39c9e4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_39c9e8:
    if (ctx->pc == 0x39C9E8u) {
        ctx->pc = 0x39C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9E4u;
        // 0x39c9e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C9ECu;
        goto label_39c9ec;
    }
    ctx->pc = 0x39C9E4u;
    {
        const bool branch_taken_0x39c9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9E4u;
        // 0x39c9e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c9e4) {
            ctx->pc = 0x39C930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c930;
        }
    }
    ctx->pc = 0x39C9ECu;
label_39c9ec:
    // 0x39c9ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x39c9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39c9f0:
    // 0x39c9f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x39c9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39c9f4:
    // 0x39c9f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x39c9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c9f8:
    // 0x39c9f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x39c9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c9fc:
    // 0x39c9fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39c9fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39ca00:
    // 0x39ca00: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x39ca00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39ca04:
    // 0x39ca04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39ca04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39ca08:
    // 0x39ca08: 0x3e00008  jr          $ra
label_39ca0c:
    if (ctx->pc == 0x39CA0Cu) {
        ctx->pc = 0x39CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA08u;
        // 0x39ca0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CA10u;
        goto label_fallthrough_0x39ca08;
    }
    ctx->pc = 0x39CA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA08u;
        // 0x39ca0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39ca08:
    ctx->pc = 0x39CA10u;
}
