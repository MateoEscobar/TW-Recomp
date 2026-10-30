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

// Function: sub_003EEAA8
// Address: 0x3eeaa8 - 0x3eee68
void sub_003EEAA8_0x3eeaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEAA8_0x3eeaa8");
#endif

    switch (ctx->pc) {
        case 0x3eeaa8u: goto label_3eeaa8;
        case 0x3eeaacu: goto label_3eeaac;
        case 0x3eeab0u: goto label_3eeab0;
        case 0x3eeab4u: goto label_3eeab4;
        case 0x3eeab8u: goto label_3eeab8;
        case 0x3eeabcu: goto label_3eeabc;
        case 0x3eeac0u: goto label_3eeac0;
        case 0x3eeac4u: goto label_3eeac4;
        case 0x3eeac8u: goto label_3eeac8;
        case 0x3eeaccu: goto label_3eeacc;
        case 0x3eead0u: goto label_3eead0;
        case 0x3eead4u: goto label_3eead4;
        case 0x3eead8u: goto label_3eead8;
        case 0x3eeadcu: goto label_3eeadc;
        case 0x3eeae0u: goto label_3eeae0;
        case 0x3eeae4u: goto label_3eeae4;
        case 0x3eeae8u: goto label_3eeae8;
        case 0x3eeaecu: goto label_3eeaec;
        case 0x3eeaf0u: goto label_3eeaf0;
        case 0x3eeaf4u: goto label_3eeaf4;
        case 0x3eeaf8u: goto label_3eeaf8;
        case 0x3eeafcu: goto label_3eeafc;
        case 0x3eeb00u: goto label_3eeb00;
        case 0x3eeb04u: goto label_3eeb04;
        case 0x3eeb08u: goto label_3eeb08;
        case 0x3eeb0cu: goto label_3eeb0c;
        case 0x3eeb10u: goto label_3eeb10;
        case 0x3eeb14u: goto label_3eeb14;
        case 0x3eeb18u: goto label_3eeb18;
        case 0x3eeb1cu: goto label_3eeb1c;
        case 0x3eeb20u: goto label_3eeb20;
        case 0x3eeb24u: goto label_3eeb24;
        case 0x3eeb28u: goto label_3eeb28;
        case 0x3eeb2cu: goto label_3eeb2c;
        case 0x3eeb30u: goto label_3eeb30;
        case 0x3eeb34u: goto label_3eeb34;
        case 0x3eeb38u: goto label_3eeb38;
        case 0x3eeb3cu: goto label_3eeb3c;
        case 0x3eeb40u: goto label_3eeb40;
        case 0x3eeb44u: goto label_3eeb44;
        case 0x3eeb48u: goto label_3eeb48;
        case 0x3eeb4cu: goto label_3eeb4c;
        case 0x3eeb50u: goto label_3eeb50;
        case 0x3eeb54u: goto label_3eeb54;
        case 0x3eeb58u: goto label_3eeb58;
        case 0x3eeb5cu: goto label_3eeb5c;
        case 0x3eeb60u: goto label_3eeb60;
        case 0x3eeb64u: goto label_3eeb64;
        case 0x3eeb68u: goto label_3eeb68;
        case 0x3eeb6cu: goto label_3eeb6c;
        case 0x3eeb70u: goto label_3eeb70;
        case 0x3eeb74u: goto label_3eeb74;
        case 0x3eeb78u: goto label_3eeb78;
        case 0x3eeb7cu: goto label_3eeb7c;
        case 0x3eeb80u: goto label_3eeb80;
        case 0x3eeb84u: goto label_3eeb84;
        case 0x3eeb88u: goto label_3eeb88;
        case 0x3eeb8cu: goto label_3eeb8c;
        case 0x3eeb90u: goto label_3eeb90;
        case 0x3eeb94u: goto label_3eeb94;
        case 0x3eeb98u: goto label_3eeb98;
        case 0x3eeb9cu: goto label_3eeb9c;
        case 0x3eeba0u: goto label_3eeba0;
        case 0x3eeba4u: goto label_3eeba4;
        case 0x3eeba8u: goto label_3eeba8;
        case 0x3eebacu: goto label_3eebac;
        case 0x3eebb0u: goto label_3eebb0;
        case 0x3eebb4u: goto label_3eebb4;
        case 0x3eebb8u: goto label_3eebb8;
        case 0x3eebbcu: goto label_3eebbc;
        case 0x3eebc0u: goto label_3eebc0;
        case 0x3eebc4u: goto label_3eebc4;
        case 0x3eebc8u: goto label_3eebc8;
        case 0x3eebccu: goto label_3eebcc;
        case 0x3eebd0u: goto label_3eebd0;
        case 0x3eebd4u: goto label_3eebd4;
        case 0x3eebd8u: goto label_3eebd8;
        case 0x3eebdcu: goto label_3eebdc;
        case 0x3eebe0u: goto label_3eebe0;
        case 0x3eebe4u: goto label_3eebe4;
        case 0x3eebe8u: goto label_3eebe8;
        case 0x3eebecu: goto label_3eebec;
        case 0x3eebf0u: goto label_3eebf0;
        case 0x3eebf4u: goto label_3eebf4;
        case 0x3eebf8u: goto label_3eebf8;
        case 0x3eebfcu: goto label_3eebfc;
        case 0x3eec00u: goto label_3eec00;
        case 0x3eec04u: goto label_3eec04;
        case 0x3eec08u: goto label_3eec08;
        case 0x3eec0cu: goto label_3eec0c;
        case 0x3eec10u: goto label_3eec10;
        case 0x3eec14u: goto label_3eec14;
        case 0x3eec18u: goto label_3eec18;
        case 0x3eec1cu: goto label_3eec1c;
        case 0x3eec20u: goto label_3eec20;
        case 0x3eec24u: goto label_3eec24;
        case 0x3eec28u: goto label_3eec28;
        case 0x3eec2cu: goto label_3eec2c;
        case 0x3eec30u: goto label_3eec30;
        case 0x3eec34u: goto label_3eec34;
        case 0x3eec38u: goto label_3eec38;
        case 0x3eec3cu: goto label_3eec3c;
        case 0x3eec40u: goto label_3eec40;
        case 0x3eec44u: goto label_3eec44;
        case 0x3eec48u: goto label_3eec48;
        case 0x3eec4cu: goto label_3eec4c;
        case 0x3eec50u: goto label_3eec50;
        case 0x3eec54u: goto label_3eec54;
        case 0x3eec58u: goto label_3eec58;
        case 0x3eec5cu: goto label_3eec5c;
        case 0x3eec60u: goto label_3eec60;
        case 0x3eec64u: goto label_3eec64;
        case 0x3eec68u: goto label_3eec68;
        case 0x3eec6cu: goto label_3eec6c;
        case 0x3eec70u: goto label_3eec70;
        case 0x3eec74u: goto label_3eec74;
        case 0x3eec78u: goto label_3eec78;
        case 0x3eec7cu: goto label_3eec7c;
        case 0x3eec80u: goto label_3eec80;
        case 0x3eec84u: goto label_3eec84;
        case 0x3eec88u: goto label_3eec88;
        case 0x3eec8cu: goto label_3eec8c;
        case 0x3eec90u: goto label_3eec90;
        case 0x3eec94u: goto label_3eec94;
        case 0x3eec98u: goto label_3eec98;
        case 0x3eec9cu: goto label_3eec9c;
        case 0x3eeca0u: goto label_3eeca0;
        case 0x3eeca4u: goto label_3eeca4;
        case 0x3eeca8u: goto label_3eeca8;
        case 0x3eecacu: goto label_3eecac;
        case 0x3eecb0u: goto label_3eecb0;
        case 0x3eecb4u: goto label_3eecb4;
        case 0x3eecb8u: goto label_3eecb8;
        case 0x3eecbcu: goto label_3eecbc;
        case 0x3eecc0u: goto label_3eecc0;
        case 0x3eecc4u: goto label_3eecc4;
        case 0x3eecc8u: goto label_3eecc8;
        case 0x3eecccu: goto label_3eeccc;
        case 0x3eecd0u: goto label_3eecd0;
        case 0x3eecd4u: goto label_3eecd4;
        case 0x3eecd8u: goto label_3eecd8;
        case 0x3eecdcu: goto label_3eecdc;
        case 0x3eece0u: goto label_3eece0;
        case 0x3eece4u: goto label_3eece4;
        case 0x3eece8u: goto label_3eece8;
        case 0x3eececu: goto label_3eecec;
        case 0x3eecf0u: goto label_3eecf0;
        case 0x3eecf4u: goto label_3eecf4;
        case 0x3eecf8u: goto label_3eecf8;
        case 0x3eecfcu: goto label_3eecfc;
        case 0x3eed00u: goto label_3eed00;
        case 0x3eed04u: goto label_3eed04;
        case 0x3eed08u: goto label_3eed08;
        case 0x3eed0cu: goto label_3eed0c;
        case 0x3eed10u: goto label_3eed10;
        case 0x3eed14u: goto label_3eed14;
        case 0x3eed18u: goto label_3eed18;
        case 0x3eed1cu: goto label_3eed1c;
        case 0x3eed20u: goto label_3eed20;
        case 0x3eed24u: goto label_3eed24;
        case 0x3eed28u: goto label_3eed28;
        case 0x3eed2cu: goto label_3eed2c;
        case 0x3eed30u: goto label_3eed30;
        case 0x3eed34u: goto label_3eed34;
        case 0x3eed38u: goto label_3eed38;
        case 0x3eed3cu: goto label_3eed3c;
        case 0x3eed40u: goto label_3eed40;
        case 0x3eed44u: goto label_3eed44;
        case 0x3eed48u: goto label_3eed48;
        case 0x3eed4cu: goto label_3eed4c;
        case 0x3eed50u: goto label_3eed50;
        case 0x3eed54u: goto label_3eed54;
        case 0x3eed58u: goto label_3eed58;
        case 0x3eed5cu: goto label_3eed5c;
        case 0x3eed60u: goto label_3eed60;
        case 0x3eed64u: goto label_3eed64;
        case 0x3eed68u: goto label_3eed68;
        case 0x3eed6cu: goto label_3eed6c;
        case 0x3eed70u: goto label_3eed70;
        case 0x3eed74u: goto label_3eed74;
        case 0x3eed78u: goto label_3eed78;
        case 0x3eed7cu: goto label_3eed7c;
        case 0x3eed80u: goto label_3eed80;
        case 0x3eed84u: goto label_3eed84;
        case 0x3eed88u: goto label_3eed88;
        case 0x3eed8cu: goto label_3eed8c;
        case 0x3eed90u: goto label_3eed90;
        case 0x3eed94u: goto label_3eed94;
        case 0x3eed98u: goto label_3eed98;
        case 0x3eed9cu: goto label_3eed9c;
        case 0x3eeda0u: goto label_3eeda0;
        case 0x3eeda4u: goto label_3eeda4;
        case 0x3eeda8u: goto label_3eeda8;
        case 0x3eedacu: goto label_3eedac;
        case 0x3eedb0u: goto label_3eedb0;
        case 0x3eedb4u: goto label_3eedb4;
        case 0x3eedb8u: goto label_3eedb8;
        case 0x3eedbcu: goto label_3eedbc;
        case 0x3eedc0u: goto label_3eedc0;
        case 0x3eedc4u: goto label_3eedc4;
        case 0x3eedc8u: goto label_3eedc8;
        case 0x3eedccu: goto label_3eedcc;
        case 0x3eedd0u: goto label_3eedd0;
        case 0x3eedd4u: goto label_3eedd4;
        case 0x3eedd8u: goto label_3eedd8;
        case 0x3eeddcu: goto label_3eeddc;
        case 0x3eede0u: goto label_3eede0;
        case 0x3eede4u: goto label_3eede4;
        case 0x3eede8u: goto label_3eede8;
        case 0x3eedecu: goto label_3eedec;
        case 0x3eedf0u: goto label_3eedf0;
        case 0x3eedf4u: goto label_3eedf4;
        case 0x3eedf8u: goto label_3eedf8;
        case 0x3eedfcu: goto label_3eedfc;
        case 0x3eee00u: goto label_3eee00;
        case 0x3eee04u: goto label_3eee04;
        case 0x3eee08u: goto label_3eee08;
        case 0x3eee0cu: goto label_3eee0c;
        case 0x3eee10u: goto label_3eee10;
        case 0x3eee14u: goto label_3eee14;
        case 0x3eee18u: goto label_3eee18;
        case 0x3eee1cu: goto label_3eee1c;
        case 0x3eee20u: goto label_3eee20;
        case 0x3eee24u: goto label_3eee24;
        case 0x3eee28u: goto label_3eee28;
        case 0x3eee2cu: goto label_3eee2c;
        case 0x3eee30u: goto label_3eee30;
        case 0x3eee34u: goto label_3eee34;
        case 0x3eee38u: goto label_3eee38;
        case 0x3eee3cu: goto label_3eee3c;
        case 0x3eee40u: goto label_3eee40;
        case 0x3eee44u: goto label_3eee44;
        case 0x3eee48u: goto label_3eee48;
        case 0x3eee4cu: goto label_3eee4c;
        case 0x3eee50u: goto label_3eee50;
        case 0x3eee54u: goto label_3eee54;
        case 0x3eee58u: goto label_3eee58;
        case 0x3eee5cu: goto label_3eee5c;
        case 0x3eee60u: goto label_3eee60;
        case 0x3eee64u: goto label_3eee64;
        default: break;
    }

    ctx->pc = 0x3eeaa8u;

label_3eeaa8:
    // 0x3eeaa8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3eeaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3eeaac:
    // 0x3eeaac: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3eeaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3eeab0:
    // 0x3eeab0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3eeab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3eeab4:
    // 0x3eeab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eeab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eeab8:
    // 0x3eeab8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3eeab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3eeabc:
    // 0x3eeabc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3eeabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3eeac0:
    // 0x3eeac0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3eeac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3eeac4:
    // 0x3eeac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3eeac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eeac8:
    // 0x3eeac8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3eeac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3eeacc:
    // 0x3eeacc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3eeaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3eead0:
    // 0x3eead0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3eead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3eead4:
    // 0x3eead4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3eead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3eead8:
    // 0x3eead8: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x3eead8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3eeadc:
    // 0x3eeadc: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x3eeadcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3eeae0:
    // 0x3eeae0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3eeae0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3eeae4:
    // 0x3eeae4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3eeae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3eeae8:
    // 0x3eeae8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3eeae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3eeaec:
    // 0x3eeaec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eeaecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eeaf0:
    // 0x3eeaf0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eeaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eeaf4:
    // 0x3eeaf4: 0x40f809  jalr        $v0
label_3eeaf8:
    if (ctx->pc == 0x3EEAF8u) {
        ctx->pc = 0x3EEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEAF4u;
        // 0x3eeaf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEAFCu;
        goto label_3eeafc;
    }
    ctx->pc = 0x3EEAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EEAFCu);
        ctx->pc = 0x3EEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEAF4u;
        // 0x3eeaf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEAF4u, 0x3EEAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EEAFCu;
label_3eeafc:
    // 0x3eeafc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3eeafcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb00:
    // 0x3eeb00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eeb04:
    // 0x3eeb04: 0x120200c7  beq         $s0, $v0, . + 4 + (0xC7 << 2)
label_3eeb08:
    if (ctx->pc == 0x3EEB08u) {
        ctx->pc = 0x3EEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB04u;
        // 0x3eeb08: 0x2e020009  sltiu       $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB0Cu;
        goto label_3eeb0c;
    }
    ctx->pc = 0x3EEB04u;
    {
        const bool branch_taken_0x3eeb04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB04u;
        // 0x3eeb08: 0x2e020009  sltiu       $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb04) {
            ctx->pc = 0x3EEE24u;
            goto label_3eee24;
        }
    }
    ctx->pc = 0x3EEB0Cu;
label_3eeb0c:
    // 0x3eeb0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3eeb10:
    if (ctx->pc == 0x3EEB10u) {
        ctx->pc = 0x3EEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB0Cu;
        // 0x3eeb10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB14u;
        goto label_3eeb14;
    }
    ctx->pc = 0x3EEB0Cu;
    {
        const bool branch_taken_0x3eeb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB0Cu;
        // 0x3eeb10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb0c) {
            ctx->pc = 0x3EEB24u;
            goto label_3eeb24;
        }
    }
    ctx->pc = 0x3EEB14u;
label_3eeb14:
    // 0x3eeb14: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3eeb18:
    if (ctx->pc == 0x3EEB18u) {
        ctx->pc = 0x3EEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB14u;
        // 0x3eeb18: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB1Cu;
        goto label_3eeb1c;
    }
    ctx->pc = 0x3EEB14u;
    {
        const bool branch_taken_0x3eeb14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB14u;
        // 0x3eeb18: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb14) {
            ctx->pc = 0x3EEB38u;
            goto label_3eeb38;
        }
    }
    ctx->pc = 0x3EEB1Cu;
label_3eeb1c:
    // 0x3eeb1c: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_3eeb20:
    if (ctx->pc == 0x3EEB20u) {
        ctx->pc = 0x3EEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB1Cu;
        // 0x3eeb20: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB24u;
        goto label_3eeb24;
    }
    ctx->pc = 0x3EEB1Cu;
    {
        const bool branch_taken_0x3eeb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB1Cu;
        // 0x3eeb20: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb1c) {
            ctx->pc = 0x3EEE34u;
            goto label_3eee34;
        }
    }
    ctx->pc = 0x3EEB24u;
label_3eeb24:
    // 0x3eeb24: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3eeb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3eeb28:
    // 0x3eeb28: 0x120200b6  beq         $s0, $v0, . + 4 + (0xB6 << 2)
label_3eeb2c:
    if (ctx->pc == 0x3EEB2Cu) {
        ctx->pc = 0x3EEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB28u;
        // 0x3eeb2c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB30u;
        goto label_3eeb30;
    }
    ctx->pc = 0x3EEB28u;
    {
        const bool branch_taken_0x3eeb28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB28u;
        // 0x3eeb2c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb28) {
            ctx->pc = 0x3EEE04u;
            goto label_3eee04;
        }
    }
    ctx->pc = 0x3EEB30u;
label_3eeb30:
    // 0x3eeb30: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_3eeb34:
    if (ctx->pc == 0x3EEB34u) {
        ctx->pc = 0x3EEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB30u;
        // 0x3eeb34: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB38u;
        goto label_3eeb38;
    }
    ctx->pc = 0x3EEB30u;
    {
        const bool branch_taken_0x3eeb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB30u;
        // 0x3eeb34: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb30) {
            ctx->pc = 0x3EEE34u;
            goto label_3eee34;
        }
    }
    ctx->pc = 0x3EEB38u;
label_3eeb38:
    // 0x3eeb38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eeb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eeb3c:
    // 0x3eeb3c: 0xc0ea12a  jal         func_3A84A8
label_3eeb40:
    if (ctx->pc == 0x3EEB40u) {
        ctx->pc = 0x3EEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB3Cu;
        // 0x3eeb40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB44u;
        goto label_3eeb44;
    }
    ctx->pc = 0x3EEB3Cu;
    SET_GPR_U32(ctx, 31, 0x3EEB44u);
    ctx->pc = 0x3EEB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB3Cu;
    // 0x3eeb40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EEB3Cu, 0x3EEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB44u;
label_3eeb44:
    // 0x3eeb44: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3eeb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3eeb48:
    // 0x3eeb48: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eeb48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eeb4c:
    // 0x3eeb4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eeb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eeb50:
    // 0x3eeb50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eeb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb54:
    // 0x3eeb54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3eeb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3eeb58:
    // 0x3eeb58: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3eeb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3eeb5c:
    // 0x3eeb5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3eeb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3eeb60:
    // 0x3eeb60: 0xc0ea12a  jal         func_3A84A8
label_3eeb64:
    if (ctx->pc == 0x3EEB64u) {
        ctx->pc = 0x3EEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB60u;
        // 0x3eeb64: 0x26540010  addiu       $s4, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB68u;
        goto label_3eeb68;
    }
    ctx->pc = 0x3EEB60u;
    SET_GPR_U32(ctx, 31, 0x3EEB68u);
    ctx->pc = 0x3EEB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB60u;
    // 0x3eeb64: 0x26540010  addiu       $s4, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EEB60u, 0x3EEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB68u;
label_3eeb68:
    // 0x3eeb68: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3eeb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3eeb6c:
    // 0x3eeb6c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3eeb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3eeb70:
    // 0x3eeb70: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eeb70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eeb74:
    // 0x3eeb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eeb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb78:
    // 0x3eeb78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3eeb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3eeb7c:
    // 0x3eeb7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3eeb7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3eeb80:
    // 0x3eeb80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3eeb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3eeb84:
    // 0x3eeb84: 0xc0ea146  jal         func_3A8518
label_3eeb88:
    if (ctx->pc == 0x3EEB88u) {
        ctx->pc = 0x3EEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB84u;
        // 0x3eeb88: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB8Cu;
        goto label_3eeb8c;
    }
    ctx->pc = 0x3EEB84u;
    SET_GPR_U32(ctx, 31, 0x3EEB8Cu);
    ctx->pc = 0x3EEB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB84u;
    // 0x3eeb88: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EEB84u, 0x3EEB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB8Cu;
label_3eeb8c:
    // 0x3eeb8c: 0xc0ea146  jal         func_3A8518
label_3eeb90:
    if (ctx->pc == 0x3EEB90u) {
        ctx->pc = 0x3EEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB8Cu;
        // 0x3eeb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEB94u;
        goto label_3eeb94;
    }
    ctx->pc = 0x3EEB8Cu;
    SET_GPR_U32(ctx, 31, 0x3EEB94u);
    ctx->pc = 0x3EEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB8Cu;
    // 0x3eeb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EEB8Cu, 0x3EEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB94u;
label_3eeb94:
    // 0x3eeb94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eeb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb98:
    // 0x3eeb98: 0xc0ea14c  jal         func_3A8530
label_3eeb9c:
    if (ctx->pc == 0x3EEB9Cu) {
        ctx->pc = 0x3EEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB98u;
        // 0x3eeb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEBA0u;
        goto label_3eeba0;
    }
    ctx->pc = 0x3EEB98u;
    SET_GPR_U32(ctx, 31, 0x3EEBA0u);
    ctx->pc = 0x3EEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB98u;
    // 0x3eeb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EEB98u, 0x3EEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEBA0u;
label_3eeba0:
    // 0x3eeba0: 0xc0ea14c  jal         func_3A8530
label_3eeba4:
    if (ctx->pc == 0x3EEBA4u) {
        ctx->pc = 0x3EEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEBA0u;
        // 0x3eeba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEBA8u;
        goto label_3eeba8;
    }
    ctx->pc = 0x3EEBA0u;
    SET_GPR_U32(ctx, 31, 0x3EEBA8u);
    ctx->pc = 0x3EEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEBA0u;
    // 0x3eeba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EEBA0u, 0x3EEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEBA8u;
label_3eeba8:
    // 0x3eeba8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3eeba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eebac:
    // 0x3eebac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3eebacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3eebb0:
    // 0x3eebb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3eebb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3eebb4:
    // 0x3eebb4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3eebb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3eebb8:
    // 0x3eebb8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3eebb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3eebbc:
    // 0x3eebbc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3eebbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3eebc0:
    // 0x3eebc0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3eebc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3eebc4:
    // 0x3eebc4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3eebc4u;
    // VWAITQ (Q already resolved in this runtime)
label_3eebc8:
    // 0x3eebc8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3eebc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3eebcc:
    // 0x3eebcc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3eebccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3eebd0:
    // 0x3eebd0: 0x2456b8b8  addiu       $s6, $v0, -0x4748
    ctx->pc = 0x3eebd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3eebd4:
    // 0x3eebd4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3eebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3eebd8:
    // 0x3eebd8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3eebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3eebdc:
    // 0x3eebdc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3eebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3eebe0:
    // 0x3eebe0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x3eebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3eebe4:
    // 0x3eebe4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3eebe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3eebe8:
    // 0x3eebe8: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3eebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_3eebec:
    // 0x3eebec: 0xc44c5d50  lwc1        $f12, 0x5D50($v0)
    ctx->pc = 0x3eebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3eebf0:
    // 0x3eebf0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3eebf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3eebf4:
    // 0x3eebf4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3eebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3eebf8:
    // 0x3eebf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3eebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3eebfc:
    // 0x3eebfc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3eebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3eec00:
    // 0x3eec00: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x3eec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_3eec04:
    // 0x3eec04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3eec04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3eec08:
    // 0x3eec08: 0xc0cd518  jal         func_335460
label_3eec0c:
    if (ctx->pc == 0x3EEC0Cu) {
        ctx->pc = 0x3EEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC08u;
        // 0x3eec0c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEC10u;
        goto label_3eec10;
    }
    ctx->pc = 0x3EEC08u;
    SET_GPR_U32(ctx, 31, 0x3EEC10u);
    ctx->pc = 0x3EEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC08u;
    // 0x3eec0c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EEC08u, 0x3EEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC10u;
label_3eec10:
    // 0x3eec10: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3eec10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3eec14:
    // 0x3eec14: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3eec14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3eec18:
    // 0x3eec18: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3eec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3eec1c:
    // 0x3eec1c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3eec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3eec20:
    // 0x3eec20: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3eec20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3eec24:
    // 0x3eec24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3eec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eec28:
    // 0x3eec28: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x3eec28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3eec2c:
    // 0x3eec2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eec30:
    // 0x3eec30: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3eec30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eec34:
    // 0x3eec34: 0xc136b18  jal         func_4DAC60
label_3eec38:
    if (ctx->pc == 0x3EEC38u) {
        ctx->pc = 0x3EEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC34u;
        // 0x3eec38: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEC3Cu;
        goto label_3eec3c;
    }
    ctx->pc = 0x3EEC34u;
    SET_GPR_U32(ctx, 31, 0x3EEC3Cu);
    ctx->pc = 0x3EEC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC34u;
    // 0x3eec38: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EEC34u, 0x3EEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC3Cu;
label_3eec3c:
    // 0x3eec3c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3eec3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eec40:
    // 0x3eec40: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3eec40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3eec44:
    // 0x3eec44: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3eec44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3eec48:
    // 0x3eec48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3eec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3eec4c:
    // 0x3eec4c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3eec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3eec50:
    // 0x3eec50: 0xc0cd518  jal         func_335460
label_3eec54:
    if (ctx->pc == 0x3EEC54u) {
        ctx->pc = 0x3EEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC50u;
        // 0x3eec54: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEC58u;
        goto label_3eec58;
    }
    ctx->pc = 0x3EEC50u;
    SET_GPR_U32(ctx, 31, 0x3EEC58u);
    ctx->pc = 0x3EEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC50u;
    // 0x3eec54: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EEC50u, 0x3EEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC58u;
label_3eec58:
    // 0x3eec58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3eec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3eec5c:
    // 0x3eec5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3eec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3eec60:
    // 0x3eec60: 0xc136b24  jal         func_4DAC90
label_3eec64:
    if (ctx->pc == 0x3EEC64u) {
        ctx->pc = 0x3EEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC60u;
        // 0x3eec64: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEC68u;
        goto label_3eec68;
    }
    ctx->pc = 0x3EEC60u;
    SET_GPR_U32(ctx, 31, 0x3EEC68u);
    ctx->pc = 0x3EEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC60u;
    // 0x3eec64: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EEC60u, 0x3EEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC68u;
label_3eec68:
    // 0x3eec68: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3eec68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3eec6c:
    // 0x3eec6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3eec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eec70:
    // 0x3eec70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eec70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eec74:
    // 0x3eec74: 0xc0f1778  jal         func_3C5DE0
label_3eec78:
    if (ctx->pc == 0x3EEC78u) {
        ctx->pc = 0x3EEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC74u;
        // 0x3eec78: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEC7Cu;
        goto label_3eec7c;
    }
    ctx->pc = 0x3EEC74u;
    SET_GPR_U32(ctx, 31, 0x3EEC7Cu);
    ctx->pc = 0x3EEC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC74u;
    // 0x3eec78: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x3EEC74u, 0x3EEC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC7Cu;
label_3eec7c:
    // 0x3eec7c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3eec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3eec80:
    // 0x3eec80: 0x5c40005c  bgtzl       $v0, . + 4 + (0x5C << 2)
label_3eec84:
    if (ctx->pc == 0x3EEC84u) {
        ctx->pc = 0x3EEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC80u;
        // 0x3eec84: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEC88u;
        goto label_3eec88;
    }
    ctx->pc = 0x3EEC80u;
    {
        const bool branch_taken_0x3eec80 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3eec80) {
            ctx->pc = 0x3EEC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEC80u;
            // 0x3eec84: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEDF4u;
            goto label_3eedf4;
        }
    }
    ctx->pc = 0x3EEC88u;
label_3eec88:
    // 0x3eec88: 0x3c013c52  lui         $at, 0x3C52
    ctx->pc = 0x3eec88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15442 << 16));
label_3eec8c:
    // 0x3eec8c: 0x342145b3  ori         $at, $at, 0x45B3
    ctx->pc = 0x3eec8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17843);
label_3eec90:
    // 0x3eec90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eec90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eec94:
    // 0x3eec94: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3eec94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3eec98:
    // 0x3eec98: 0x3c01be5c  lui         $at, 0xBE5C
    ctx->pc = 0x3eec98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48732 << 16));
label_3eec9c:
    // 0x3eec9c: 0x34214d23  ori         $at, $at, 0x4D23
    ctx->pc = 0x3eec9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19747);
label_3eeca0:
    // 0x3eeca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3eeca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3eeca4:
    // 0x3eeca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eeca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eeca8:
    // 0x3eeca8: 0x3c013eca  lui         $at, 0x3ECA
    ctx->pc = 0x3eeca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16074 << 16));
label_3eecac:
    // 0x3eecac: 0x3421808d  ori         $at, $at, 0x808D
    ctx->pc = 0x3eecacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32909);
label_3eecb0:
    // 0x3eecb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3eecb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3eecb4:
    // 0x3eecb4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3eecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3eecb8:
    // 0x3eecb8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3eecb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3eecbc:
    // 0x3eecbc: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x3eecbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3eecc0:
    // 0x3eecc0: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x3eecc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3eecc4:
    // 0x3eecc4: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x3eecc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3eecc8:
    // 0x3eecc8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3eecc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eeccc:
    // 0x3eeccc: 0xc136b30  jal         func_4DACC0
label_3eecd0:
    if (ctx->pc == 0x3EECD0u) {
        ctx->pc = 0x3EECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EECCCu;
        // 0x3eecd0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EECD4u;
        goto label_3eecd4;
    }
    ctx->pc = 0x3EECCCu;
    SET_GPR_U32(ctx, 31, 0x3EECD4u);
    ctx->pc = 0x3EECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EECCCu;
    // 0x3eecd0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3EECCCu, 0x3EECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EECD4u;
label_3eecd4:
    // 0x3eecd4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3eecd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eecd8:
    // 0x3eecd8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3eecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3eecdc:
    // 0x3eecdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3eecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eece0:
    // 0x3eece0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3eece0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eece4:
    // 0x3eece4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3eece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3eece8:
    // 0x3eece8: 0xc136b18  jal         func_4DAC60
label_3eecec:
    if (ctx->pc == 0x3EECECu) {
        ctx->pc = 0x3EECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EECE8u;
        // 0x3eecec: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EECF0u;
        goto label_3eecf0;
    }
    ctx->pc = 0x3EECE8u;
    SET_GPR_U32(ctx, 31, 0x3EECF0u);
    ctx->pc = 0x3EECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EECE8u;
    // 0x3eecec: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EECE8u, 0x3EECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EECF0u;
label_3eecf0:
    // 0x3eecf0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3eecf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eecf4:
    // 0x3eecf4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3eecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3eecf8:
    // 0x3eecf8: 0x3c064a48  lui         $a2, 0x4A48
    ctx->pc = 0x3eecf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19016 << 16));
label_3eecfc:
    // 0x3eecfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3eecfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eed00:
    // 0x3eed00: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3eed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3eed04:
    // 0x3eed04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3eed04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3eed08:
    // 0x3eed08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eed08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eed0c:
    // 0x3eed0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3eed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eed10:
    // 0x3eed10: 0xc0f1658  jal         func_3C5960
label_3eed14:
    if (ctx->pc == 0x3EED14u) {
        ctx->pc = 0x3EED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED10u;
        // 0x3eed14: 0x34c64220  ori         $a2, $a2, 0x4220 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16928);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EED18u;
        goto label_3eed18;
    }
    ctx->pc = 0x3EED10u;
    SET_GPR_U32(ctx, 31, 0x3EED18u);
    ctx->pc = 0x3EED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED10u;
    // 0x3eed14: 0x34c64220  ori         $a2, $a2, 0x4220 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16928);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3EED10u, 0x3EED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED18u;
label_3eed18:
    // 0x3eed18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3eed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3eed1c:
    // 0x3eed1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3eed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eed20:
    // 0x3eed20: 0xc136b18  jal         func_4DAC60
label_3eed24:
    if (ctx->pc == 0x3EED24u) {
        ctx->pc = 0x3EED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED20u;
        // 0x3eed24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EED28u;
        goto label_3eed28;
    }
    ctx->pc = 0x3EED20u;
    SET_GPR_U32(ctx, 31, 0x3EED28u);
    ctx->pc = 0x3EED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED20u;
    // 0x3eed24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EED20u, 0x3EED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED28u;
label_3eed28:
    // 0x3eed28: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3eed28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eed2c:
    // 0x3eed2c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3eed2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3eed30:
    // 0x3eed30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3eed30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3eed34:
    // 0x3eed34: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3eed34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3eed38:
    // 0x3eed38: 0xc0cd518  jal         func_335460
label_3eed3c:
    if (ctx->pc == 0x3EED3Cu) {
        ctx->pc = 0x3EED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED38u;
        // 0x3eed3c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EED40u;
        goto label_3eed40;
    }
    ctx->pc = 0x3EED38u;
    SET_GPR_U32(ctx, 31, 0x3EED40u);
    ctx->pc = 0x3EED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED38u;
    // 0x3eed3c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EED38u, 0x3EED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED40u;
label_3eed40:
    // 0x3eed40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3eed40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3eed44:
    // 0x3eed44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eed48:
    // 0x3eed48: 0xc136b24  jal         func_4DAC90
label_3eed4c:
    if (ctx->pc == 0x3EED4Cu) {
        ctx->pc = 0x3EED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED48u;
        // 0x3eed4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EED50u;
        goto label_3eed50;
    }
    ctx->pc = 0x3EED48u;
    SET_GPR_U32(ctx, 31, 0x3EED50u);
    ctx->pc = 0x3EED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED48u;
    // 0x3eed4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EED48u, 0x3EED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED50u;
label_3eed50:
    // 0x3eed50: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3eed50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eed54:
    // 0x3eed54: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3eed54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3eed58:
    // 0x3eed58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3eed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eed5c:
    // 0x3eed5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eed5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eed60:
    // 0x3eed60: 0xc0f1778  jal         func_3C5DE0
label_3eed64:
    if (ctx->pc == 0x3EED64u) {
        ctx->pc = 0x3EED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED60u;
        // 0x3eed64: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EED68u;
        goto label_3eed68;
    }
    ctx->pc = 0x3EED60u;
    SET_GPR_U32(ctx, 31, 0x3EED68u);
    ctx->pc = 0x3EED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED60u;
    // 0x3eed64: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x3EED60u, 0x3EED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED68u;
label_3eed68:
    // 0x3eed68: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3eed68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3eed6c:
    // 0x3eed6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3eed6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3eed70:
    // 0x3eed70: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3eed70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3eed74:
    // 0x3eed74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eed78:
    // 0x3eed78: 0xc0f15f6  jal         func_3C57D8
label_3eed7c:
    if (ctx->pc == 0x3EED7Cu) {
        ctx->pc = 0x3EED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED78u;
        // 0x3eed7c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EED80u;
        goto label_3eed80;
    }
    ctx->pc = 0x3EED78u;
    SET_GPR_U32(ctx, 31, 0x3EED80u);
    ctx->pc = 0x3EED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED78u;
    // 0x3eed7c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3EED78u, 0x3EED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED80u;
label_3eed80:
    // 0x3eed80: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3eed80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3eed84:
    // 0x3eed84: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3eed84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3eed88:
    // 0x3eed88: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3eed88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3eed8c:
    // 0x3eed8c: 0x24845d40  addiu       $a0, $a0, 0x5D40
    ctx->pc = 0x3eed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23872));
label_3eed90:
    // 0x3eed90: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3eed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3eed94:
    // 0x3eed94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3eed94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eed98:
    // 0x3eed98: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3eed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3eed9c:
    // 0x3eed9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3eed9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eeda0:
    // 0x3eeda0: 0xc0e94fc  jal         func_3A53F0
label_3eeda4:
    if (ctx->pc == 0x3EEDA4u) {
        ctx->pc = 0x3EEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDA0u;
        // 0x3eeda4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEDA8u;
        goto label_3eeda8;
    }
    ctx->pc = 0x3EEDA0u;
    SET_GPR_U32(ctx, 31, 0x3EEDA8u);
    ctx->pc = 0x3EEDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDA0u;
    // 0x3eeda4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3EEDA0u, 0x3EEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDA8u;
label_3eeda8:
    // 0x3eeda8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3eeda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3eedac:
    // 0x3eedac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3eedacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3eedb0:
    // 0x3eedb0: 0xc1073cc  jal         func_41CF30
label_3eedb4:
    if (ctx->pc == 0x3EEDB4u) {
        ctx->pc = 0x3EEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDB0u;
        // 0x3eedb4: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEDB8u;
        goto label_3eedb8;
    }
    ctx->pc = 0x3EEDB0u;
    SET_GPR_U32(ctx, 31, 0x3EEDB8u);
    ctx->pc = 0x3EEDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDB0u;
    // 0x3eedb4: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3EEDB0u, 0x3EEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDB8u;
label_3eedb8:
    // 0x3eedb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3eedb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3eedbc:
    // 0x3eedbc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3eedc0:
    if (ctx->pc == 0x3EEDC0u) {
        ctx->pc = 0x3EEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDBCu;
        // 0x3eedc0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEDC4u;
        goto label_3eedc4;
    }
    ctx->pc = 0x3EEDBCu;
    {
        const bool branch_taken_0x3eedbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDBCu;
        // 0x3eedc0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eedbc) {
            ctx->pc = 0x3EEDECu;
            goto label_3eedec;
        }
    }
    ctx->pc = 0x3EEDC4u;
label_3eedc4:
    // 0x3eedc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eedc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eedc8:
    // 0x3eedc8: 0xc0e8dee  jal         func_3A37B8
label_3eedcc:
    if (ctx->pc == 0x3EEDCCu) {
        ctx->pc = 0x3EEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDC8u;
        // 0x3eedcc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEDD0u;
        goto label_3eedd0;
    }
    ctx->pc = 0x3EEDC8u;
    SET_GPR_U32(ctx, 31, 0x3EEDD0u);
    ctx->pc = 0x3EEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDC8u;
    // 0x3eedcc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EEDC8u, 0x3EEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDD0u;
label_3eedd0:
    // 0x3eedd0: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3eedd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3eedd4:
    // 0x3eedd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3eedd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eedd8:
    // 0x3eedd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3eedd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eeddc:
    // 0x3eeddc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3eeddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eede0:
    // 0x3eede0: 0xc045ca0  jal         func_117280
label_3eede4:
    if (ctx->pc == 0x3EEDE4u) {
        ctx->pc = 0x3EEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDE0u;
        // 0x3eede4: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEDE8u;
        goto label_3eede8;
    }
    ctx->pc = 0x3EEDE0u;
    SET_GPR_U32(ctx, 31, 0x3EEDE8u);
    ctx->pc = 0x3EEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDE0u;
    // 0x3eede4: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3EEDE0u, 0x3EEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDE8u;
label_3eede8:
    // 0x3eede8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3eede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3eedec:
    // 0x3eedec: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3eedecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3eedf0:
    // 0x3eedf0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3eedf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3eedf4:
    // 0x3eedf4: 0xc0e9bb2  jal         func_3A6EC8
label_3eedf8:
    if (ctx->pc == 0x3EEDF8u) {
        ctx->pc = 0x3EEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDF4u;
        // 0x3eedf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEDFCu;
        goto label_3eedfc;
    }
    ctx->pc = 0x3EEDF4u;
    SET_GPR_U32(ctx, 31, 0x3EEDFCu);
    ctx->pc = 0x3EEDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDF4u;
    // 0x3eedf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3EEDF4u, 0x3EEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDFCu;
label_3eedfc:
    // 0x3eedfc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3eee00:
    if (ctx->pc == 0x3EEE00u) {
        ctx->pc = 0x3EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDFCu;
        // 0x3eee00: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEE04u;
        goto label_3eee04;
    }
    ctx->pc = 0x3EEDFCu;
    {
        const bool branch_taken_0x3eedfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDFCu;
        // 0x3eee00: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eedfc) {
            ctx->pc = 0x3EEE30u;
            goto label_3eee30;
        }
    }
    ctx->pc = 0x3EEE04u;
label_3eee04:
    // 0x3eee04: 0xc0ea146  jal         func_3A8518
label_3eee08:
    if (ctx->pc == 0x3EEE08u) {
        ctx->pc = 0x3EEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE04u;
        // 0x3eee08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEE0Cu;
        goto label_3eee0c;
    }
    ctx->pc = 0x3EEE04u;
    SET_GPR_U32(ctx, 31, 0x3EEE0Cu);
    ctx->pc = 0x3EEE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEE04u;
    // 0x3eee08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EEE04u, 0x3EEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE0Cu;
label_3eee0c:
    // 0x3eee0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eee10:
    // 0x3eee10: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3eee10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3eee14:
    // 0x3eee14: 0xc0e9bb2  jal         func_3A6EC8
label_3eee18:
    if (ctx->pc == 0x3EEE18u) {
        ctx->pc = 0x3EEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE14u;
        // 0x3eee18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEE1Cu;
        goto label_3eee1c;
    }
    ctx->pc = 0x3EEE14u;
    SET_GPR_U32(ctx, 31, 0x3EEE1Cu);
    ctx->pc = 0x3EEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEE14u;
    // 0x3eee18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3EEE14u, 0x3EEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE1Cu;
label_3eee1c:
    // 0x3eee1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3eee20:
    if (ctx->pc == 0x3EEE20u) {
        ctx->pc = 0x3EEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE1Cu;
        // 0x3eee20: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEE24u;
        goto label_3eee24;
    }
    ctx->pc = 0x3EEE1Cu;
    {
        const bool branch_taken_0x3eee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE1Cu;
        // 0x3eee20: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee1c) {
            ctx->pc = 0x3EEE30u;
            goto label_3eee30;
        }
    }
    ctx->pc = 0x3EEE24u;
label_3eee24:
    // 0x3eee24: 0xc0e8616  jal         func_3A1858
label_3eee28:
    if (ctx->pc == 0x3EEE28u) {
        ctx->pc = 0x3EEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE24u;
        // 0x3eee28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEE2Cu;
        goto label_3eee2c;
    }
    ctx->pc = 0x3EEE24u;
    SET_GPR_U32(ctx, 31, 0x3EEE2Cu);
    ctx->pc = 0x3EEE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEE24u;
    // 0x3eee28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3EEE24u, 0x3EEE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE2Cu;
label_3eee2c:
    // 0x3eee2c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3eee2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3eee30:
    // 0x3eee30: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3eee30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3eee34:
    // 0x3eee34: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3eee34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3eee38:
    // 0x3eee38: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3eee38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3eee3c:
    // 0x3eee3c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3eee3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3eee40:
    // 0x3eee40: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3eee40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3eee44:
    // 0x3eee44: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3eee44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3eee48:
    // 0x3eee48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3eee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3eee4c:
    // 0x3eee4c: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x3eee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3eee50:
    // 0x3eee50: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3eee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3eee54:
    // 0x3eee54: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3eee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3eee58:
    // 0x3eee58: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3eee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eee5c:
    // 0x3eee5c: 0x3e00008  jr          $ra
label_3eee60:
    if (ctx->pc == 0x3EEE60u) {
        ctx->pc = 0x3EEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE5Cu;
        // 0x3eee60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEE64u;
        goto label_3eee64;
    }
    ctx->pc = 0x3EEE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE5Cu;
        // 0x3eee60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEE64u;
label_3eee64:
    // 0x3eee64: 0x0  nop
    ctx->pc = 0x3eee64u;
    // NOP
    ctx->pc = 0x3eee68u;
}
