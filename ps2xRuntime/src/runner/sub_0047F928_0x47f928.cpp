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

// Function: sub_0047F928
// Address: 0x47f928 - 0x47f998
void sub_0047F928_0x47f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F928_0x47f928");
#endif

    switch (ctx->pc) {
        case 0x47f928u: goto label_47f928;
        case 0x47f92cu: goto label_47f92c;
        case 0x47f930u: goto label_47f930;
        case 0x47f934u: goto label_47f934;
        case 0x47f938u: goto label_47f938;
        case 0x47f93cu: goto label_47f93c;
        case 0x47f940u: goto label_47f940;
        case 0x47f944u: goto label_47f944;
        case 0x47f948u: goto label_47f948;
        case 0x47f94cu: goto label_47f94c;
        case 0x47f950u: goto label_47f950;
        case 0x47f954u: goto label_47f954;
        case 0x47f958u: goto label_47f958;
        case 0x47f95cu: goto label_47f95c;
        case 0x47f960u: goto label_47f960;
        case 0x47f964u: goto label_47f964;
        case 0x47f968u: goto label_47f968;
        case 0x47f96cu: goto label_47f96c;
        case 0x47f970u: goto label_47f970;
        case 0x47f974u: goto label_47f974;
        case 0x47f978u: goto label_47f978;
        case 0x47f97cu: goto label_47f97c;
        case 0x47f980u: goto label_47f980;
        case 0x47f984u: goto label_47f984;
        case 0x47f988u: goto label_47f988;
        case 0x47f98cu: goto label_47f98c;
        case 0x47f990u: goto label_47f990;
        case 0x47f994u: goto label_47f994;
        default: break;
    }

    ctx->pc = 0x47f928u;

label_47f928:
    // 0x47f928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47f92c:
    // 0x47f92c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x47f92cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47f930:
    // 0x47f930: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47f934:
    // 0x47f934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47f938:
    // 0x47f938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f93c:
    // 0x47f93c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x47f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47f940:
    // 0x47f940: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x47f940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47f944:
    // 0x47f944: 0x0  nop
    ctx->pc = 0x47f944u;
    // NOP
label_47f948:
    // 0x47f948: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_47f94c:
    if (ctx->pc == 0x47F94Cu) {
        ctx->pc = 0x47F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F948u;
        // 0x47f94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F950u;
        goto label_47f950;
    }
    ctx->pc = 0x47F948u;
    {
        const bool branch_taken_0x47f948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F948u;
        // 0x47f94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f948) {
            ctx->pc = 0x47F984u;
            goto label_47f984;
        }
    }
    ctx->pc = 0x47F950u;
label_47f950:
    // 0x47f950: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x47f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_47f954:
    // 0x47f954: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
label_47f958:
    if (ctx->pc == 0x47F958u) {
        ctx->pc = 0x47F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F954u;
        // 0x47f958: 0x8ca50030  lw          $a1, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F95Cu;
        goto label_47f95c;
    }
    ctx->pc = 0x47F954u;
    {
        const bool branch_taken_0x47f954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47f954) {
            ctx->pc = 0x47F958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F954u;
            // 0x47f958: 0x8ca50030  lw          $a1, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f948;
        }
    }
    ctx->pc = 0x47F95Cu;
label_47f95c:
    // 0x47f95c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_47f960:
    if (ctx->pc == 0x47F960u) {
        ctx->pc = 0x47F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F95Cu;
        // 0x47f960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F964u;
        goto label_47f964;
    }
    ctx->pc = 0x47F95Cu;
    {
        const bool branch_taken_0x47f95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F95Cu;
        // 0x47f960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f95c) {
            ctx->pc = 0x47F984u;
            goto label_47f984;
        }
    }
    ctx->pc = 0x47F964u;
label_47f964:
    // 0x47f964: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x47f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_47f968:
    // 0x47f968: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_47f96c:
    if (ctx->pc == 0x47F96Cu) {
        ctx->pc = 0x47F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F968u;
        // 0x47f96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F970u;
        goto label_47f970;
    }
    ctx->pc = 0x47F968u;
    {
        const bool branch_taken_0x47f968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f968) {
            ctx->pc = 0x47F96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F968u;
            // 0x47f96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F984u;
            goto label_47f984;
        }
    }
    ctx->pc = 0x47F970u;
label_47f970:
    // 0x47f970: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x47f970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_47f974:
    // 0x47f974: 0x40f809  jalr        $v0
label_47f978:
    if (ctx->pc == 0x47F978u) {
        ctx->pc = 0x47F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F974u;
        // 0x47f978: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F97Cu;
        goto label_47f97c;
    }
    ctx->pc = 0x47F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F97Cu);
        ctx->pc = 0x47F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F974u;
        // 0x47f978: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F974u, 0x47F97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F97Cu;
label_47f97c:
    // 0x47f97c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x47f97cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_47f980:
    // 0x47f980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47f980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f984:
    // 0x47f984: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47f984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f988:
    // 0x47f988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47f988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47f98c:
    // 0x47f98c: 0x3e00008  jr          $ra
label_47f990:
    if (ctx->pc == 0x47F990u) {
        ctx->pc = 0x47F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F98Cu;
        // 0x47f990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F994u;
        goto label_47f994;
    }
    ctx->pc = 0x47F98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F98Cu;
        // 0x47f990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F994u;
label_47f994:
    // 0x47f994: 0x0  nop
    ctx->pc = 0x47f994u;
    // NOP
    ctx->pc = 0x47f998u;
}
