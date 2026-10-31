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

// Function: sub_00461930
// Address: 0x461930 - 0x461998
void sub_00461930_0x461930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461930_0x461930");
#endif

    switch (ctx->pc) {
        case 0x461930u: goto label_461930;
        case 0x461934u: goto label_461934;
        case 0x461938u: goto label_461938;
        case 0x46193cu: goto label_46193c;
        case 0x461940u: goto label_461940;
        case 0x461944u: goto label_461944;
        case 0x461948u: goto label_461948;
        case 0x46194cu: goto label_46194c;
        case 0x461950u: goto label_461950;
        case 0x461954u: goto label_461954;
        case 0x461958u: goto label_461958;
        case 0x46195cu: goto label_46195c;
        case 0x461960u: goto label_461960;
        case 0x461964u: goto label_461964;
        case 0x461968u: goto label_461968;
        case 0x46196cu: goto label_46196c;
        case 0x461970u: goto label_461970;
        case 0x461974u: goto label_461974;
        case 0x461978u: goto label_461978;
        case 0x46197cu: goto label_46197c;
        case 0x461980u: goto label_461980;
        case 0x461984u: goto label_461984;
        case 0x461988u: goto label_461988;
        case 0x46198cu: goto label_46198c;
        case 0x461990u: goto label_461990;
        case 0x461994u: goto label_461994;
        default: break;
    }

    ctx->pc = 0x461930u;

label_461930:
    // 0x461930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x461930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_461934:
    // 0x461934: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x461934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_461938:
    // 0x461938: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x461938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_46193c:
    // 0x46193c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461940:
    // 0x461940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x461940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_461944:
    // 0x461944: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x461944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_461948:
    // 0x461948: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x461948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46194c:
    // 0x46194c: 0xa5880b  movn        $s1, $a1, $a1
    ctx->pc = 0x46194cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_461950:
    // 0x461950: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x461950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_461954:
    // 0x461954: 0x2240018  mult        $zero, $s1, $a0
    ctx->pc = 0x461954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_461958:
    // 0x461958: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x461958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_46195c:
    // 0x46195c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_461960:
    // 0x461960: 0x2012  mflo        $a0
    ctx->pc = 0x461960u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_461964:
    // 0x461964: 0x40f809  jalr        $v0
label_461968:
    if (ctx->pc == 0x461968u) {
        ctx->pc = 0x461968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461964u;
        // 0x461968: 0x34a50131  ori         $a1, $a1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46196Cu;
        goto label_46196c;
    }
    ctx->pc = 0x461964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46196Cu);
        ctx->pc = 0x461968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461964u;
        // 0x461968: 0x34a50131  ori         $a1, $a1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461964u, 0x46196Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46196Cu;
label_46196c:
    // 0x46196c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x46196cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_461970:
    // 0x461970: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x461970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_461974:
    // 0x461974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x461974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_461978:
    // 0x461978: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x461978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_46197c:
    // 0x46197c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x46197cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_461980:
    // 0x461980: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x461980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_461984:
    // 0x461984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461988:
    // 0x461988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46198c:
    // 0x46198c: 0x3e00008  jr          $ra
label_461990:
    if (ctx->pc == 0x461990u) {
        ctx->pc = 0x461990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46198Cu;
        // 0x461990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461994u;
        goto label_461994;
    }
    ctx->pc = 0x46198Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46198Cu;
        // 0x461990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46198Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461994u;
label_461994:
    // 0x461994: 0x0  nop
    ctx->pc = 0x461994u;
    // NOP
    ctx->pc = 0x461998u;
}
