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

// Function: sub_004D10E0
// Address: 0x4d10e0 - 0x4d1220
void sub_004D10E0_0x4d10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D10E0_0x4d10e0");
#endif

    switch (ctx->pc) {
        case 0x4d1144u: goto label_4d1144;
        case 0x4d1170u: goto label_4d1170;
        case 0x4d11c8u: goto label_4d11c8;
        default: break;
    }

    ctx->pc = 0x4d10e0u;

    // 0x4d10e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d10e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d10e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4d10e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d10e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4d10ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d10ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d10f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d10f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4d10f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4d10f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d10f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d10f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4d10fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d10fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1100: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4d1104: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4d1104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1108: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4d110c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4d110cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1110: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d1110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4d1114: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4d1114u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1118: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4d1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4d111c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4d111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1120: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x4d1120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d1124: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4d1124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4d1128: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x4d1128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4d112c: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x4d112cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4d1130: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x4d1130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4d1134: 0x8e090014  lw          $t1, 0x14($s0)
    ctx->pc = 0x4d1134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4d1138: 0x8e0b001c  lw          $t3, 0x1C($s0)
    ctx->pc = 0x4d1138u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4d113c: 0xc134240  jal         func_4D0900
    ctx->pc = 0x4D113Cu;
    SET_GPR_U32(ctx, 31, 0x4D1144u);
    ctx->pc = 0x4D1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D113Cu;
    // 0x4d1140: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D0900u, 0x4D113Cu, 0x4D1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1144u;
label_4d1144:
    // 0x4d1144: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4d1144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1148: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4d1148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4d114c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D114Cu;
    {
        const bool branch_taken_0x4d114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d114c) {
            ctx->pc = 0x4D1150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D114Cu;
            // 0x4d1150: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D115Cu;
            goto label_4d115c;
        }
    }
    ctx->pc = 0x4D1154u;
    // 0x4d1154: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4D1154u;
    {
        const bool branch_taken_0x4d1154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1154u;
        // 0x4d1158: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1154) {
            ctx->pc = 0x4D11A8u;
            goto label_4d11a8;
        }
    }
    ctx->pc = 0x4D115Cu;
label_4d115c:
    // 0x4d115c: 0x23842  srl         $a3, $v0, 1
    ctx->pc = 0x4d115cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4d1160: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x4D1160u;
    {
        const bool branch_taken_0x4d1160 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1160u;
        // 0x4d1164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1160) {
            ctx->pc = 0x4D11A8u;
            goto label_4d11a8;
        }
    }
    ctx->pc = 0x4D1168u;
    // 0x4d1168: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x4d1168u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4d116c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4d116cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4d1170:
    // 0x4d1170: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d1170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d1174: 0xe62023  subu        $a0, $a3, $a2
    ctx->pc = 0x4d1174u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4d1178: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4d1178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d117c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4d117cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d1180: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4d1180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4d1184: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4d1184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4d1188: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4d1188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4d118c: 0xc7202b  sltu        $a0, $a2, $a3
    ctx->pc = 0x4d118cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d1190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d1194: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x4d1194u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4d1198: 0x1012  mflo        $v0
    ctx->pc = 0x4d1198u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d119c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d119cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d11a0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4D11A0u;
    {
        const bool branch_taken_0x4d11a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D11A0u;
        // 0x4d11a4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d11a0) {
            ctx->pc = 0x4D1170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1170;
        }
    }
    ctx->pc = 0x4D11A8u;
label_4d11a8:
    // 0x4d11a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4d11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4d11ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4d11acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4d11b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4d11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4d11b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4d11b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d11b8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4d11b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d11bc: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x4d11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4d11c0: 0xc133518  jal         func_4CD460
    ctx->pc = 0x4D11C0u;
    SET_GPR_U32(ctx, 31, 0x4D11C8u);
    ctx->pc = 0x4D11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D11C0u;
    // 0x4d11c4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4D11C0u, 0x4D11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D11C8u;
label_4d11c8:
    // 0x4d11c8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D11C8u;
    {
        const bool branch_taken_0x4d11c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d11c8) {
            ctx->pc = 0x4D11E0u;
            goto label_4d11e0;
        }
    }
    ctx->pc = 0x4D11D0u;
    // 0x4d11d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4d11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4d11d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4d11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4d11d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d11dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d11dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d11e0:
    // 0x4d11e0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D11E0u;
    {
        const bool branch_taken_0x4d11e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d11e0) {
            ctx->pc = 0x4D11F0u;
            goto label_4d11f0;
        }
    }
    ctx->pc = 0x4D11E8u;
    // 0x4d11e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4d11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4d11ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4d11f0:
    // 0x4d11f0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D11F0u;
    {
        const bool branch_taken_0x4d11f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D11F0u;
        // 0x4d11f4: 0x2951021  addu        $v0, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d11f0) {
            ctx->pc = 0x4D11FCu;
            goto label_4d11fc;
        }
    }
    ctx->pc = 0x4D11F8u;
    // 0x4d11f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d11fc:
    // 0x4d11fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d11fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d1200: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d1200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d1204: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d1204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d1208: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d1208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d120c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d120cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d1210: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d1210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d1214: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d1214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d1218: 0x3e00008  jr          $ra
    ctx->pc = 0x4D1218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1218u;
        // 0x4d121c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D1218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D1220u;
}
