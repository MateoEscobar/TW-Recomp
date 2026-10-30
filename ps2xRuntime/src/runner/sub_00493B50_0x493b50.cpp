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

// Function: sub_00493B50
// Address: 0x493b50 - 0x493e60
void sub_00493B50_0x493b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493B50_0x493b50");
#endif

    switch (ctx->pc) {
        case 0x493b80u: goto label_493b80;
        case 0x493bb0u: goto label_493bb0;
        case 0x493c08u: goto label_493c08;
        case 0x493c18u: goto label_493c18;
        case 0x493dd0u: goto label_493dd0;
        case 0x493df0u: goto label_493df0;
        default: break;
    }

    ctx->pc = 0x493b50u;

    // 0x493b50: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x493b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x493b54: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x493b54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493b58: 0x7fb00870  sq          $s0, 0x870($sp)
    ctx->pc = 0x493b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 16));
    // 0x493b5c: 0x7fb10860  sq          $s1, 0x860($sp)
    ctx->pc = 0x493b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 17));
    // 0x493b60: 0x7fb20850  sq          $s2, 0x850($sp)
    ctx->pc = 0x493b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 18));
    // 0x493b64: 0x7fb30840  sq          $s3, 0x840($sp)
    ctx->pc = 0x493b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 19));
    // 0x493b68: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x493b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x493b6c: 0x184000b6  blez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x493B6Cu;
    {
        const bool branch_taken_0x493b6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x493B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493B6Cu;
        // 0x493b70: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493b6c) {
            ctx->pc = 0x493E48u;
            goto label_493e48;
        }
    }
    ctx->pc = 0x493B74u;
    // 0x493b74: 0x27ae0800  addiu       $t6, $sp, 0x800
    ctx->pc = 0x493b74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x493b78: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x493b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x493b7c: 0x0  nop
    ctx->pc = 0x493b7cu;
    // NOP
label_493b80:
    // 0x493b80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x493b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493b84: 0x1840008f  blez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x493B84u;
    {
        const bool branch_taken_0x493b84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x493B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493B84u;
        // 0x493b88: 0x25f30004  addiu       $s3, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493b84) {
            ctx->pc = 0x493DC4u;
            goto label_493dc4;
        }
    }
    ctx->pc = 0x493B8Cu;
    // 0x493b8c: 0x8da40018  lw          $a0, 0x18($t5)
    ctx->pc = 0x493b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x493b90: 0x25e50002  addiu       $a1, $t7, 0x2
    ctx->pc = 0x493b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x493b94: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x493b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x493b98: 0x31f90004  andi        $t9, $t7, 0x4
    ctx->pc = 0x493b98u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x493b9c: 0x1e41018  mult        $v0, $t7, $a0
    ctx->pc = 0x493b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x493ba0: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x493ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x493ba4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x493ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x493ba8: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x493ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x493bac: 0x2292821  addu        $a1, $s1, $t1
    ctx->pc = 0x493bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_493bb0:
    // 0x493bb0: 0x91043  sra         $v0, $t1, 1
    ctx->pc = 0x493bb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 1));
    // 0x493bb4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x493bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x493bb8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x493bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x493bbc: 0x2493021  addu        $a2, $s2, $t1
    ctx->pc = 0x493bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x493bc0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x493bc0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493bc4: 0x7fa30800  sq          $v1, 0x800($sp)
    ctx->pc = 0x493bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 3));
    // 0x493bc8: 0x25300020  addiu       $s0, $t1, 0x20
    ctx->pc = 0x493bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x493bcc: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x493bccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x493bd0: 0x7fa20810  sq          $v0, 0x810($sp)
    ctx->pc = 0x493bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 2));
    // 0x493bd4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x493bd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x493bd8: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x493bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
    // 0x493bdc: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x493bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x493be0: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x493be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
    // 0x493be4: 0xfc800608  sd          $zero, 0x608($a0)
    ctx->pc = 0x493be4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1544), GPR_U64(ctx, 0));
    // 0x493be8: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x493be8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x493bec: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x493becu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x493bf0: 0xfc800200  sd          $zero, 0x200($a0)
    ctx->pc = 0x493bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 512), GPR_U64(ctx, 0));
    // 0x493bf4: 0xfc800208  sd          $zero, 0x208($a0)
    ctx->pc = 0x493bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 520), GPR_U64(ctx, 0));
    // 0x493bf8: 0xfc800400  sd          $zero, 0x400($a0)
    ctx->pc = 0x493bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1024), GPR_U64(ctx, 0));
    // 0x493bfc: 0xfc800408  sd          $zero, 0x408($a0)
    ctx->pc = 0x493bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1032), GPR_U64(ctx, 0));
    // 0x493c00: 0xfc800600  sd          $zero, 0x600($a0)
    ctx->pc = 0x493c00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1536), GPR_U64(ctx, 0));
    // 0x493c04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x493c04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493c08:
    // 0x493c08: 0x25980020  addiu       $t8, $t4, 0x20
    ctx->pc = 0x493c08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x493c0c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x493c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493c10: 0xc5827  nor         $t3, $zero, $t4
    ctx->pc = 0x493c10u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
    // 0x493c14: 0x0  nop
    ctx->pc = 0x493c14u;
    // NOP
label_493c18:
    // 0x493c18: 0x13200019  beqz        $t9, . + 4 + (0x19 << 2)
    ctx->pc = 0x493C18u;
    {
        const bool branch_taken_0x493c18 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x493C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493C18u;
        // 0x493c1c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493c18) {
            ctx->pc = 0x493C80u;
            goto label_493c80;
        }
    }
    ctx->pc = 0x493C20u;
    // 0x493c20: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x493c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x493c24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x493c24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x493c28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x493c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x493c2c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493c30: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x493c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x493c34: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493c34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493c38: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x493c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x493c3c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493c40: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493c40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x493c44: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493c48: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x493c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x493c4c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493c4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493c50: 0x30e60040  andi        $a2, $a3, 0x40
    ctx->pc = 0x493c50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x493c54: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x493c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x493c58: 0x31650001  andi        $a1, $t3, 0x1
    ctx->pc = 0x493c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x493c5c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493c60: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x493c60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x493c64: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x493c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x493c68: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x493c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x493c6c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x493c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x493c70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x493c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x493c74: 0x821826  xor         $v1, $a0, $v0
    ctx->pc = 0x493c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x493c78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x493C78u;
    {
        const bool branch_taken_0x493c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493C78u;
        // 0x493c7c: 0x18a3021  addu        $a2, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493c78) {
            ctx->pc = 0x493CD8u;
            goto label_493cd8;
        }
    }
    ctx->pc = 0x493C80u;
label_493c80:
    // 0x493c80: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x493c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x493c84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x493c84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x493c88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x493c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x493c8c: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x493c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x493c90: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493c94: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493c94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493c98: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x493c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x493c9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493ca0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493ca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x493ca4: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x493ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x493ca8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493cac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493cacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493cb0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x493cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x493cb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493cb8: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x493cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x493cbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x493cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x493cc0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x493cc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x493cc4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x493cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x493cc8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x493cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x493ccc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x493cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x493cd0: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x493cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x493cd4: 0x821826  xor         $v1, $a0, $v0
    ctx->pc = 0x493cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_493cd8:
    // 0x493cd8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x493cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x493cdc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x493CDCu;
    {
        const bool branch_taken_0x493cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493CDCu;
        // 0x493ce0: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493cdc) {
            ctx->pc = 0x493D3Cu;
            goto label_493d3c;
        }
    }
    ctx->pc = 0x493CE4u;
    // 0x493ce4: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x493ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x493ce8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x493ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x493cec: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x493cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x493cf0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x493cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x493cf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x493cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x493cf8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x493cf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x493cfc: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x493cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x493d00: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x493D00u;
    {
        const bool branch_taken_0x493d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x493D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493D00u;
        // 0x493d04: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d00) {
            ctx->pc = 0x493D1Cu;
            goto label_493d1c;
        }
    }
    ctx->pc = 0x493D08u;
    // 0x493d08: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x493d08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x493d0c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x493d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x493d10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x493d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493d14: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x493D14u;
    {
        const bool branch_taken_0x493d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493D14u;
        // 0x493d18: 0x306300f0  andi        $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d14) {
            ctx->pc = 0x493D84u;
            goto label_493d84;
        }
    }
    ctx->pc = 0x493D1Cu;
label_493d1c:
    // 0x493d1c: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x493d1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x493d20: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x493d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x493d24: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x493d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x493d28: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x493d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x493d2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x493d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x493d30: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x493d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x493d34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x493D34u;
    {
        const bool branch_taken_0x493d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493D34u;
        // 0x493d38: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d34) {
            ctx->pc = 0x493D8Cu;
            goto label_493d8c;
        }
    }
    ctx->pc = 0x493D3Cu;
label_493d3c:
    // 0x493d3c: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x493d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x493d40: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x493d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x493d44: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x493d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x493d48: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x493d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x493d4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x493d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x493d50: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x493d50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x493d54: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x493d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x493d58: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x493D58u;
    {
        const bool branch_taken_0x493d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x493D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493D58u;
        // 0x493d5c: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d58) {
            ctx->pc = 0x493D74u;
            goto label_493d74;
        }
    }
    ctx->pc = 0x493D60u;
    // 0x493d60: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x493d60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x493d64: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x493d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x493d68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x493d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493d6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x493D6Cu;
    {
        const bool branch_taken_0x493d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493D6Cu;
        // 0x493d70: 0x31902  srl         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d6c) {
            ctx->pc = 0x493D84u;
            goto label_493d84;
        }
    }
    ctx->pc = 0x493D74u;
label_493d74:
    // 0x493d74: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x493d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x493d78: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x493d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x493d7c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x493d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493d80: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x493d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_493d84:
    // 0x493d84: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x493d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x493d88: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x493d88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_493d8c:
    // 0x493d8c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x493d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x493d90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x493d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x493d94: 0x29420020  slti        $v0, $t2, 0x20
    ctx->pc = 0x493d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x493d98: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x493D98u;
    {
        const bool branch_taken_0x493d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493D98u;
        // 0x493d9c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d98) {
            ctx->pc = 0x493C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493c18;
        }
    }
    ctx->pc = 0x493DA0u;
    // 0x493da0: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x493da0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493da4: 0x29820080  slti        $v0, $t4, 0x80
    ctx->pc = 0x493da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x493da8: 0x5440ff97  bnel        $v0, $zero, . + 4 + (-0x69 << 2)
    ctx->pc = 0x493DA8u;
    {
        const bool branch_taken_0x493da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493da8) {
            ctx->pc = 0x493DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493DA8u;
            // 0x493dac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493c08;
        }
    }
    ctx->pc = 0x493DB0u;
    // 0x493db0: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x493db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x493db4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x493db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493db8: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x493db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x493dbc: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x493DBCu;
    {
        const bool branch_taken_0x493dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493DBCu;
        // 0x493dc0: 0x2292821  addu        $a1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493dbc) {
            ctx->pc = 0x493BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493bb0;
        }
    }
    ctx->pc = 0x493DC4u;
label_493dc4:
    // 0x493dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x493dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493dc8: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x493dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x493dcc: 0x0  nop
    ctx->pc = 0x493dccu;
    // NOP
label_493dd0:
    // 0x493dd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x493dd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493dd4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x493dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x493dd8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x493DD8u;
    {
        const bool branch_taken_0x493dd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x493DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493DD8u;
        // 0x493ddc: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493dd8) {
            ctx->pc = 0x493E24u;
            goto label_493e24;
        }
    }
    ctx->pc = 0x493DE0u;
    // 0x493de0: 0x41240  sll         $v0, $a0, 9
    ctx->pc = 0x493de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x493de4: 0x1e43821  addu        $a3, $t7, $a0
    ctx->pc = 0x493de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x493de8: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x493de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x493dec: 0x8da40018  lw          $a0, 0x18($t5)
    ctx->pc = 0x493decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
label_493df0:
    // 0x493df0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x493df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x493df4: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x493df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x493df8: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x493df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x493dfc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x493dfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x493e00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x493e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x493e04: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x493e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x493e08: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x493e08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x493e0c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x493e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x493e10: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x493e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x493e14: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x493e14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x493e18: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x493e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x493e1c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x493E1Cu;
    {
        const bool branch_taken_0x493e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493e1c) {
            ctx->pc = 0x493E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493E1Cu;
            // 0x493e20: 0x8da40018  lw          $a0, 0x18($t5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493df0;
        }
    }
    ctx->pc = 0x493E24u;
label_493e24:
    // 0x493e24: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x493e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493e28: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x493e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x493e2c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x493E2Cu;
    {
        const bool branch_taken_0x493e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493e2c) {
            ctx->pc = 0x493E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493E2Cu;
            // 0x493e30: 0x8da2000c  lw          $v0, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493dd0;
        }
    }
    ctx->pc = 0x493E34u;
    // 0x493e34: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x493e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x493e38: 0x260782d  daddu       $t7, $s3, $zero
    ctx->pc = 0x493e38u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493e3c: 0x1e2102a  slt         $v0, $t7, $v0
    ctx->pc = 0x493e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x493e40: 0x5440ff4f  bnel        $v0, $zero, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x493E40u;
    {
        const bool branch_taken_0x493e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493e40) {
            ctx->pc = 0x493E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493E40u;
            // 0x493e44: 0x8da2000c  lw          $v0, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493b80;
        }
    }
    ctx->pc = 0x493E48u;
label_493e48:
    // 0x493e48: 0x7bb00870  lq          $s0, 0x870($sp)
    ctx->pc = 0x493e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x493e4c: 0x7bb10860  lq          $s1, 0x860($sp)
    ctx->pc = 0x493e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x493e50: 0x7bb20850  lq          $s2, 0x850($sp)
    ctx->pc = 0x493e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x493e54: 0x7bb30840  lq          $s3, 0x840($sp)
    ctx->pc = 0x493e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x493e58: 0x3e00008  jr          $ra
    ctx->pc = 0x493E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493E58u;
        // 0x493e5c: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493E60u;
}
