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

// Function: sub_0017F8F8
// Address: 0x17f8f8 - 0x17f998
void sub_0017F8F8_0x17f8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F8F8_0x17f8f8");
#endif

    switch (ctx->pc) {
        case 0x17f8f8u: goto label_17f8f8;
        case 0x17f8fcu: goto label_17f8fc;
        case 0x17f900u: goto label_17f900;
        case 0x17f904u: goto label_17f904;
        case 0x17f908u: goto label_17f908;
        case 0x17f90cu: goto label_17f90c;
        case 0x17f910u: goto label_17f910;
        case 0x17f914u: goto label_17f914;
        case 0x17f918u: goto label_17f918;
        case 0x17f91cu: goto label_17f91c;
        case 0x17f920u: goto label_17f920;
        case 0x17f924u: goto label_17f924;
        case 0x17f928u: goto label_17f928;
        case 0x17f92cu: goto label_17f92c;
        case 0x17f930u: goto label_17f930;
        case 0x17f934u: goto label_17f934;
        case 0x17f938u: goto label_17f938;
        case 0x17f93cu: goto label_17f93c;
        case 0x17f940u: goto label_17f940;
        case 0x17f944u: goto label_17f944;
        case 0x17f948u: goto label_17f948;
        case 0x17f94cu: goto label_17f94c;
        case 0x17f950u: goto label_17f950;
        case 0x17f954u: goto label_17f954;
        case 0x17f958u: goto label_17f958;
        case 0x17f95cu: goto label_17f95c;
        case 0x17f960u: goto label_17f960;
        case 0x17f964u: goto label_17f964;
        case 0x17f968u: goto label_17f968;
        case 0x17f96cu: goto label_17f96c;
        case 0x17f970u: goto label_17f970;
        case 0x17f974u: goto label_17f974;
        case 0x17f978u: goto label_17f978;
        case 0x17f97cu: goto label_17f97c;
        case 0x17f980u: goto label_17f980;
        case 0x17f984u: goto label_17f984;
        case 0x17f988u: goto label_17f988;
        case 0x17f98cu: goto label_17f98c;
        case 0x17f990u: goto label_17f990;
        case 0x17f994u: goto label_17f994;
        default: break;
    }

    ctx->pc = 0x17f8f8u;

label_17f8f8:
    // 0x17f8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17f8fc:
    // 0x17f8fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17f900:
    // 0x17f900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17f904:
    // 0x17f904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f908:
    // 0x17f908: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x17f908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_17f90c:
    // 0x17f90c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_17f910:
    // 0x17f910: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x17f910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
label_17f914:
    // 0x17f914: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x17f914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_17f918:
    // 0x17f918: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x17f918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_17f91c:
    // 0x17f91c: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x17f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_17f920:
    // 0x17f920: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17f924:
    // 0x17f924: 0xc11a8be  jal         func_46A2F8
label_17f928:
    if (ctx->pc == 0x17F928u) {
        ctx->pc = 0x17F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F924u;
        // 0x17f928: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F92Cu;
        goto label_17f92c;
    }
    ctx->pc = 0x17F924u;
    SET_GPR_U32(ctx, 31, 0x17F92Cu);
    ctx->pc = 0x17F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F924u;
    // 0x17f928: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A2F8u, 0x17F924u, 0x17F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F92Cu;
label_17f92c:
    // 0x17f92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f930:
    // 0x17f930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f934:
    // 0x17f934: 0xc05fe7a  jal         func_17F9E8
label_17f938:
    if (ctx->pc == 0x17F938u) {
        ctx->pc = 0x17F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F934u;
        // 0x17f938: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F93Cu;
        goto label_17f93c;
    }
    ctx->pc = 0x17F934u;
    SET_GPR_U32(ctx, 31, 0x17F93Cu);
    ctx->pc = 0x17F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F934u;
    // 0x17f938: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9E8u, 0x17F934u, 0x17F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F93Cu;
label_17f93c:
    // 0x17f93c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_17f940:
    // 0x17f940: 0x8c66b734  lw          $a2, -0x48CC($v1)
    ctx->pc = 0x17f940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_17f944:
    // 0x17f944: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x17f944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17f948:
    // 0x17f948: 0x84a40020  lh          $a0, 0x20($a1)
    ctx->pc = 0x17f948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_17f94c:
    // 0x17f94c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x17f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_17f950:
    // 0x17f950: 0x40f809  jalr        $v0
label_17f954:
    if (ctx->pc == 0x17F954u) {
        ctx->pc = 0x17F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F950u;
        // 0x17f954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F958u;
        goto label_17f958;
    }
    ctx->pc = 0x17F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F958u);
        ctx->pc = 0x17F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F950u;
        // 0x17f954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F950u, 0x17F958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F958u;
label_17f958:
    // 0x17f958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17f95c:
    if (ctx->pc == 0x17F95Cu) {
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F960u;
        goto label_17f960;
    }
    ctx->pc = 0x17F958u;
    {
        const bool branch_taken_0x17f958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f958) {
            ctx->pc = 0x17F968u;
            goto label_17f968;
        }
    }
    ctx->pc = 0x17F960u;
label_17f960:
    // 0x17f960: 0x10000008  b           . + 4 + (0x8 << 2)
label_17f964:
    if (ctx->pc == 0x17F964u) {
        ctx->pc = 0x17F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F960u;
        // 0x17f964: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F968u;
        goto label_17f968;
    }
    ctx->pc = 0x17F960u;
    {
        const bool branch_taken_0x17f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F960u;
        // 0x17f964: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f960) {
            ctx->pc = 0x17F984u;
            goto label_17f984;
        }
    }
    ctx->pc = 0x17F968u;
label_17f968:
    // 0x17f968: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x17f968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_17f96c:
    // 0x17f96c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f970:
    // 0x17f970: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f974:
    // 0x17f974: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f978:
    // 0x17f978: 0x40f809  jalr        $v0
label_17f97c:
    if (ctx->pc == 0x17F97Cu) {
        ctx->pc = 0x17F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F978u;
        // 0x17f97c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F980u;
        goto label_17f980;
    }
    ctx->pc = 0x17F978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F980u);
        ctx->pc = 0x17F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F978u;
        // 0x17f97c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F978u, 0x17F980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F980u;
label_17f980:
    // 0x17f980: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x17f980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_17f984:
    // 0x17f984: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f988:
    // 0x17f988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f98c:
    // 0x17f98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f990:
    // 0x17f990: 0x3e00008  jr          $ra
label_17f994:
    if (ctx->pc == 0x17F994u) {
        ctx->pc = 0x17F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F990u;
        // 0x17f994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F998u;
        goto label_fallthrough_0x17f990;
    }
    ctx->pc = 0x17F990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F990u;
        // 0x17f994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17f990:
    ctx->pc = 0x17F998u;
}
