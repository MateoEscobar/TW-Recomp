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

// Function: sub_004D0DF0
// Address: 0x4d0df0 - 0x4d10e0
void sub_004D0DF0_0x4d0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0DF0_0x4d0df0");
#endif

    switch (ctx->pc) {
        case 0x4d0eb8u: goto label_4d0eb8;
        case 0x4d0ee8u: goto label_4d0ee8;
        case 0x4d0f24u: goto label_4d0f24;
        case 0x4d0f3cu: goto label_4d0f3c;
        case 0x4d0f58u: goto label_4d0f58;
        case 0x4d0f6cu: goto label_4d0f6c;
        case 0x4d0f78u: goto label_4d0f78;
        case 0x4d0f84u: goto label_4d0f84;
        case 0x4d0f8cu: goto label_4d0f8c;
        case 0x4d0facu: goto label_4d0fac;
        case 0x4d1030u: goto label_4d1030;
        case 0x4d1058u: goto label_4d1058;
        default: break;
    }

    ctx->pc = 0x4d0df0u;

    // 0x4d0df0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4d0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4d0df4: 0x3402ac43  ori         $v0, $zero, 0xAC43
    ctx->pc = 0x4d0df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44099);
    // 0x4d0df8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4d0df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4d0dfc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d0dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d0e00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4d0e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4d0e04: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4d0e04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0e08: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4d0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4d0e0c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4d0e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4d0e10: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4d0e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4d0e14: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4d0e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4d0e18: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4d0e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4d0e1c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4d0e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4d0e20: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4d0e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4d0e24: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4d0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4d0e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D0E28u;
    {
        const bool branch_taken_0x4d0e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0E28u;
        // 0x4d0e2c: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0e28) {
            ctx->pc = 0x4D0E38u;
            goto label_4d0e38;
        }
    }
    ctx->pc = 0x4D0E30u;
    // 0x4d0e30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0E30u;
    {
        const bool branch_taken_0x4d0e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0E30u;
        // 0x4d0e34: 0x24140800  addiu       $s4, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0e30) {
            ctx->pc = 0x4D0E48u;
            goto label_4d0e48;
        }
    }
    ctx->pc = 0x4D0E38u;
label_4d0e38:
    // 0x4d0e38: 0x2c835622  sltiu       $v1, $a0, 0x5622
    ctx->pc = 0x4d0e38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22050) ? 1 : 0);
    // 0x4d0e3c: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x4d0e3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4d0e40: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x4d0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4d0e44: 0x43a00a  movz        $s4, $v0, $v1
    ctx->pc = 0x4d0e44u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_4d0e48:
    // 0x4d0e48: 0x2961018  mult        $v0, $s4, $s6
    ctx->pc = 0x4d0e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d0e4c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4d0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4d0e50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4d0e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d0e54: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4d0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4d0e58: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D0E58u;
    {
        const bool branch_taken_0x4d0e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0E58u;
        // 0x4d0e5c: 0x2a840  sll         $s5, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0e58) {
            ctx->pc = 0x4D0E6Cu;
            goto label_4d0e6c;
        }
    }
    ctx->pc = 0x4D0E60u;
    // 0x4d0e60: 0x962018  mult        $a0, $a0, $s6
    ctx->pc = 0x4d0e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4d0e64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4d0e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0e68: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4d0e68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d0e6c:
    // 0x4d0e6c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4d0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d0e70: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4d0e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4d0e74: 0x29842  srl         $s3, $v0, 1
    ctx->pc = 0x4d0e74u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4d0e78: 0x8ca339e8  lw          $v1, 0x39E8($a1)
    ctx->pc = 0x4d0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14824)));
    // 0x4d0e7c: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x4d0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4d0e80: 0x149042  srl         $s2, $s4, 1
    ctx->pc = 0x4d0e80u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x4d0e84: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4d0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4d0e88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d0e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0e8c: 0x151042  srl         $v0, $s5, 1
    ctx->pc = 0x4d0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x4d0e90: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x4d0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x4d0e94: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4d0e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4d0e98: 0x73182b  sltu        $v1, $v1, $s3
    ctx->pc = 0x4d0e98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4d0e9c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x4d0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4d0ea0: 0x27be0004  addiu       $fp, $sp, 0x4
    ctx->pc = 0x4d0ea0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4d0ea4: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x4d0ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4d0ea8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4D0EA8u;
    {
        const bool branch_taken_0x4d0ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0EA8u;
        // 0x4d0eac: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ea8) {
            ctx->pc = 0x4D0ED4u;
            goto label_4d0ed4;
        }
    }
    ctx->pc = 0x4D0EB0u;
    // 0x4d0eb0: 0x24a339e8  addiu       $v1, $a1, 0x39E8
    ctx->pc = 0x4d0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 14824));
    // 0x4d0eb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d0eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4d0eb8:
    // 0x4d0eb8: 0x2e220019  sltiu       $v0, $s1, 0x19
    ctx->pc = 0x4d0eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x4d0ebc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0EBCu;
    {
        const bool branch_taken_0x4d0ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0EBCu;
        // 0x4d0ec0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ebc) {
            ctx->pc = 0x4D0ED4u;
            goto label_4d0ed4;
        }
    }
    ctx->pc = 0x4D0EC4u;
    // 0x4d0ec4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d0ec8: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x4d0ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4d0ecc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4D0ECCu;
    {
        const bool branch_taken_0x4d0ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d0ecc) {
            ctx->pc = 0x4D0ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0ECCu;
            // 0x4d0ed0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0eb8;
        }
    }
    ctx->pc = 0x4D0ED4u;
label_4d0ed4:
    // 0x4d0ed4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x4d0ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4d0ed8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x4d0ed8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0edc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d0edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d0ee0: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4D0EE0u;
    SET_GPR_U32(ctx, 31, 0x4D0EE8u);
    ctx->pc = 0x4D0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0EE0u;
    // 0x4d0ee4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4D0EE0u, 0x4D0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0EE8u;
label_4d0ee8:
    // 0x4d0ee8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D0EE8u;
    {
        const bool branch_taken_0x4d0ee8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x4D0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0EE8u;
        // 0x4d0eec: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ee8) {
            ctx->pc = 0x4D0F04u;
            goto label_4d0f04;
        }
    }
    ctx->pc = 0x4D0EF0u;
    // 0x4d0ef0: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x4d0ef0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d0ef4: 0x0  nop
    ctx->pc = 0x4d0ef4u;
    // NOP
    // 0x4d0ef8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x4d0ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4d0efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D0EFCu;
    {
        const bool branch_taken_0x4d0efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0efc) {
            ctx->pc = 0x4D0F1Cu;
            goto label_4d0f1c;
        }
    }
    ctx->pc = 0x4D0F04u;
label_4d0f04:
    // 0x4d0f04: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x4d0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x4d0f08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d0f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d0f0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d0f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d0f10: 0x0  nop
    ctx->pc = 0x4d0f10u;
    // NOP
    // 0x4d0f14: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x4d0f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4d0f18: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x4d0f18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_4d0f1c:
    // 0x4d0f1c: 0xc1339f4  jal         func_4CE7D0
    ctx->pc = 0x4D0F1Cu;
    SET_GPR_U32(ctx, 31, 0x4D0F24u);
    ctx->pc = 0x4CE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7D0u, 0x4D0F1Cu, 0x4D0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F24u;
label_4d0f24:
    // 0x4d0f24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0f24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4d0f28: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4d0f28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4d0f2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d0f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0f30: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4d0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4d0f34: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4D0F34u;
    SET_GPR_U32(ctx, 31, 0x4D0F3Cu);
    ctx->pc = 0x4D0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0F34u;
    // 0x4d0f38: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4D0F34u, 0x4D0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F3Cu;
label_4d0f3c:
    // 0x4d0f3c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x4d0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4d0f40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D0F40u;
    {
        const bool branch_taken_0x4d0f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0F40u;
        // 0x4d0f44: 0x122880  sll         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0f40) {
            ctx->pc = 0x4D0F60u;
            goto label_4d0f60;
        }
    }
    ctx->pc = 0x4D0F48u;
    // 0x4d0f48: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x4d0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x4d0f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d0f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0f50: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4D0F50u;
    SET_GPR_U32(ctx, 31, 0x4D0F58u);
    ctx->pc = 0x4D0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0F50u;
    // 0x4d0f54: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4D0F50u, 0x4D0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F58u;
label_4d0f58:
    // 0x4d0f58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0F58u;
    {
        const bool branch_taken_0x4d0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0F58u;
        // 0x4d0f5c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0f58) {
            ctx->pc = 0x4D0F70u;
            goto label_4d0f70;
        }
    }
    ctx->pc = 0x4D0F60u;
label_4d0f60:
    // 0x4d0f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d0f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0f64: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4D0F64u;
    SET_GPR_U32(ctx, 31, 0x4D0F6Cu);
    ctx->pc = 0x4D0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0F64u;
    // 0x4d0f68: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4D0F64u, 0x4D0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F6Cu;
label_4d0f6c:
    // 0x4d0f6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x4d0f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4d0f70:
    // 0x4d0f70: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4D0F70u;
    SET_GPR_U32(ctx, 31, 0x4D0F78u);
    ctx->pc = 0x4D0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0F70u;
    // 0x4d0f74: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4D0F70u, 0x4D0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F78u;
label_4d0f78:
    // 0x4d0f78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4d0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0f7c: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4D0F7Cu;
    SET_GPR_U32(ctx, 31, 0x4D0F84u);
    ctx->pc = 0x4D0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0F7Cu;
    // 0x4d0f80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4D0F7Cu, 0x4D0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F84u;
label_4d0f84:
    // 0x4d0f84: 0xc132300  jal         func_4C8C00
    ctx->pc = 0x4D0F84u;
    SET_GPR_U32(ctx, 31, 0x4D0F8Cu);
    ctx->pc = 0x4D0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0F84u;
    // 0x4d0f88: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4D0F84u, 0x4D0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F8Cu;
label_4d0f8c:
    // 0x4d0f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d0f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0f90: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D0F90u;
    {
        const bool branch_taken_0x4d0f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0F90u;
        // 0x4d0f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0f90) {
            ctx->pc = 0x4D0FA0u;
            goto label_4d0fa0;
        }
    }
    ctx->pc = 0x4D0F98u;
    // 0x4d0f98: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x4D0F98u;
    {
        const bool branch_taken_0x4d0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0F98u;
        // 0x4d0f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0f98) {
            ctx->pc = 0x4D10ACu;
            goto label_4d10ac;
        }
    }
    ctx->pc = 0x4D0FA0u;
label_4d0fa0:
    // 0x4d0fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d0fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0fa4: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4D0FA4u;
    SET_GPR_U32(ctx, 31, 0x4D0FACu);
    ctx->pc = 0x4D0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0FA4u;
    // 0x4d0fa8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4D0FA4u, 0x4D0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0FACu;
label_4d0fac:
    // 0x4d0fac: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4d0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4d0fb0: 0x153102  srl         $a2, $s5, 4
    ctx->pc = 0x4d0fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 4));
    // 0x4d0fb4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4d0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0fb8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x4d0fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x4d0fbc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4d0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0fc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4d0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0fc4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4d0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d0fc8: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x4d0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x4d0fcc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x4d0fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x4d0fd0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x4d0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x4d0fd4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x4d0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x4d0fd8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4d0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4d0fdc: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x4d0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x4d0fe0: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x4d0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x4d0fe4: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x4d0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x4d0fe8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x4d0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x4d0fec: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x4d0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x4d0ff0: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D0FF0u;
    {
        const bool branch_taken_0x4d0ff0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x4D0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0FF0u;
        // 0x4d0ff4: 0xae150008  sw          $s5, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ff0) {
            ctx->pc = 0x4D100Cu;
            goto label_4d100c;
        }
    }
    ctx->pc = 0x4D0FF8u;
    // 0x4d0ff8: 0x44946000  mtc1        $s4, $f12
    ctx->pc = 0x4d0ff8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d0ffc: 0x0  nop
    ctx->pc = 0x4d0ffcu;
    // NOP
    // 0x4d1000: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x4d1000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4d1004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D1004u;
    {
        const bool branch_taken_0x4d1004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1004) {
            ctx->pc = 0x4D1028u;
            goto label_4d1028;
        }
    }
    ctx->pc = 0x4D100Cu;
label_4d100c:
    // 0x4d100c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4d100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d1010: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x4d1010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x4d1014: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d1014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d1018: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d1018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d101c: 0x0  nop
    ctx->pc = 0x4d101cu;
    // NOP
    // 0x4d1020: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x4d1020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4d1024: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x4d1024u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_4d1028:
    // 0x4d1028: 0xc1339f4  jal         func_4CE7D0
    ctx->pc = 0x4D1028u;
    SET_GPR_U32(ctx, 31, 0x4D1030u);
    ctx->pc = 0x4D102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1028u;
    // 0x4d102c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7D0u, 0x4D1028u, 0x4D1030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1030u;
label_4d1030:
    // 0x4d1030: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4d1030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4d1034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4d1034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4d1038: 0x0  nop
    ctx->pc = 0x4d1038u;
    // NOP
    // 0x4d103c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4d103cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4d1040: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x4D1040u;
    {
        const bool branch_taken_0x4d1040 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1040u;
        // 0x4d1044: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1040) {
            ctx->pc = 0x4D1088u;
            goto label_4d1088;
        }
    }
    ctx->pc = 0x4D1048u;
    // 0x4d1048: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4d1048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4d104c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4d104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4d1050: 0x244539e8  addiu       $a1, $v0, 0x39E8
    ctx->pc = 0x4d1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14824));
    // 0x4d1054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d1054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1058:
    // 0x4d1058: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d105c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x4d105cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d1060: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x4d1060u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4d1064: 0x1012  mflo        $v0
    ctx->pc = 0x4d1064u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d1068: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1068u;
    {
        const bool branch_taken_0x4d1068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1068u;
        // 0x4d106c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1068) {
            ctx->pc = 0x4D1074u;
            goto label_4d1074;
        }
    }
    ctx->pc = 0x4D1070u;
    // 0x4d1070: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x4d1070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_4d1074:
    // 0x4d1074: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d1074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4d1078: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d1078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d107c: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x4d107cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x4d1080: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4D1080u;
    {
        const bool branch_taken_0x4d1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1080u;
        // 0x4d1084: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1080) {
            ctx->pc = 0x4D1058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1058;
        }
    }
    ctx->pc = 0x4D1088u;
label_4d1088:
    // 0x4d1088: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4d1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4d108c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4d108cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4d1090: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x4d1090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4d1094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d1094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d1098: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d1098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d109c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x4d109cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x4d10a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d10a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d10a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4d10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4d10a8: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x4d10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
label_4d10ac:
    // 0x4d10ac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4d10acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d10b0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4d10b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d10b4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4d10b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d10b8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4d10b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d10bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4d10bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d10c0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4d10c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d10c4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4d10c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d10c8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4d10c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4d10cc: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4d10ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d10d0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4d10d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4d10d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D10D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D10D4u;
        // 0x4d10d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D10D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D10DCu;
    // 0x4d10dc: 0x0  nop
    ctx->pc = 0x4d10dcu;
    // NOP
    ctx->pc = 0x4d10e0u;
}
