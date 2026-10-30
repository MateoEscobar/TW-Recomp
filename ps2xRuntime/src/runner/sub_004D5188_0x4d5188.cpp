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

// Function: sub_004D5188
// Address: 0x4d5188 - 0x4d54a0
void sub_004D5188_0x4d5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5188_0x4d5188");
#endif

    switch (ctx->pc) {
        case 0x4d51d8u: goto label_4d51d8;
        case 0x4d5210u: goto label_4d5210;
        case 0x4d5260u: goto label_4d5260;
        case 0x4d5270u: goto label_4d5270;
        case 0x4d5290u: goto label_4d5290;
        case 0x4d52a4u: goto label_4d52a4;
        case 0x4d52f0u: goto label_4d52f0;
        case 0x4d5330u: goto label_4d5330;
        case 0x4d5388u: goto label_4d5388;
        case 0x4d5398u: goto label_4d5398;
        case 0x4d53b0u: goto label_4d53b0;
        case 0x4d53c8u: goto label_4d53c8;
        case 0x4d53e0u: goto label_4d53e0;
        case 0x4d53f0u: goto label_4d53f0;
        case 0x4d5408u: goto label_4d5408;
        case 0x4d5458u: goto label_4d5458;
        case 0x4d546cu: goto label_4d546c;
        default: break;
    }

    ctx->pc = 0x4d5188u;

    // 0x4d5188: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4d5188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4d518c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4d518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4d5190: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4d5190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4d5194: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4d5194u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5198: 0x1e8883  sra         $s1, $fp, 2
    ctx->pc = 0x4d5198u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 2));
    // 0x4d519c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4d519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4d51a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4d51a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4d51a4: 0x2a220081  slti        $v0, $s1, 0x81
    ctx->pc = 0x4d51a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x4d51a8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4d51a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4d51ac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4d51acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4d51b0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4d51b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4d51b4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4d51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4d51b8: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4d51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4d51bc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4d51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4d51c0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4d51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4d51c4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4d51c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4d51c8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4D51C8u;
    {
        const bool branch_taken_0x4d51c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D51C8u;
        // 0x4d51cc: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d51c8) {
            ctx->pc = 0x4D5300u;
            goto label_4d5300;
        }
    }
    ctx->pc = 0x4D51D0u;
    // 0x4d51d0: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x4d51d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x4d51d4: 0x0  nop
    ctx->pc = 0x4d51d4u;
    // NOP
label_4d51d8:
    // 0x4d51d8: 0x112083  sra         $a0, $s1, 2
    ctx->pc = 0x4d51d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 2));
    // 0x4d51dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d51dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d51e0: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x4d51e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d51e4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4d51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x4d51e8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4D51E8u;
    {
        const bool branch_taken_0x4d51e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D51E8u;
        // 0x4d51ec: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d51e8) {
            ctx->pc = 0x4D52C0u;
            goto label_4d52c0;
        }
    }
    ctx->pc = 0x4D51F0u;
    // 0x4d51f0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4d51f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d51f4: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x4d51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d51f8: 0xb11823  subu        $v1, $a1, $s1
    ctx->pc = 0x4d51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x4d51fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d5200: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4d5200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4d5204: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4d5204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x4d5208: 0xd18023  subu        $s0, $a2, $s1
    ctx->pc = 0x4d5208u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x4d520c: 0x0  nop
    ctx->pc = 0x4d520cu;
    // NOP
label_4d5210:
    // 0x4d5210: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x4d5210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d5214: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4D5214u;
    {
        const bool branch_taken_0x4d5214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5214u;
        // 0x4d5218: 0x6b880  sll         $s7, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5214) {
            ctx->pc = 0x4D52B0u;
            goto label_4d52b0;
        }
    }
    ctx->pc = 0x4D521Cu;
    // 0x4d521c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4d521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5220: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x4d5220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4d5224: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4d5224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d5228: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4d5228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d522c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d5230: 0x69100  sll         $s2, $a2, 4
    ctx->pc = 0x4d5230u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4d5234: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x4d5234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x4d5238: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x4d5238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d523c: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x4d523cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d5240: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x4d5240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d5244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4d5244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5248: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4d5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d524c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4d524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4d5250: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4d5250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d5254: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x4d5254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x4d5258: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x4d5258u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d525c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d525cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d5260:
    // 0x4d5260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5264: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4d5264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5268: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D5268u;
    SET_GPR_U32(ctx, 31, 0x4D5270u);
    ctx->pc = 0x4D526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5268u;
    // 0x4d526c: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D5268u, 0x4D5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5270u;
label_4d5270:
    // 0x4d5270: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x4d5270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x4d5274: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4d5274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5278: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d5278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d527c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4d527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4d5280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5284: 0x292a021  addu        $s4, $s4, $s2
    ctx->pc = 0x4d5284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x4d5288: 0xc1356d6  jal         func_4D5B58
    ctx->pc = 0x4D5288u;
    SET_GPR_U32(ctx, 31, 0x4D5290u);
    ctx->pc = 0x4D528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5288u;
    // 0x4d528c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5B58u, 0x4D5288u, 0x4D5290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5290u;
label_4d5290:
    // 0x4d5290: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d5290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5298: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4d5298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d529c: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D529Cu;
    SET_GPR_U32(ctx, 31, 0x4D52A4u);
    ctx->pc = 0x4D52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D529Cu;
    // 0x4d52a0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D529Cu, 0x4D52A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D52A4u;
label_4d52a4:
    // 0x4d52a4: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x4d52a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d52a8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4D52A8u;
    {
        const bool branch_taken_0x4d52a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D52A8u;
        // 0x4d52ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d52a8) {
            ctx->pc = 0x4D5260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5260;
        }
    }
    ctx->pc = 0x4D52B0u;
label_4d52b0:
    // 0x4d52b0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4d52b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d52b4: 0xde102a  slt         $v0, $a2, $fp
    ctx->pc = 0x4d52b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d52b8: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x4D52B8u;
    {
        const bool branch_taken_0x4d52b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d52b8) {
            ctx->pc = 0x4D52BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D52B8u;
            // 0x4d52bc: 0xd18023  subu        $s0, $a2, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5210;
        }
    }
    ctx->pc = 0x4D52C0u;
label_4d52c0:
    // 0x4d52c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4d52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d52c4: 0x113043  sra         $a2, $s1, 1
    ctx->pc = 0x4d52c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 1));
    // 0x4d52c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4d52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d52cc: 0x3d12823  subu        $a1, $fp, $s1
    ctx->pc = 0x4d52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x4d52d0: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x4d52d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4d52d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4d52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d52d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d52dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d52dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d52e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d52e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d52e4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4d52e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d52e8: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D52E8u;
    SET_GPR_U32(ctx, 31, 0x4D52F0u);
    ctx->pc = 0x4D52ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D52E8u;
    // 0x4d52ec: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D52E8u, 0x4D52F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D52F0u;
label_4d52f0:
    // 0x4d52f0: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x4d52f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d52f4: 0x2a220081  slti        $v0, $s1, 0x81
    ctx->pc = 0x4d52f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x4d52f8: 0x1040ffb7  beqz        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x4D52F8u;
    {
        const bool branch_taken_0x4d52f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D52F8u;
        // 0x4d52fc: 0x111843  sra         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d52f8) {
            ctx->pc = 0x4D51D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d51d8;
        }
    }
    ctx->pc = 0x4D5300u;
label_4d5300:
    // 0x4d5300: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x4d5300u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x4d5304: 0x3d12823  subu        $a1, $fp, $s1
    ctx->pc = 0x4d5304u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x4d5308: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d5308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d530c: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x4d530cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d5310: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x4d5310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x4d5314: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x4D5314u;
    {
        const bool branch_taken_0x4d5314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5314u;
        // 0x4d5318: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5314) {
            ctx->pc = 0x4D5424u;
            goto label_4d5424;
        }
    }
    ctx->pc = 0x4D531Cu;
    // 0x4d531c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4d531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d5320: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x4d5320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d5324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d5324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d5328: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x4d5328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x4d532c: 0xd18023  subu        $s0, $a2, $s1
    ctx->pc = 0x4d532cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_4d5330:
    // 0x4d5330: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x4d5330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d5334: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4D5334u;
    {
        const bool branch_taken_0x4d5334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5334u;
        // 0x4d5338: 0x6b880  sll         $s7, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5334) {
            ctx->pc = 0x4D5414u;
            goto label_4d5414;
        }
    }
    ctx->pc = 0x4D533Cu;
    // 0x4d533c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4d533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5340: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x4d5340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4d5344: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4d5344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d5348: 0x6a900  sll         $s5, $a2, 4
    ctx->pc = 0x4d5348u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4d534c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4d534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d5350: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4d5350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d5354: 0xa3a021  addu        $s4, $a1, $v1
    ctx->pc = 0x4d5354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d5358: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4d5358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d535c: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x4d535cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x4d5360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d5360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d5364: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x4d5364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x4d5368: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4d5368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d536c: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x4d536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x4d5370: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x4d5370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d5374: 0xa49821  addu        $s3, $a1, $a0
    ctx->pc = 0x4d5374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4d5378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4d5378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d537c: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x4d537cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d5380: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d5380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5384: 0x0  nop
    ctx->pc = 0x4d5384u;
    // NOP
label_4d5388:
    // 0x4d5388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d538c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4d538cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5390: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D5390u;
    SET_GPR_U32(ctx, 31, 0x4D5398u);
    ctx->pc = 0x4D5394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5390u;
    // 0x4d5394: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D5390u, 0x4D5398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5398u;
label_4d5398:
    // 0x4d5398: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d5398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d539c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d539cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53a0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d53a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d53a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d53a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53a8: 0xc135e4a  jal         func_4D7928
    ctx->pc = 0x4D53A8u;
    SET_GPR_U32(ctx, 31, 0x4D53B0u);
    ctx->pc = 0x4D53ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D53A8u;
    // 0x4d53ac: 0x2559021  addu        $s2, $s2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7928u, 0x4D53A8u, 0x4D53B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D53B0u;
label_4d53b0:
    // 0x4d53b0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4d53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d53b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d53b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53b8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x4d53b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4d53bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d53bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53c0: 0xc1356d6  jal         func_4D5B58
    ctx->pc = 0x4D53C0u;
    SET_GPR_U32(ctx, 31, 0x4D53C8u);
    ctx->pc = 0x4D53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D53C0u;
    // 0x4d53c4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5B58u, 0x4D53C0u, 0x4D53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D53C8u;
label_4d53c8:
    // 0x4d53c8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d53c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d53cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d53ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53d0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d53d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d53d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d53d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53d8: 0xc135f3a  jal         func_4D7CE8
    ctx->pc = 0x4D53D8u;
    SET_GPR_U32(ctx, 31, 0x4D53E0u);
    ctx->pc = 0x4D53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D53D8u;
    // 0x4d53dc: 0x2759821  addu        $s3, $s3, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7CE8u, 0x4D53D8u, 0x4D53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D53E0u;
label_4d53e0:
    // 0x4d53e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d53e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d53e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53e8: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D53E8u;
    SET_GPR_U32(ctx, 31, 0x4D53F0u);
    ctx->pc = 0x4D53ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D53E8u;
    // 0x4d53ec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D53E8u, 0x4D53F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D53F0u;
label_4d53f0:
    // 0x4d53f0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d53f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d53f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d53f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d53f8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d53f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d53fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d53fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5400: 0xc135e4a  jal         func_4D7928
    ctx->pc = 0x4D5400u;
    SET_GPR_U32(ctx, 31, 0x4D5408u);
    ctx->pc = 0x4D5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5400u;
    // 0x4d5404: 0x295a021  addu        $s4, $s4, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7928u, 0x4D5400u, 0x4D5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5408u;
label_4d5408:
    // 0x4d5408: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x4d5408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d540c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x4D540Cu;
    {
        const bool branch_taken_0x4d540c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D540Cu;
        // 0x4d5410: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d540c) {
            ctx->pc = 0x4D5388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5388;
        }
    }
    ctx->pc = 0x4D5414u;
label_4d5414:
    // 0x4d5414: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4d5414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5418: 0xde102a  slt         $v0, $a2, $fp
    ctx->pc = 0x4d5418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x4d541c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x4D541Cu;
    {
        const bool branch_taken_0x4d541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D541Cu;
        // 0x4d5420: 0xd18023  subu        $s0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d541c) {
            ctx->pc = 0x4D5330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5330;
        }
    }
    ctx->pc = 0x4D5424u;
label_4d5424:
    // 0x4d5424: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4d5424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5428: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4d5428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d542c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4d542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4d5430: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x4d5430u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d5434: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4d5434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5438: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4d5438u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d543c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5440: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d5440u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d5444: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x4d5444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4d5448: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x4d5448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4d544c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5450: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D5450u;
    SET_GPR_U32(ctx, 31, 0x4D5458u);
    ctx->pc = 0x4D5454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5450u;
    // 0x4d5454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D5450u, 0x4D5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5458u;
label_4d5458:
    // 0x4d5458: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d5458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d545c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5460: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d5460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5464: 0xc135e4a  jal         func_4D7928
    ctx->pc = 0x4D5464u;
    SET_GPR_U32(ctx, 31, 0x4D546Cu);
    ctx->pc = 0x4D5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5464u;
    // 0x4d5468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7928u, 0x4D5464u, 0x4D546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D546Cu;
label_4d546c:
    // 0x4d546c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4d546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d5470: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4d5470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d5474: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4d5474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d5478: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4d5478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d547c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4d547cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d5480: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4d5480u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d5484: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4d5484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d5488: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4d5488u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4d548c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4d548cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d5490: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4d5490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4d5494: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5494u;
        // 0x4d5498: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D5494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D549Cu;
    // 0x4d549c: 0x0  nop
    ctx->pc = 0x4d549cu;
    // NOP
    ctx->pc = 0x4d54a0u;
}
