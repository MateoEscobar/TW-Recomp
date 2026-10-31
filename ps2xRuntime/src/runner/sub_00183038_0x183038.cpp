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

// Function: sub_00183038
// Address: 0x183038 - 0x1831c0
void sub_00183038_0x183038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183038_0x183038");
#endif

    switch (ctx->pc) {
        case 0x183078u: goto label_183078;
        case 0x183098u: goto label_183098;
        case 0x1830a4u: goto label_1830a4;
        case 0x1830bcu: goto label_1830bc;
        case 0x1830c8u: goto label_1830c8;
        case 0x1830f0u: goto label_1830f0;
        case 0x1830fcu: goto label_1830fc;
        case 0x183124u: goto label_183124;
        case 0x183130u: goto label_183130;
        case 0x183148u: goto label_183148;
        case 0x183154u: goto label_183154;
        case 0x18317cu: goto label_18317c;
        case 0x183188u: goto label_183188;
        default: break;
    }

    ctx->pc = 0x183038u;

    // 0x183038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18303c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x183040: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x183040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x183044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183048: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x183048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18304c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183050: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x183050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x183054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183054u;
    {
        const bool branch_taken_0x183054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183054u;
        // 0x183058: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183054) {
            ctx->pc = 0x183068u;
            goto label_183068;
        }
    }
    ctx->pc = 0x18305Cu;
    // 0x18305c: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x18305cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x183060: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183060u;
    {
        const bool branch_taken_0x183060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183060) {
            ctx->pc = 0x183070u;
            goto label_183070;
        }
    }
    ctx->pc = 0x183068u;
label_183068:
    // 0x183068: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x183068u;
    {
        const bool branch_taken_0x183068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183068u;
        // 0x18306c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183068) {
            ctx->pc = 0x1831A8u;
            goto label_1831a8;
        }
    }
    ctx->pc = 0x183070u;
label_183070:
    // 0x183070: 0xc060ac8  jal         func_182B20
    ctx->pc = 0x183070u;
    SET_GPR_U32(ctx, 31, 0x183078u);
    ctx->pc = 0x183074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183070u;
    // 0x183074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x183070u, 0x183078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183078u;
label_183078:
    // 0x183078: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x183078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18307c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18307cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x183080: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183080u;
    {
        const bool branch_taken_0x183080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183080u;
        // 0x183084: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183080) {
            ctx->pc = 0x183090u;
            goto label_183090;
        }
    }
    ctx->pc = 0x183088u;
    // 0x183088: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x183088u;
    {
        const bool branch_taken_0x183088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183088u;
        // 0x18308c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183088) {
            ctx->pc = 0x1831A4u;
            goto label_1831a4;
        }
    }
    ctx->pc = 0x183090u;
label_183090:
    // 0x183090: 0xc060b64  jal         func_182D90
    ctx->pc = 0x183090u;
    SET_GPR_U32(ctx, 31, 0x183098u);
    ctx->pc = 0x183094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183090u;
    // 0x183094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D90u, 0x183090u, 0x183098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183098u;
label_183098:
    // 0x183098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18309c: 0xc060b66  jal         func_182D98
    ctx->pc = 0x18309Cu;
    SET_GPR_U32(ctx, 31, 0x1830A4u);
    ctx->pc = 0x1830A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18309Cu;
    // 0x1830a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D98u, 0x18309Cu, 0x1830A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830A4u;
label_1830a4:
    // 0x1830a4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1830a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1830a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830ac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1830acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1830b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1830b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1830b4: 0xc060b68  jal         func_182DA0
    ctx->pc = 0x1830B4u;
    SET_GPR_U32(ctx, 31, 0x1830BCu);
    ctx->pc = 0x1830B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830B4u;
    // 0x1830b8: 0xae500014  sw          $s0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DA0u, 0x1830B4u, 0x1830BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830BCu;
label_1830bc:
    // 0x1830bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1830bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830c0: 0xc060b6a  jal         func_182DA8
    ctx->pc = 0x1830C0u;
    SET_GPR_U32(ctx, 31, 0x1830C8u);
    ctx->pc = 0x1830C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830C0u;
    // 0x1830c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DA8u, 0x1830C0u, 0x1830C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830C8u;
label_1830c8:
    // 0x1830c8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1830c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1830cc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1830ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1830d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1830d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1830d4: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x1830d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    // 0x1830d8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1830d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1830dc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1830dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1830e0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1830E0u;
    {
        const bool branch_taken_0x1830e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1830e0) {
            ctx->pc = 0x1830E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1830E0u;
            // 0x1830e4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18311Cu;
            goto label_18311c;
        }
    }
    ctx->pc = 0x1830E8u;
    // 0x1830e8: 0xc060b74  jal         func_182DD0
    ctx->pc = 0x1830E8u;
    SET_GPR_U32(ctx, 31, 0x1830F0u);
    ctx->pc = 0x1830ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830E8u;
    // 0x1830ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD0u, 0x1830E8u, 0x1830F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830F0u;
label_1830f0:
    // 0x1830f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1830f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830f4: 0xc060b76  jal         func_182DD8
    ctx->pc = 0x1830F4u;
    SET_GPR_U32(ctx, 31, 0x1830FCu);
    ctx->pc = 0x1830F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830F4u;
    // 0x1830f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD8u, 0x1830F4u, 0x1830FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830FCu;
label_1830fc:
    // 0x1830fc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1830fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x183100: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x183100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x183104: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x183104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x183108: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x183108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x18310c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x18310cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x183110: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x183110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x183114: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x183114u;
    {
        const bool branch_taken_0x183114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183114u;
        // 0x183118: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183114) {
            ctx->pc = 0x183198u;
            goto label_183198;
        }
    }
    ctx->pc = 0x18311Cu;
label_18311c:
    // 0x18311c: 0xc060b60  jal         func_182D80
    ctx->pc = 0x18311Cu;
    SET_GPR_U32(ctx, 31, 0x183124u);
    ctx->pc = 0x183120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18311Cu;
    // 0x183120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D80u, 0x18311Cu, 0x183124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183124u;
label_183124:
    // 0x183124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183128: 0xc060b62  jal         func_182D88
    ctx->pc = 0x183128u;
    SET_GPR_U32(ctx, 31, 0x183130u);
    ctx->pc = 0x18312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183128u;
    // 0x18312c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D88u, 0x183128u, 0x183130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183130u;
label_183130:
    // 0x183130: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x183130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x183134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183138: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x183138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18313c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x18313cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x183140: 0xc060b6c  jal         func_182DB0
    ctx->pc = 0x183140u;
    SET_GPR_U32(ctx, 31, 0x183148u);
    ctx->pc = 0x183144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183140u;
    // 0x183144: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DB0u, 0x183140u, 0x183148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183148u;
label_183148:
    // 0x183148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18314c: 0xc060b6e  jal         func_182DB8
    ctx->pc = 0x18314Cu;
    SET_GPR_U32(ctx, 31, 0x183154u);
    ctx->pc = 0x183150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18314Cu;
    // 0x183150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DB8u, 0x18314Cu, 0x183154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183154u;
label_183154:
    // 0x183154: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x183154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x183158: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x183158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18315c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x18315cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x183160: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x183160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x183164: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x183164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x183168: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x183168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x18316c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x18316Cu;
    {
        const bool branch_taken_0x18316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18316c) {
            ctx->pc = 0x183170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18316Cu;
            // 0x183170: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183198u;
            goto label_183198;
        }
    }
    ctx->pc = 0x183174u;
    // 0x183174: 0xc060b70  jal         func_182DC0
    ctx->pc = 0x183174u;
    SET_GPR_U32(ctx, 31, 0x18317Cu);
    ctx->pc = 0x183178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183174u;
    // 0x183178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DC0u, 0x183174u, 0x18317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18317Cu;
label_18317c:
    // 0x18317c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18317cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183180: 0xc060b72  jal         func_182DC8
    ctx->pc = 0x183180u;
    SET_GPR_U32(ctx, 31, 0x183188u);
    ctx->pc = 0x183184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183180u;
    // 0x183184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DC8u, 0x183180u, 0x183188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183188u;
label_183188:
    // 0x183188: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18318c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18318cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x183190: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x183190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x183194: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x183194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_183198:
    // 0x183198: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x183198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18319c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1831a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1831a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1831a4:
    // 0x1831a4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1831a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_1831a8:
    // 0x1831a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1831a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1831ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1831acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1831b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1831b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1831b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1831b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1831b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1831B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1831BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831B8u;
        // 0x1831bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1831B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1831C0u;
}
